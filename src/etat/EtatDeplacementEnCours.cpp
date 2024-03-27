
#include "EtatDeplacementEnCours.hpp"

#include "Deplaceur.hpp"

#include <iostream>

namespace etat
{

void EtatDeplacementEnCours::deplacement()
{
	std::cout << "Deplacement en cours" << std::endl;
	getDeplaceur().miseAJourGraphique();
}

void EtatDeplacementEnCours::validation()
{
	std::cout << "Validation du deplacement" << std::endl;
	getDeplaceur().setEtat(getDeplaceur().getEtatClotureDeplacement());
	std::cout << "Sauvegarde nouvelle position..." << std::endl;
}

void EtatDeplacementEnCours::annulation()
{
	std::cout << "Annulation du deplacement" << std::endl;
	getDeplaceur().setEtat(getDeplaceur().getEtatAnnulationDeplacement());
	std::cout << "Retour position initiale..." << std::endl;
}

void EtatDeplacementEnCours::donneesMiseAJour()
{
	std::cerr << "Pas de mise a jour hors cloture ou annulation" << std::endl;
}

} // namespace etat

