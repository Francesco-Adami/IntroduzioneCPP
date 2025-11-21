
#include <iostream>

#include "IntroCPP.h"
#include "Weapon.h"
#include "WeaponType.h"
#include "Operatori.h"
#include "Puntatori.h"
#include "EserciziLezione2.h"
#include "Static.h"

using namespace std; // per evitare di scrivere sempre std::

/*

*/

struct Studente
{
	int anni;
	float mediaVoti;
	string nome;

	Studente() : anni(0), mediaVoti(0.0f), nome("Unknown") {}
	Studente(const int anni, const float mv, const string& n)
	: anni(anni), mediaVoti(mv), nome(n) {} // "string&" --> "ref string" in C#

	/*Studente(int anni, float mv, string n)
	{
		this->anni = anni;
		// ...
	}*/
};

int main()
{
	// PRINT "HELLOWORLD"
	cout << "Hello World!" << '\n'; // endl == "\n"

	// Tipi base C++
	// Integer
	int numeroIntero = 3;
	unsigned int numeroInteroPositivo = 5; //  --> |5|

	// floating point, precisione singola
	float numeroDecimale = 0.2f;
	float numeroDecimalePiccolo = .2f; // solo per numeri pi� piccoli di 1

	// floating point, precisione doppia
	double numeroDecimaleDoppiaPrecisione = 3.141592653589793f; // numero decimale a precisione doppia

	// carattere singolo
	char carattere = 'A';

	// Booleano
	bool valoreBooleano = true;

	cout << "valoreBool:" << sizeof(valoreBooleano) << endl;
	cout << "InteroPos:" << numeroInteroPositivo << endl;

	cout << "Dimensione int: " << sizeof(int) << " byte" << endl;
	cout << "Dimensione bool: " << sizeof(bool) << " byte" << endl;
	cout << "Dimensione float: " << sizeof(float) << " byte" << endl;

	// tipi composti: string, array, struct, class

	// Array
	int arrayDiInteri[5] = { 1, 2, 3, 4, 5 }; // array di 5 interi
	char arrayDiCaratteri[5] = { 'H', 'e', 'l', 'l', 'o' };
	// float ...

	// String
	string testo = "CIAO MONDO!";
	string arrayDiStringhe[3] = { "ciao", "mondo", "Hello World" };

	// Struct --> dichiarate fuori dal main
	Studente randomStudente;

	randomStudente.nome = "Ranodm";
	randomStudente.anni = 20;
	randomStudente.mediaVoti = 8.4f;

	Studente studente1(); // tutto a 0
	Studente studente2(22, 7.5f, "MARIO");

	cout << "---------------------------" << endl;

	// classi --> nel file.h
	Rettangolo rettangolo1(5, 10);

	int area = rettangolo1.calcoloArea();


	// ARMI
	Weapon arma1;
	arma1.setNome("pistola");
	arma1.setTipo(WeaponType::Tipo1);
	arma1.setAmmo(30);
	arma1.setRechargeTime(2.4f);
	arma1.setDamage(5);
	arma1.setInceppata(false);

	arma1.applicaDanno();
	arma1.informazioni();

	Weapon arma2("Fucile", WeaponType::Tipo2, 3);
	arma2.applicaDanno();
	arma2.informazioni();

	// OPERATORI
	/*Mese* meseCorrente = new Mese();
	int giorno = 0;

	giorno = meseCorrente->Incrementa();
	cout << "giorno: " << giorno << endl;*/

	// new crea in maniera dinamica un oggetto in memoria heap
	Weapons* weapons = new Weapons(); 

	weapons->initPointers();

	delete weapons; // dealloca la memoria
	weapons = nullptr; // evita dangling pointer


	// ####################################
	// ES LEZIONE 2
	// ####################################
	// Operatori e strutture:
	EserciziLezione2* es = new EserciziLezione2();
	cout << endl;
	cout << "####################################" << endl;
	cout << "ES LEZIONE 2 - Operatori e strutture" << endl;
	cout << "------------------------------------" << endl;
	es->StampaStatoSemaforo();
	cout << "------------------------------------" << endl;
	es->StampaAreaRettangolo();
	cout << "------------------------------------" << endl;
	es->StampaNumeriPari();
	cout << "------------------------------------" << endl;
	es->StampaFattoriale();
	// cout << "------------------------------------" << endl;
	// es->Continua();
	cout << "------------------------------------" << endl;
	es->CalcolaPromozione();
	cout << "------------------------------------" << endl;
	es->StampaColori();
	cout << "------------------------------------" << endl;
	es->StampaNuoviPrezzi();
	cout << "------------------------------------" << endl;
	es->StampaPermessiScrittura();
	cout << "------------------------------------" << endl;
	es->StampaValoriBitwise();
	cout << "------------------------------------" << endl;
	cout << "-------------PUNTATORI--------------" << endl;
	cout << "------------------------------------" << endl;
	es->StampaPuntatoreInt();
	cout << "------------------------------------" << endl;
	es->ModificaTramitePuntatore();
	cout << "------------------------------------" << endl;
	int val = 5;
	es->Raddoppia(&val);
	cout << "------------------------------------" << endl;
	int a = 10;
	int b = 20;
	es->Scambia(&a, &b);
	cout << "------------------------------------" << endl;
	es->Dereferenziazione();
	cout << "------------------------------------" << endl;
	es->StampaTerzo();
	cout << "------------------------------------" << endl;
	es->StampaArrayNumeri();
	cout << "------------------------------------" << endl;
	es->AllocaDinamicamente();
	cout << "------------------------------------" << endl;
	es->StructDinamica();
	cout << "------------------------------------" << endl;
	es->IndirizzieValori();
	cout << "------------------------------------" << endl;

	cout << "---------------STATIC---------------" << endl;
	Static* s1 = new Static();
	Static* s2 = new Static();
	Static* s3 = new Static();

	delete s1;
	s1 = nullptr;

	cout << Static::count << "\n";

	delete s2;
	s2 = nullptr;

	cout << Static::GetCount() << "\n";
	
	cin.get(); // input
	return 0;
}

/* COMPITI:
* Creare una classe Weapon con i seguenti membri: 
* nome arma
* tipo
* munizioni
* tempo ricarica
* inceppata
* danno
* 
* MEDOTI:
* applicaDanno() -> stampa "danno applicato: danno" e ritorna il danno
* informazioni() -> stampa tutte le info
* 
* Costruttore custom --> SOLO (nome, tipo, danno)
* 
* */

// stampare le dimensioni delle diverse classi create, array, e stringhe
// Creare esempi nel main di weapon