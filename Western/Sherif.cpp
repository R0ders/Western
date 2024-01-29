#include "Sherif.h"

Sherif::Sherif(const string nom, const string boissonFavorite, const string adjectif)
	:Cowboy(nom, getBoissonFavorite()), adjectif(adjectif)
{
}

int Sherif::getNbBrigandsCoffrer()
{
	return nbBrigandsCoffrer;
}

string Sherif::getNom()
{
	return "Sherif " + nom;
}

void Sherif::sePresente()
{
	cout << "Bonjour, je suis " << getNom() << " et j'aime le " << getBoissonFavorite() << endl;
}

void Sherif::coffreBrigands()
{
	cout << "Au nom de la loi, je vous arrete !" << endl;
}

void Sherif::rechercheBrigands(Brigand & brigands)
{
	cout << "** " << "OYEZ OYEZ BRAVE GENS !! " << brigands.getRecompense() << " $ a qui arretera " << brigands.getNom() << " " << brigands.getComportement() << " mort ou vif !!" << endl;
}

void Sherif::augmenteNbBrigandsCoffrer()
{
	nbBrigandsCoffrer++;
}
