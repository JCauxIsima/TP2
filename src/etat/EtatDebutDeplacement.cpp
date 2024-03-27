
#include "EtatDebutDeplacement.hpp"

#include "Deplaceur.hpp"

#include <iostream>

namespace etat
{

void EtatDebutDeplacement::deplacement()
{
	std::cout << "Sauvegarde curseur et modification curseur" << std::endl;
	getDeplaceur().setEtat(getDeplaceur().getEtatDeplacementEnCours());
	getDeplaceur().deplacement();
}

void EtatDebutDeplacement::validation()
{
	std::cerr << "Pas de validation possible sans deplacement en cours." << std::endl;
}

void EtatDebutDeplacement::annulation()
{
	std::cerr << "Pas d'annulation possible sans deplacement en cours." << std::endl;
}

void EtatDebutDeplacement::donneesMiseAJour()
{
	std::cerr << "Pas de mise a jour possible sans validation ou annulation en cours." << std::endl;
}

} // namespace etat

