#pragma once
#include <string>

#include "WeaponType.h"
#include "Puntatori.h"

using namespace std;

class Weapon
{
private:
	string name_;   // nome dell’arma
	WeaponType type;
	int ammo = 0;
	float reloadTime = 0.0f;
	float damage = 0.0f;
	bool isJammed = false;

public:

	// CONSTRUCTORS
	Weapon() = default;
	~Weapon();
	Weapon(const string& wName, const WeaponType wType, float wDamage);

#pragma region GETTERS
	string getName() const { return name_; }
	WeaponType getTipo() const { return type; }
	int getAmmo() const { return ammo; }
	float getRechargeTime() const { return reloadTime; }
	bool isInceppata() const { return isJammed; }
	float getDamage() const { return damage; }
#pragma endregion

#pragma region SETTERS
	void setNome(const string& n) { name_ = n; }
	void setTipo(const WeaponType t) { type = t; }
	void setAmmo(int a) { ammo = a; }
	void setRechargeTime(float r) { reloadTime = r; }
	void setInceppata(bool i) { isJammed = i; }
	void setDamage(float d) { damage = d; }
#pragma endregion

	// METHODS
	float applicaDanno() const;
	void informazioni() const;
};
