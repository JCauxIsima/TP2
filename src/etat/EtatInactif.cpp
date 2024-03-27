
#include "EtatInactif.hpp"

#include "Deplaceur.hpp"

#include <iostream>

namespace etat
{

void EtatInactif::deplacement()
{
	std::cout << "Debut du deplacement" << std::endl;
	getDeplaceur().setEtat(getDeplaceur().getEtatDebutDeplacement());
	getDeplaceur().deplacement();
}

void EtatInactif::validation()
{
	std::cerr << "Pas de validation possible sans deplacement prealable." << std::endl;
}

void EtatInactif::annulation()
{
	std::cerr << "Pas d'annulation possible sans deplacement prealable." << std::endl;
}

void EtatInactif::donneesMiseAJour()
{
	std::cerr << "Pas de mise a jour possible sans deplacement prealable." << std::endl;
}

} // namespace etat

