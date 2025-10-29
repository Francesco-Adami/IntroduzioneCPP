#include <iostream>

#include "EserciziLezione2.h"

// costruttore
EserciziLezione2::EserciziLezione2()
{
}

// distruttore
EserciziLezione2::~EserciziLezione2()
{
}

#pragma region OPERATORI E STRUTTURE
#pragma region 1. Enum e switch (Base)
void EserciziLezione2::StampaStatoSemaforo()
{
	switch (statoAttuale)
	{
	case Semaforo::ROSSO:
		std::cout << "STOP! Attendere." << std::endl;
		break;
	case Semaforo::GIALLO:
		std::cout << "Attenzione! Prepararsi." << std::endl;
		break;
	case Semaforo::VERDE:
		std::cout << "VIA! Si può procedere." << std::endl;
		break;
	default:
		std::cout << "Stato semaforo sconosciuto!" << std::endl;
		break;
	}
}
#pragma endregion

#pragma region 2. Operatori Aritmetici, Assegnazione e if/else

void EserciziLezione2::StampaAreaRettangolo()
{
	int area = base * altezza;
	area *= 2;

	if (area > 100)
	{
		std::cout << "L'area raddoppiata supera i 100." << std::endl;
	}
	else
	{
		std::cout << "L'area raddoppiata è 100 o meno." << std::endl;
	}
}
#pragma endregion

#pragma region 3. Ciclo for e Operatore Modulo (%)
void EserciziLezione2::StampaNumeriPari()
{
	for (int i = 1; i <= maxNumber; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "Pari: " << i << std::endl;
		}
	}
}

#pragma endregion

#pragma region 4. Ciclo while e Operatori di Incremento
void EserciziLezione2::StampaFattoriale()
{
	int v = contatore;
	while (contatore > 0)
	{
		risultato *= contatore;
		contatore--;
	}

	std::cout << "Risultato di " << v << "! e: " << risultato << std::endl;
}
#pragma endregion

#pragma region 5. Ciclo do-while per Input Utente
void EserciziLezione2::Continua()
{
	char risposta;
	do
	{
		std::cout << "Vuoi continuare?" << std::endl;
		std::cout << "inserisci un carattere ('S' per sì, 'N' per no)." << std::endl;
		std::cin >> risposta;
		if (risposta == 'S' || risposta == 's')
		{
			std::cout << "Hai scelto di continuare!" << std::endl;
			continua = true;
		}
		else if (risposta == 'N' || risposta == 'n')
		{
			std::cout << "Termino..." << std::endl;
			continua = false;
		}
		else
		{
			std::cout << "carattere non valido" << std::endl;
		}

	} while (continua);
}
#pragma endregion

#pragma region 6. Operatori Relazionali e Logici
void EserciziLezione2::CalcolaPromozione()
{
	if (punti > requisitoMinimo && presenze >= 80)
	{
		std::cout << "Promosso." << std::endl;
	}
	else
	{
		std::cout << "Non Promosso." << std::endl;
	}
}
#pragma endregion

#pragma region 7. Ciclo for-each (Range-Based For Loop)
void EserciziLezione2::StampaColori()
{
	for (std::string colore : colori)
	{
		std::cout << "Il colore e': " << colore << std::endl;
	}
}
#pragma endregion

#pragma region 8. Ciclo for-each per Modifica (Riferimento)
void EserciziLezione2::StampaNuoviPrezzi()
{
	for (auto& prezzo : prezzi)
	{
		std::cout << "Prezzo: " << prezzo << std::endl;
		prezzo = (int)(prezzo * 1.1f);
	}

	for (int prezzo : prezzi)
	{
		std::cout << "Prezzo nuovo: " << prezzo << std::endl;
	}
}
#pragma endregion

#pragma region 9. Operatore Bitwise AND (&) per la Verifica
void EserciziLezione2::StampaPermessiScrittura()
{
	if (permessi & MASCHERA_SCRITTURA)
	{
		std::cout << "Il permesso di scrittura è attivo." << std::endl;
	}
	else
	{
		std::cout << "Il permesso di scrittura NON è attivo." << std::endl;
	}
}
#pragma endregion

#pragma region 10. Operatori Bitwise Shift (<<, >>)
void EserciziLezione2::StampaValoriBitwise()
{
	std::cout << "Valore iniziale: " << valoreIniziale << std::endl;
	std::cout << "Valore moltiplicato (<< 3): " << valoreMoltiplicato << std::endl;
	std::cout << "Valore diviso (>> 2): " << valoreDiviso << std::endl;
}
#pragma endregion

#pragma endregion

#pragma region PUNTATORI
#pragma region 1: Dichiarazione e Assegnazione Base
void EserciziLezione2::StampaPuntatoreInt()
{
	p_numero = &numero;

	std::cout << "numero: " << numero << std::endl;
	std::cout << "puntatore: " << *p_numero << std::endl;
}
#pragma endregion

#pragma region 2: Modifica Tramite Puntatore
void EserciziLezione2::ModificaTramitePuntatore()
{
	std::cout << "prezzo vecchio: " << prezzo << std::endl;
	*p_prezzo = 149.99f;
	std::cout << "prezzo nuovo: " << prezzo << std::endl;

}
#pragma endregion

#pragma region 3: Passaggio per Riferimento (Funzione)
void EserciziLezione2::Raddoppia(int* p_val)
{
	std::cout << "valore prima: " << *p_val << std::endl;
	*p_val *= 2;
	std::cout << "valore dopo: " << *p_val << std::endl;
}
#pragma endregion

#pragma region 4: Scambio di Valori (Swap)
void EserciziLezione2::Scambia(int* p_val1, int* p_val2)
{
	std::cout << "valore 1 prima: " << *p_val1 << std::endl;
	std::cout << "valore 2 prima: " << *p_val2 << std::endl;

	int tmp = *p_val1;
	*p_val1 = *p_val2;
	*p_val2 = tmp;

	std::cout << "valore 1 dopo: " << *p_val1 << std::endl;
	std::cout << "valore 2 dopo: " << *p_val2 << std::endl;
}
#pragma endregion

#pragma region 5: Puntatori e Stringhe (Array di Caratteri)
void EserciziLezione2::Dereferenziazione()
{
	std::cout << "Parola prima: " << parola << std::endl;
	*p_parola = 'C';
	std::cout << "Parola dopo: " << parola << std::endl;
}
#pragma endregion

#pragma region 6: Aritmetica dei Puntatori su Array
void EserciziLezione2::StampaTerzo()
{
	std::cout << "Terzo Valore: " << *(p_numeri + 2) << std::endl;
}
#pragma endregion

#pragma region 7: Iterazione con Aritmetica dei Puntatori
void EserciziLezione2::StampaArrayNumeri()
{
	for (int i = 0; i < std::size(voti); i++)
	{
		std::cout << "Value: " << *(p_voti + i) << std::endl;
	}
}
#pragma endregion

#pragma region 8: Allocazione Dinamica di Memoria
void EserciziLezione2::AllocaDinamicamente()
{
	int* a = new int;
	*a = 123;

	std::cout << "Es. 8 Valore: " << *a << std::endl;

	delete a;
	a = nullptr;
}
#pragma endregion

#pragma region 9: Accesso ai Membri di una Struttura (Operatore ->)
void EserciziLezione2::StructDinamica()
{
	Punto* punto = new Punto;

	punto->x = 10;
	punto->y = 5;

	std::cout << "Punto x: " << punto->x << std::endl;
	std::cout << "Punto y: " << punto->y << std::endl;

	delete punto;
	punto = nullptr;
}
#pragma endregion

#pragma region 10: Puntatori a Puntatori (Doppia Indirezione)
void EserciziLezione2::IndirizzieValori()
{
	std::cout << "Valore    P2: " << **p2 << std::endl;
	std::cout << "Indirizzo P1: " << p1 << std::endl;
	std::cout << "Indirizzo P2: " << p2 << std::endl;
}
#pragma endregion

#pragma endregion
