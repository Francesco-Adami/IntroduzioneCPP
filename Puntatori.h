#pragma once
#include "strutturediControllo.h"

class Weapons
{
public:
	Weapons();
	~Weapons();

	int value = 42;

	// puntatore
	int* intPointer = nullptr; // vanno SEMPRE inizializzati a nullptr

	Calcolatrice* calcolatrice = nullptr;

	void initPointers();

	// ARRAY
	int arrayInt[5] = { 1, 2, 3, 4, 5 };

	int Damage(int danno, int multiplier, int* totalDamage);
	int DamageRef(int danno, int multiplier, int& totalDamage);

private:

	int HP = 100;

};