#ifndef CHARACTER_GENERATOR_H
#define CHARACTER_GENERATOR_H
#include<iostream>
#include<string>
using namespace std;

class CharacterGenerator
{
public:
	CharacterGenerator(string characterName);
	string getCharacterName() const;
	void dieRoll();
	int getStrength() const;
	int getDexterity() const;
	int getConstitution() const;
	int getWisdom() const;
	int getIntelligence() const;
	int getCharisma() const;
	

private:
	string characterName;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
	int strengthModifier;
	int dexterityModifier;
	int constitutionModifier;
	int intelligenceModifier;
	int wisdomModifier;
	int charismaModifier;

	int level;
	//string characterClass;
	//string characterRace;
	//string alignment;
	//int xp;
	//int savingThrow;

};


#endif // !CHARACTER_GENERATOR_H

