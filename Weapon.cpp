#include <iostream>

#include "Weapon.h"

using namespace std;

Weapon::~Weapon()
{
}

Weapon::Weapon(const string& wName, const WeaponType wType, float wDamage)
	: name_(wName), type(wType), damage(wDamage)
{

}

float Weapon::applicaDanno() const
{
	cout << "Danno applicato:" << damage << endl;
	return damage;
}

void Weapon::informazioni() const
{
	cout << "---- Informazioni Arma ----" << endl;
	cout << "Nome arma: " << name_ << endl;
	cout << "Tipo arma: " << type << endl;
	cout << "Danno arma: " << damage << endl;
	cout << "Munizioni arma: " << ammo << endl;
	cout << "Tempo ricarica arma: " << reloadTime << "s" << endl;
	cout << "Stato inceppata: " << (isJammed ? "Si" : "No") << endl;
	cout << "---------------------------" << endl;
}
