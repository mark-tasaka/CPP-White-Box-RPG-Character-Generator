#include<iostream>
#include <cstdlib>
#include<string>
#include<ctime>
#include"CharacterGenerator.h"
using namespace std;

int main()
{
	srand(time(0));

	CharacterGenerator character = CharacterGenerator();

	character.dieRoll();

	cout << "Demo Character" << endl;
	cout << "Strength: " << character.getStrength() << endl;
	cout << "Dexterity: " << character.getDexterity() << endl;
	cout << "Strength: " << character.getConstitution() << endl;

	return 0;
}