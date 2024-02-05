#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const int popularite, const string adjectif)
	:Humain(nom, boissonFavorite), popularite(popularite), adjectif(adjectif), arme(NULL)
{
}

int Cowboy::getPopularite()
{
	return popularite;
}

void Cowboy::setPopularite(const int populaire)
{
	popularite = populaire;
}

string Cowboy::getQualite()
{
	return adjectif;
}



void Cowboy::setQualite(const string qualite)
{
	adjectif = qualite;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis le " << adjectif << " " << nom << " et j'aime le " << getBoissonFavorite() << endl;
}

void Cowboy::presentezVous(const Humain& humain)
{
	humain.sePresente();
}

void Cowboy::incrementePopulaire()
{
	popularite += 1;
}

void Cowboy::decrementePopulaire()
{
	popularite -= 1;
}

void Cowboy::tire(const Brigand& brigand)
{
	cout << "** " << "Le " << adjectif << " " << nom << " tire sur " << brigand.getNom() << ". PAN !" << endl;
}

void Cowboy::tires(Brigand& brigand)
{
	if (arme != NULL)	// ai-je une arme ?
	{
		if (arme->getNbBalles() != 0)	// est-elle chargee ?
		{
			cout << "** " << "Le " << adjectif << " " << nom << " tire sur " << brigand.getNom() << endl;
			arme->tire();
			emprisonne(brigand);
		}
	}
}

void Cowboy::emprisonne(Brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Prend ça rascal !" << endl;
}

void Cowboy::libere(Dame& dame)
{
	cout << "** " << "Le " << adjectif << " " << getNom() << " libere " << dame.getNom() << endl;
	dame.seFaitLiberer(getNom());
}

Cowboy::~Cowboy()
{
	// ai-je une arme a detruire ?
	if (arme != NULL) delete
		
		arme;
}

void Cowboy::setArme(Arme* arme)
{
	this->arme = arme;
}
