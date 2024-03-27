
#include "EtatAnnulationDeplacement.hpp"

#include "Deplaceur.hpp"

#include <iostream>

namespace etat
{

void EtatAnnulationDeplacement::deplacement()
{
	std::cerr << "Pas de deplacement possible pendant l'annulation." << std::endl;
}

void EtatAnnulationDeplacement::validation()
{
	std::cerr << "Pas de validation possible pendant l'annulation." << std::endl;
}

void EtatAnnulationDeplacement::annulation()
{
	std::cerr << "Pas d'annulation possible pendant l'annulation." << std::endl;
}

void EtatAnnulationDeplacement::donneesMiseAJour()
{
	std::cout << "Donnees mise a jour" << std::endl;
	getDeplaceur().miseAJourGraphique();
	getDeplaceur().setEtat(getDeplaceur().getEtatInactif());
}

} // namespace etat

