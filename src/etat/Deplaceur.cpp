
#include "Deplaceur.hpp"

#include "IEtatDeplacement.hpp"

#include <iostream>

namespace etat
{

IEtatDeplacement* Deplaceur::getEtatInactif()
{
	return &mEtatInactif;
}

IEtatDeplacement* Deplaceur::getEtatDebutDeplacement()
{
	return &mEtatDebutDeplacement;
}

IEtatDeplacement* Deplaceur::getEtatDeplacementEnCours()
{
	return &mEtatDeplacementEnCours;
}

IEtatDeplacement* Deplaceur::getEtatClotureDeplacement()
{
	return &mEtatClotureDeplacement;
}

IEtatDeplacement* Deplaceur::getEtatAnnulationDeplacement()
{
	return &mEtatAnnulationDeplacement;
}

void Deplaceur::setEtat(IEtatDeplacement* etat)
{
	mEtatCourant = etat;
}

void Deplaceur::deplacement()
{
	mEtatCourant->deplacement();
}

void Deplaceur::validation()
{
	mEtatCourant->validation();
}

void Deplaceur::annulation()
{
	mEtatCourant->annulation();
}

void Deplaceur::donneesMiseAJour()
{
	mEtatCourant->donneesMiseAJour();
}

void Deplaceur::miseAJourGraphique()
{
	std::cout << "Mise à jour graphique" << std::endl;
}

} // namespace etat
