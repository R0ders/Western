#include "Barman.h"

Barman::Barman(const string nom, const string nomBar, const string boissonFavorite)
	:Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le barman du " << getNomBar() << " et j'aime le " << getBoissonFavorite() << " " << terminePhrase() << endl;
}

void Barman::presentezVous(const Humain& humain)
{
	humain.sePresente();
}

void Barman::sert(const Humain& client)
{
	cout << "(" << nom << ") -- " << "Tiens " << client.getNom() << " un verre de " << client.getBoissonFavorite()
}

string Barman::terminePhrase()
{
	return "mon gars.";
}
