// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/10/2017
// Assignment: DiceAndDanger - D&D
#include "Dice.h"

int main() 
{ 
       srand((unsigned)time(NULL));

char yesno = 'y';
do
    {
const int ATT = 6;
int attributeArray[ATT];
    if (yesno == 'y' || yesno == 'Y')
		{
rollCharacter(attributeArray);
		}

cout << "Roll another characer? (y/n): ";
		yesno = readChar();

	}while (yesno != 'n' && yesno != 'N');
	return 0;
} 