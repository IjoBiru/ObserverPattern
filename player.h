//Player.h 

#ifndef PLAYER_H
#define PLAYER_H
#include<Observer.h>
#include<iostream>

using namespace std;

class Player : public Observer
{
    public:
        Player();
        virtual ~Player();
        void Update() override;
        void setPlayerPosition(int playerPosition);
        int getPlayerPosition();

    protected:

    private:
        int position;
};

#endif // PLAYER_H


//Player.cpp

#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::Update(){
    cout << "Pememang posisi nomor ke - " << getPlayerPosition() << endl;
}

void Player::setPlayerPosition(int playerPosition){
    position = playerPosition;
}

int Player::getPlayerPosition(){
    return position;
}
