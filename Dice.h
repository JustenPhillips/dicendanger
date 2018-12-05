// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/10/2017
// Assignment: DiceAndDanger - D&D
#ifndef _DICE_H
#define _DICE_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
using namespace std;

void printCharacter(int *);
void rollCharacter(int* );
char readChar();

class Dice{
    private:
    int sides;//how many side
    int *Side;//pointer to Side of dice array
    int face;//face value top of dice
  public:
    Dice(int sides); // constructor
    ~Dice(); //deconstructor
    int Roll(int sides); // return the random roll
    int Read();//read face
    int Read(int n);//read a side of the dice
  
};
#endif    /* _DICE_H not defined */