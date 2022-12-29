#include<iostream>
#include <cstdlib>
#include<string>
#include<ctime>
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
	string characterName;
	int characterNameContinue = 1;

		cout << "Please enter the Name for your character" << endl;
		getline(cin, characterName);
		cout << "Your character's name is " << characterName << endl;
		cout << "Are you statisfied with your character's name?  Please enter 1 if you want to keep this name, or another other number re-enter your character's name." << endl;
		cin >> characterNameContinue;
		cout << endl;

		//while (characterNameContinue != 1)
		//{
		//	cout << "Please Re-Enter the Name for your character" << endl;
		//	getline(cin, characterName);
		//	cout << "Your character's name is " << characterName << endl;
		//	cout << "Are you statisfied with your character's name?  Please enter 1 if you want to keep this name, or another other number re-enter your character's name." << endl;
		//	cin >> characterNameContinue;
		//	cout << endl;
		//}

	CharacterGenerator character = CharacterGenerator(characterName);

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