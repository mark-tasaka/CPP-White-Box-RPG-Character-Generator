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
	string reRollScores = "1";
	int characterClassChoice = 0;
	string characterClass;

	cout << "Welcome to the White Box random RPG Character Generator.  Please enter your name to begin." << endl;
	getline(cin, playerName);
	cout << endl;
	cout << "Hello " << playerName << ".  Let's randomly generate a character.  First, we will roll three six-sided dice (d6) for each of your character's ability scores in the order of: \n\tStrength \n\tConstitution \n\tDexterity \n\tWisdom \n\tIntelligence \n\tCharima" << endl << endl;

	cout << "Press any key to continue." << endl;
	cin.get();

	cout << "Your ability scores are: " << endl << endl;

	CharacterGenerator character = CharacterGenerator(playerName);

	character.dieRoll();

	cout << "---------------------------" << endl << endl;;

	cout << character.getCharacterName() << endl;
	cout << "Strength: " << character.getStrength() << "  (" << character.convertAbilityMod(character.getStrengthMod()) << ")" << endl;
	cout << "Dexterity: " << character.getDexterity() << "  (" << character.convertAbilityMod(character.getDexterityMod()) << ")" << endl;
	cout << "Constitution: " << character.getConstitution() << "  (" << character.convertAbilityMod(character.getConstitutionMod()) << ")" << endl;
	cout << "Wisdom: " << character.getWisdom() << "  (" << character.convertAbilityMod(character.getWisdomMod()) << ")" << endl;
	cout << "Intelligence: " << character.getIntelligence() << "  (" << character.convertAbilityMod(character.getIntelligenceMod()) << ")" << endl;
	cout << "Charmisma: " << character.getCharisma() << "  (" << character.convertAbilityMod(character.getCharismaMod()) << ")" << endl;

	cout << endl;

	cout << "---------------------------" << endl << endl;;

	cout << "Would you like to keep these ability scores?  If you would like to re-roll the ability scores, press 1 (press enter to keep the ability scores)." << endl;

	getline(cin, reRollScores);

	if (reRollScores != "1")
	{
		reRollScores = "0";
	}

	while (reRollScores == "0")
	{
		cout << "Your new ability scores are: " << endl;

		character.dieRoll();

		cout << character.getCharacterName() << endl;
		cout << "Strength: " << character.getStrength() << "  (" << character.convertAbilityMod(character.getStrengthMod()) << ")" << endl;
		cout << "Dexterity: " << character.getDexterity() << "  (" << character.convertAbilityMod(character.getDexterityMod()) << ")" << endl;
		cout << "Constitution: " << character.getConstitution() << "  (" << character.convertAbilityMod(character.getConstitutionMod()) << ")" << endl;
		cout << "Wisdom: " << character.getWisdom() << "  (" << character.convertAbilityMod(character.getWisdomMod()) << ")" << endl;
		cout << "Intelligence: " << character.getIntelligence() << "  (" << character.convertAbilityMod(character.getIntelligenceMod()) << ")" << endl;
		cout << "Charmisma: " << character.getCharisma() << "  (" << character.convertAbilityMod(character.getCharismaMod()) << ")" << endl;

		cout << "Would you like to keep these ability scores?  If you would like to re-roll the ability scores, press 1 (press enter to keep the ability scores)." << endl;

		getline(cin, reRollScores);

		if (reRollScores != "1")
		{
			reRollScores = "0";
		}

	}

	cout << endl;
	cout << "--------------------------------" << endl;
	cout << "Your Character's ability scores are: " << endl;

	cout << character.getCharacterName() << endl;
	cout << "Strength: " << character.getStrength() << "  (" << character.convertAbilityMod(character.getStrengthMod()) << ")" << endl;
	cout << "Dexterity: " << character.getDexterity() << "  (" << character.convertAbilityMod(character.getDexterityMod()) << ")" << endl;
	cout << "Constitution: " << character.getConstitution() << "  (" << character.convertAbilityMod(character.getConstitutionMod()) << ")" << endl;
	cout << "Wisdom: " << character.getWisdom() << "  (" << character.convertAbilityMod(character.getWisdomMod()) << ")" << endl;
	cout << "Intelligence: " << character.getIntelligence() << "  (" << character.convertAbilityMod(character.getIntelligenceMod()) << ")" << endl;
	cout << "Charmisma: " << character.getCharisma() << "  (" << character.convertAbilityMod(character.getCharismaMod()) << ")" << endl;


	cout << "Press any key to continue." << endl;
	cin.get();

	cout << "Now that your character's ability scores are generated, the next step is to select a Character Class for your character." << endl << endl;

	cout << "Choose from one of the following character classes:" << endl << "\t1. Fighter" << endl << "\t2. Cleric" << endl << "\t3. Magic-User" << endl << "\t4. Thief" << endl << endl;

	cout << "Press the corrisponding number for the Character Class (i.e., 1 for Fighter; 2 for Cleric; 3 for Magic-User; 4 for Thief)." << endl;

	cin >> characterClassChoice;

	while (characterClassChoice < 1 || characterClassChoice >4)
	{
		cout << "You have entered an invalid choice.  Please entering the corrisponding number for the Character Class (i.e., 1 for Fighter; 2 for Cleric; 3 for Magic-User; 4 for Thief)." << endl;

		cin >> characterClassChoice;
	}

	characterClass = character.selectCharacterClass(characterClassChoice);

	cout << "You have selected the " << characterClass << " class" << endl;


	cout << "Press any key to continue." << endl;
	cin.get();


	cout << endl;
	cout << "--------------------------------" << endl;
	cout << "Class: " << characterClass << endl;

	cout << character.getCharacterName() << endl;
	cout << "Strength: " << character.getStrength() << "  (" << character.convertAbilityMod(character.getStrengthMod()) << ")" << endl;
	cout << "Dexterity: " << character.getDexterity() << "  (" << character.convertAbilityMod(character.getDexterityMod()) << ")" << endl;
	cout << "Constitution: " << character.getConstitution() << "  (" << character.convertAbilityMod(character.getConstitutionMod()) << ")" << endl;
	cout << "Wisdom: " << character.getWisdom() << "  (" << character.convertAbilityMod(character.getWisdomMod()) << ")" << endl;
	cout << "Intelligence: " << character.getIntelligence() << "  (" << character.convertAbilityMod(character.getIntelligenceMod()) << ")" << endl;
	cout << "Charmisma: " << character.getCharisma() << "  (" << character.convertAbilityMod(character.getCharismaMod()) << ")" << endl;


	cout << "Press any key to continue." << endl;
	cin.get();


}