#include<iostream>
#include <cstdlib>
#include<string>
#include<ctime>
#include<vector>
#include "CharacterGenerator.h"
using namespace std;


CharacterGenerator::CharacterGenerator(string playerName)
{
	this->playerName = playerName;
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

	setStrengthMod(this->strength);
	setDexterityMod(this->dexterity);
	setConstitutionMod(this->constitution);
	setIntelligenceMod(this->intelligence);
	setWisdomMod(this->wisdom);
	setCharismaMod(this->charisma);
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


void CharacterGenerator::setStrengthMod(int strength)
{
	if (strength < 7)
	{
		this->strengthModifier = -1;
	}
	else if (strength > 14)
	{
		this->strengthModifier = 1;
	}
	else
	{
		this->strengthModifier = 0;
	}
}

void CharacterGenerator::setDexterityMod(int dexterity)
{
	if (dexterity < 7)
	{
		this->dexterityModifier = -1;
	}
	else if (dexterity > 14)
	{
		this->dexterityModifier = 1;
	}
	else
	{
		this->dexterityModifier = 0;
	}
}

void CharacterGenerator::setConstitutionMod(int constitution)
{
	if (constitution < 7)
	{
		this->constitutionModifier = -1;
	}
	else if (constitution > 14)
	{
		this->constitutionModifier = 1;
	}
	else
	{
		this->constitutionModifier = 0;
	}
}

void CharacterGenerator::setWisdomMod(int wisdom)
{
	if (wisdom < 7)
	{
		this->wisdomModifier = -1;
	}
	else if (wisdom > 14)
	{
		this->wisdomModifier = 1;
	}
	else
	{
		this->wisdomModifier = 0;
	}
}

void CharacterGenerator::setIntelligenceMod(int intelligence)
{
	if (intelligence < 7)
	{
		this->intelligenceModifier = -1;
	}
	else if (intelligence > 14)
	{
		this->intelligenceModifier = 1;
	}
	else
	{
		this->intelligenceModifier = 0;
	}
}

void CharacterGenerator::setCharismaMod(int charisma)
{
	if (charisma < 7)
	{
		this->charismaModifier = -1;
	}
	else if (charisma > 14)
	{
		this->charismaModifier = 1;
	}
	else
	{
		this->charismaModifier = 0;
	}
}

int CharacterGenerator::getStrengthMod() const
{
	return strengthModifier;
}

int CharacterGenerator::getDexterityMod() const
{
	return dexterityModifier;
}

int CharacterGenerator::getConstitutionMod() const
{
	return constitutionModifier;
}

int CharacterGenerator::getWisdomMod() const
{
	return wisdomModifier;
}

int CharacterGenerator::getIntelligenceMod() const
{
	return intelligenceModifier;
}

int CharacterGenerator::getCharismaMod() const
{
	return charismaModifier;
}

string CharacterGenerator::convertAbilityMod(int modifier)
{
	string modiferString;

	if (modifier == -1)
	{
		modiferString = "-1";
	}
	else if (modifier == 1)
	{
		modiferString = "+1";
	}
	else
	{
		modiferString = "+0";
	}

	return modiferString;
}


string CharacterGenerator::selectCharacterClass(int choice)
{
	if (choice == 1)
	{
		this->characterClass = "Fighter";
	}
	else if (choice == 2)
	{
		this->characterClass = "Cleric";
	}
	else if (choice == 3)
	{
		this->characterClass = "Magic-User";
	}
	else if (choice == 4)
	{
		this->characterClass = "Thief";
	}
	else
	{
		this->characterClass = "Invalid";
	}

	return this->characterClass;
}