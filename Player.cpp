#include "Player.h"
using namespace std;


Player::Player(int ships)
{
        shipsLeft = ships;
}

Player::~Player()
{

}

bool Player::checkHit()
{

}

int Player::checkShips()
{
    return shipsLeft;
}

void Player::hit()
{

}

Board Player::getHiddenBoard()
{

}

Board Player::getGameBoard()
{

}