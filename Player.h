#ifndef PLAYER_H
#define PLAYER_H

#include "Letter.h"
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
    // E: returns player's name
    virtual const string &get_name() const = 0;

    // R: letter is in the alphabet
    // E: plays a letter according to player strategy AND removes from alphabet
    virtual Letter play_letter(const Letter &let) = 0;

    // avoiding compiler errors
    virtual ~Player() {}
};

Player *Player_factory(const string &name, const string &strategy);

ostream & operator<<(ostream &os , const Player &p);

#endif