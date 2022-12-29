#include<iostream>
#include <cstdlib>
#include<string>
#include<ctime>
#include<vector>
#include "CharacterGenerator.h"
using namespace std;


CharacterGenerator::CharacterGenerator(string characterName)
{
	this->characterName = characterName;
}


string CharacterGenerator::getCharacterName() const
{
	return characterName;
}

void CharacterGenerator::dieRoll()
{
	vector<int> abilityScores;

	for (int i = 0; i < 6; i++)
	{
		int d6Roll1 = rand() % 6 + 1;
		int d6Roll2 = rand() % 6 + 1;
		int d6Roll3 = rand() % 6 + 1;
		int threeD6 = d6Roll1 + d6Roll2 + d6Roll3;
		abilityScores.push_back(threeD6);
	}

	this->strength = abilityScores[0];
	this->dexterity = abilityScores[1];
	this->constitution = abilityScores[2];
	this->intelligence = abilityScores[3];
	this->wisdom = abilityScores[4];
	this->charisma = abilityScores[5];
}


int CharacterGenerator::getStrength()  const
{
	return strength;
}

int CharacterGenerator::getDexterity() const
{
	return dexterity;
}


int CharacterGenerator::getConstitution() const
{
	return constitution;
}

int CharacterGenerator::getWisdom() const
{
	return wisdom;
}

int CharacterGenerator::getIntelligence() const
{
	return intelligence;
}

int CharacterGenerator::getCharisma() const
{
	return charisma;
}
