#pragma once
#include <vector>

enum Semaforo
{
	ROSSO,
	GIALLO,
	VERDE
};

class EserciziLezione2
{
public:
	EserciziLezione2();
	~EserciziLezione2();

	// Methods
#pragma region OPERATORI E STRUTTURE
	// ES-1
	Semaforo statoAttuale = Semaforo::GIALLO;
	void StampaStatoSemaforo();

	// ES-2
	int base = 12;
	int altezza = 5;
	void StampaAreaRettangolo();

	// ES-3
	int maxNumber = 20;
	void StampaNumeriPari();

	// ES-4
	int contatore = 5;
	int risultato = 1;
	void StampaFattoriale();

	// ES-5
	bool continua = true;
	void Continua();

	// ES-6
	int punti = 85;
	int presenze = 90;
	int requisitoMinimo = 60;
	void CalcolaPromozione();
	
	// ES-7
	std::vector<std::string> colori = { "Rosso", "Verde", "Blu", "Giallo" };
	void StampaColori();

	// ES-8
	std::vector<int> prezzi = { 10, 25, 5, 40 };
	void StampaNuoviPrezzi();

	// ES-9
	int permessi = 6; // 0110
	int MASCHERA_SCRITTURA = 2; // 0010
	void StampaPermessiScrittura();

	// ES-10
	int valoreIniziale = 13;
	int valoreMoltiplicato = valoreIniziale << 3;
	int valoreDiviso = valoreIniziale >> 2;
	void StampaValoriBitwise();
#pragma endregion

#pragma region PUNTATORI
	// ES-1
	int numero = 42;
	int* p_numero = nullptr;
	void StampaPuntatoreInt();

	// ES-2
	double prezzo = 99.90f;
	double* p_prezzo = &prezzo;
	void ModificaTramitePuntatore();

	// ES-3
	void Raddoppia(int* p_val);

	// ES-4
	void Scambia(int* p_val1, int* p_val2);

	// ES-5
	char parola[10] = "Puntatore";
	char* p_parola = parola;
	void Dereferenziazione();

	// ES-6
	int numeri[5] = { 1, 3, 5, 7, 9 };
	int* p_numeri = &numeri[0];
	void StampaTerzo();

	// ES-7
	int voti[4] = { 22, 25, 30, 28 };
	int* p_voti = voti;
	void StampaArrayNumeri();

	// ES-8
	void AllocaDinamicamente();

	// ES-9
	struct Punto {
		int x;
		int y;
	};
	void StructDinamica();

	// ES-10
	int a = 100;
	int* p1 = &a;
	int** p2 = &p1;
	void IndirizzieValori();

#pragma endregion

};