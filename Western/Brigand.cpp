#include "Brigand.h"
#include "Dame.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement, const bool enPrison)
	:Humain (nom, boissonFavorite), comportement(comportement), enPrison(enPrison)
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
	
	if (nbDamesEnleves == 1)
	{
		cout << "(" << nom << ") -- " << "j'ai l'air mechant et j'ai deja kidnappe " << getNbDamesEnlevees() << " dames !" << endl;
		cout << "(" << nom << ") -- " << "Ma tete est mise a pris " << getRecompense() << " $" << endl;
	}
}

void Brigand::presentezVous(const Humain& humain)
{
	humain.sePresente();
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnleves = nbDamesEnleves + 1;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah !" << " " << dame.getNom() << " tu es mienne desormais !" << endl;
	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
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
