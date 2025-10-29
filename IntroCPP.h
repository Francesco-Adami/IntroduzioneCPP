#pragma once // garantire che questo file sia incluso una sola volta
#include <iostream>

class Rettangolo
{

private: 
	int larghezza = 0;
	int altezza = 0;

public:
	Rettangolo(int l, int a)
	{
		larghezza = l;
		altezza = a;
	}

	int calcoloArea() const;

protected:


};
