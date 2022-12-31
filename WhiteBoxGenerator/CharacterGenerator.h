#ifndef CHARACTER_GENERATOR_H
#define CHARACTER_GENERATOR_H
#include<iostream>
#include<string>
using namespace std;

class CharacterGenerator
{
public:
	CharacterGenerator(string playerName);
	string getCharacterName() const;
	void dieRoll();
	int getStrength() const;
	int getDexterity() const;
	int getConstitution() const;
	int getWisdom() const;
	int getIntelligence() const;
	int getCharisma() const;
	void setStrengthMod(int strength);
	void setDexterityMod(int dexterity);
	void setConstitutionMod(int constitution);
	void setWisdomMod(int wisdom);
	void setIntelligenceMod(int intelligence);
	void setCharismaMod(int charisma);
	int getStrengthMod() const;
	int getDexterityMod() const;
	int getConstitutionMod() const;
	int getWisdomMod() const;
	int getIntelligenceMod() const;
	int getCharismaMod() const;
	string convertAbilityMod(int modifier);


private:
	string characterName;
	string playerName;
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
