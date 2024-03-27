
#include "IEtatDeplacement.hpp"

#include "Deplaceur.hpp"

namespace etat
{

IEtatDeplacement::IEtatDeplacement(Deplaceur& deplaceur)
	: mDeplaceur(deplaceur)
{
}

Deplaceur& IEtatDeplacement::getDeplaceur()
{
	return mDeplaceur;
}

} // namespace etat
