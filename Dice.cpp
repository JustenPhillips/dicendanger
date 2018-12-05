// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/10/2017
// Assignment: DiceAndDanger - D&D
#include "Dice.h" 


//constructor that will ask for a integer in parameter
//for the number of sides on the dice
Dice::Dice(int sides)
{  
    //roll random number on top of dice
    face = rand()%(sides);

    //no zero dice
if(face == 0)
        {
        face = rand()%(sides);
        }
        
        //allocate sides
    Side = new int[sides];
    //assign face value a side
    Side[face]= face;
    
    //clear the array of Sides
for(int i=0;i<sides;i++)
{Side[i]=0;}

//assign first element 1
    Side[0]=1;
    
    //loop to assign each side a value
for(int i=0;i<sides;i++)
{ 
 
    for(int j=1;j<=sides;j++)
    {
    
        if(Side[i]<Side[j])
        {
        continue;
        }
        else if(Side[i]==Side[j])
        {
        Side[j]++;
        }
        else if(Side[i]>Side[j])
        {
        Side[j]++;
        }
    }
}
}

Dice::~Dice()
{
    delete Side;//dellocate array
}


int Dice::Roll(int sides)
{ 
    face = rand()%(sides);
    if(face == 0)
    face = rand()%(sides);
    return face;
}


int Dice::Read()
{
    return face;
}

int Dice::Read(int n)
{
    return Side[n];
}