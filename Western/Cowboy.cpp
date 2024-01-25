#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const int popularite, const string adjectif)
	:Humain(nom, boissonFavorite), popularite(popularite), adjectif(adjectif)
{
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je m'appelle " << nom << " et je suis " << adjectif << endl;
}
