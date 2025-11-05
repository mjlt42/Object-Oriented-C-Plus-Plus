//Game.cpp
#include "Game.h"

Game::Game(){}

/**
 * @brief creates up to n RPG pointers and updates name with ordering. Populates liveplayers from 0 to
 * n-1 as all players are alive at first.
 * 
 */
void Game::generatePlayers(int n){
    for(int i = 0; i < n; i++){
        players.push_back(new RPG());
        (*players[i]).setName("NPC_"+to_string(i));
        live_players.insert(i);
    }
}

/**
 * @brief Randomly selects a player (via index) from the
 * set of alive players, live_players
 * 
 * @return int: index for vector, players 
 */
int Game::selectPlayer(){
    
    random_device rd;
    mt19937 gen(rd()); //seed
    uniform_int_distribution<> dist(0, live_players.size() - 1);

    int randomIndex = dist(gen); //random index

    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

/**
 * @brief Resets winner's hit_taken to 0
 * removes loser from live players
 * Calls  updateExpLevel() for the winner
 * prints "NPC_X won against NPC_Y"
 * 
 * @param winner : pointer to RPG winner
 * @param loser : pointer to RPG loser
 * @param loserIndex : int index of loser; used to remove from live_players
 * 
 */
void Game::endRound(RPG* winner, RPG* loser, int loserIndex){
    (*winner).setHitsTaken(0);
    (*winner).updateExpLevel();
    live_players.erase(loserIndex);
    printf("%s won against %s\n", (*winner).getName().c_str(), (*loser).getName().c_str());
}

/**
 * @brief calls selectPlayers() twice to get 2 players at random. If the players are redundant
 * make a recursive call to battleRound and return.
 * Run a round of hits across player1 and player 2 until 1 is alive
 * Call endRound to highlight who won and update the stats
 * 
 */

 void Game::battleRound(){

    int playerIndex1 = selectPlayer();
    int playerIndex2 = selectPlayer();

    if (playerIndex1 == playerIndex2){
        battleRound();
        return;
    }

    RPG* player1 = players[playerIndex1];
    RPG* player2 = players[playerIndex2];

    while((*player1).isAlive() && (*player2).isAlive()){
        
        (*player1).attack(player2);

        if((*player2).isAlive()) (*player2).attack(player1); //checks to see if player2 is dead before attack
    }

    if((*player1).isAlive()) endRound(player1, player2, playerIndex2);
    else endRound(player2, player1, playerIndex1);
    
 }
 
 /**
  * @brief Runs battleRound() until there is only 1 player alive.
  * Recall that endRound() shrinks the size of live_players
  * 
  */
 void Game::gameLoop(){
    while (live_players.size() > 1)
    {
        battleRound();
    }
    printf("\n");
 }

 /**
  * @brief Call printStats on all the players
  * 
  */
 void Game::printFinalResults(){
    for(int i = 0; i < players.size(); i++){
        (*players[i]).printStats();
    }
    printf("\n");
 }

 /**
  * @brief Destroys the Game:: Game object
  * 
  */
 Game::~Game(){}
