#include<iostream>
#include <cstdlib>
#include<string>
#include<ctime>
#include<cstdlib>
#include"CharacterGenerator.h"
using namespace std;

void runGenerator();

int main()
{
	srand(time(0));

	runGenerator();


	return 0;
}


void runGenerator()
{
	/*
	string characterName;
	int characterNameContinue = 1;*/

		//cout << "Please enter the Name for your character" << endl;
		//getline(cin, characterName);
		//cout << "Your character's name is " << characterName << endl;
		//cout << "Are you statisfied with your character's name?  Please enter 1 if you want to keep this name, or another other number re-enter your character's name." << endl;
		//cin >> characterNameContinue;
		//cout << endl;

		//while (characterNameContinue != 1)
		//{
		//	cout << "Please Re-Enter the Name for your character" << endl;
		//	getline(cin, characterName);
		//	cout << "Your character's name is " << characterName << endl;
		//	cout << "Are you statisfied with your character's name?  Please enter 1 if you want to keep this name, or another other number re-enter your character's name." << endl;
		//	cin >> characterNameContinue;
		//	cout << endl;
		//}

	string playerName;

	cout << "Welcome to the White Box random RPG Character Generator.  Please enter your name to begin." << endl;
	getline(cin, playerName);
	cout << "Hello " << playerName << ".  We will roll three six-sided dice (d6) for each of your character's ability scores in the order of: \n\tStrength \n\tConstitution \n\tDexterity \n\tWisdom \n\tIntelligence \n\tCharima" << endl << endl;

	cout << "Please press any key to continue" << endl;
	//cin.ignore();
	cin.get();


	CharacterGenerator character = CharacterGenerator(playerName);

	character.dieRoll();

	cout << "---------------------------" << endl;

	cout <<  character.getCharacterName() << endl;
	cout << "Strength: " << character.getStrength() << "  (" << character.convertAbilityMod(character.getStrengthMod()) << ")" << endl;
	cout << "Dexterity: " << character.getDexterity() << endl;
	cout << "Constitution: " << character.getConstitution() << endl;
	cout << "Wisdom: " << character.getWisdom() << endl;
	cout << "Intelligence: " << character.getIntelligence() << endl;
	cout << "Charmisma: " << character.getCharisma() << endl;



}