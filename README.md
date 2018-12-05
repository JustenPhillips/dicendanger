# dicendanger

DiceAndDanger - D&D
Requested files: Dice.h, Dice.cpp, DiceAndDanger.cpp, DiceAndDanger_test.cpp (Download)
Type of work: Individual work

With this program, you will begin the practice of breaking source code into distinct modules that are responsible for limited scopes of behavior and data. You will create the framework of a game that uses dice to generate random decisions. This game is called DiceAndDanger.cpp.

Create a class (header and implmentation files) named Dice that can be used to create objects that simulate the behavior of one or more Die. This class should be able to simulate a die with an arbitrary number of sides; for example, it should be able to simulate a three sided die or a 21 sided die.

This class must have at least two public methods:

    void roll() - which will simulate rolling a die by returning a random number between 1 and N where N represents the number of sides on the die.
    int read() - which will return the value showing on the "top" of the die. This value represents the number of "pips" on the face of the die considered to be the top.  If you store the values of the faces of your die in an array, the top should be the first element.
    int read(int n) - return the value associated with the nth side of the die.

Your class must have a default constructor that will create a die with 6 sides. It should also have a parameterized constructor which will take an argument that indicates the number of sides that the new die object should contain.

DiceAndDanger.cpp should contain two methods:

    rollCharacter(int* attributeArray) which will use 6 rolls of an 18-sided die to determine each of the following character attributes: Strength, Constitution, Dexterity, Intelligence, Wisdom, Charisma.
    printCharacter(int *attributeArray) which will print each of the characters attributes and the value rolled: Strength:17,Constitution:12,Dexterity:8,Intelligence:16,Wisdom:11,Charisma:4

After the first set of character attributes is generated, the program should ask:

"Roll another characer? (y/n): "

If yes, the program should re-roll the character. If no the program should exit.
