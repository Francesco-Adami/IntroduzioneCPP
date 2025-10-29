#pragma once

#include <iostream>

enum GiorniSettimana
{
	Lunedi,
	Martedi,
	Mercoledi,
	Giovedi,
	Venerdi,
	Sabato,
	Domenica
};

class Mese
{
public:
	Mese() {}

	GiorniSettimana giornoAttuale = GiorniSettimana::Lunedi;

	int a;
	int b;

	// Operatori Aritmetici
	int somma(int a, int b) { return a + b; }
	int sottrazione(int a, int b) { return a - b; }
	int Moltiplicazione(int a, int b) { return a * b; }
	int Divisione(int a, int b) { return a / b; }
	int Modulo(int a, int b) { return a % b; }

	// Operatori di assegnazione
	void AssegnaValore(int valore) { a = valore; }
	void AggiungiAssegna(int valore) { a += valore; }
	void SottraiAssegna(int valore) { a -= valore; }
	void MoltiplicaAssegna(int valore) { a *= valore; }
	void DividiAssegna(int valore) {a /= valore;}

	// Operatori Relazionali
	bool SonoUguali (int valore) { return a == valore; }
	bool SonoDiversi(int valore) { return a != valore; }
	bool MaggioreDi(int valore) { return a > valore; }
	bool MinoreDi(int valore) { return a < valore; }
	bool MaggioreUgualeDi(int valore) { return a >= valore; }
	bool MinoreUgualeDi(int valore) { return a <= valore; }

	// Operatori Logici
	bool ELogico(bool condizione1, bool condizione2) { return condizione1 && condizione2; }
	bool OrLogico(bool condizione1, bool condizione2) { return condizione1 || condizione2; }
	bool NegazioneLogica(bool condizione) {return !condizione;}

	// Operatori di Incremento e Decremento
	void Incrementa() { a++; ++a; }
	void Decrementa() { a--; --a; }

	// Operatore Ternario --> condizione ? true : false; 
	int ValoreAssoluto(int valore)
	{
		return valore > 0 ? valore : -valore;
	}

	// Operatore di inserimento ed estrazione
	void Stampa()
	{
		std::cout << "Valore di a: " << a << std::endl; // Operatore di inserimento
	}

	// Operatori Bitwise
	int EBitwise(int valore)
	{
		return a & valore;
	}
	int OBitwise(int valore)
	{
		return a | valore;
	}
	int XORBitwise(int valore)
	{
		return a ^ valore;
	}
	int NOTBitwise()
	{
		return ~a;
	}
	int ShiftSinistra(int posizioni)
	{
		return a << posizioni;
	}
	int ShiftDestra(int posizioni)
	{
		return a >> posizioni;
	}
};