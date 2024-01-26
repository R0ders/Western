#include "Brigand.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement)
	:Humain(nom, boissonFavorite), comportement(comportement)
{
}

string Brigand::getComportement() const
{
	return comportement;
}

int Brigand::getNbDamesEnlevees() const
{
	return nbDamesEnleves;
}

int Brigand::getRecompense() const
{
	return recompense;
}

void Brigand::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFavorite() << "." << endl;
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnleves++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah !" << dame.getNom() << "tu es mienne désormais !" << endl;
	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned je suis fait ! " << nom << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison() const
{
	return enPrison;
}
