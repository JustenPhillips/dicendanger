// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/10/2017
// Assignment: DiceAndDanger - D&D
#include "Dice.h" 

//this will create my dice instance object with 18 sides
//and roll my character attributes and store into an array
void rollCharacter(int* attributeArray)
{
    Dice die(18);
    for (int i = 0; i <= 6; i++)
    { 
        attributeArray[i] = die.Roll(18);
    }
        printCharacter(attributeArray);

}

//this function will print out my characters attributes
void printCharacter(int *attributeArray)
{
    cout << "Strength:" << attributeArray[0]<< ",";
    cout << "Constitution:" << attributeArray[1]<< ",";
    cout << "Dexterity:" << attributeArray[2]<< ",";
    cout << "Intelligence:" << attributeArray[3]<< ",";
    cout << "Wisdom:" << attributeArray[4]<< ",";
    cout << "Charisma:" << attributeArray[5]<< endl;
}
  
char readChar() 
{
	char c;
	cin >> c;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return c;
}