#pragma once
#include <iostream>
using namespace std;

class Humain
{
protected:
	string nom, boissonFavorite;

public:
	//Constructeur
	Humain(const /*const permet de declarer des constantes.*/ string Nom, const string boissonFavorites = "eau"); //La boison favorite par defaut est l'eau
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	void parle(const string texte);
	string getNom() const;
	virtual void sePresente() const;
	void boit();
};
