
#include "EtatClotureDeplacement.hpp"

#include "Deplaceur.hpp"

#include <iostream>

namespace etat
{

void EtatClotureDeplacement::deplacement()
{
	std::cerr << "Pas de deplacement possible pendant la validation." << std::endl;
}

void EtatClotureDeplacement::validation()
{
	std::cerr << "Pas de validation possible pendant la validation." << std::endl;
}

void EtatClotureDeplacement::annulation()
{
	std::cerr << "Pas d'annulation possible pendant la validation." << std::endl;
}

void EtatClotureDeplacement::donneesMiseAJour()
{
	std::cout << "Donnees mise a jour" << std::endl;
	getDeplaceur().setEtat(getDeplaceur().getEtatInactif());
}

} // namespace etat

