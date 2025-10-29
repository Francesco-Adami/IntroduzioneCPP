#include "Puntatori.h"
#include <iostream>

Weapons::Weapons()
{
}

Weapons::~Weapons()
{
}

void Weapons::initPointers()
{
	intPointer = &HP; // sto passando l'indirizzo di value a intPointer
	// intPointer ora punta a value

	// *intPointer dereferenzia il puntatore, ovvero accede al valore a cui punta
	std::cout << "Valore di value tramite intPointer: " << *intPointer << std::endl;

	*intPointer += 50;
	std::cout << "Nuovo valore di value tramite intPointer dopo l'incremento: " << *intPointer << std::endl;

	intPointer = arrayInt; // gli viene passato l'indirizzo del primo elemento dell'array
	
	std::cout << "1. Valore di value tramite intPointer: " << *intPointer << std::endl;
	intPointer += 1; // sposto il puntatore al secondo elemento dell'array
	// è stottointeso 1 * sizeof(int)
	std::cout << "2. Valore di value tramite intPointer: " << *intPointer << std::endl;

	intPointer -= 1; // sposto il puntatore al primo elemento dell'array
	// è stottointeso 1 * sizeof(int)
	std::cout << "3. Valore di value tramite intPointer: " << *intPointer << std::endl;

	for (int i = 0; i < std::size(arrayInt); i++)
	{
		std::cout << "Array element " << i << ": " << *(intPointer + i) << std::endl;
	}

}

int Weapons::Damage(int danno, int multiplier, int* totalDamage)
{
	if (totalDamage == nullptr) return -1; // controllo se il puntatore è valido

	return *totalDamage = danno * multiplier;
}

int Weapons::DamageRef(int danno, int multiplier, int& totalDamage)
{
	std::cout << "address di totalDamage: " << &totalDamage << std::endl;
	return totalDamage = danno * multiplier;
}
