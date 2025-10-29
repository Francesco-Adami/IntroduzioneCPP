#include <iostream>

#include "StruttureDiControllo.h"
#include <vector>

void Calcolatrice::EsempioIfElse(int numero)
{
	if (numero > 0)
	{
		std::cout << "Il numero " << numero << " e' positivo." << std::endl;
	}
	else if (numero < 0)
	{
		std::cout << "Il numero " << numero << " e' negativo." << std::endl;
	}
	else
	{
		std::cout << "Il numero e' zero." << std::endl;
	}
}

void Calcolatrice::EsempioSwitch(GiorniSettimana operatore)
{
	switch (operatore)
	{
	case Lunedi:
		break;
	case Martedi:
		break;
	case Mercoledi:
		break;
	case Giovedi:
		break;
	case Venerdi:
		break;
	case Sabato:
		break;
	case Domenica:
		break;
	default:
		break;
	}
}

void Calcolatrice::EsempioFor(int limite)
{
	for (int i = 0; i < limite; i++)
	{
		// Azioni da ripetere
	}
}

void Calcolatrice::EsempioWhile(int limite)
{
	int i = 0;
	while (i < limite)
	{
		// ...
		i++;
	}
}

void Calcolatrice::EsempioDoWhile(int limite)
{
	int i = 0;
	do
	{
		// ...
		i++;
	}
	while (i < limite);
}

void Calcolatrice::EsempioForeach()
{
	std::vector<int> numeri = { 1, 2, 3, 4, 5 };

	for (int numero : numeri)
	{
		numero += 5;
	}
}
