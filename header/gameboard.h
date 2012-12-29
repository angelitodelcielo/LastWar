#ifndef GAMEBOARD_H
#define GAMEBOARD_H

struct gameboard
{
    CARDLIST *hand;
    int resources;
    CARD *attack;
};
