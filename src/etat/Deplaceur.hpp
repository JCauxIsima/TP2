
#pragma once

#include "EtatInactif.hpp"
#include "EtatDebutDeplacement.hpp"
#include "EtatDeplacementEnCours.hpp"
#include "EtatClotureDeplacement.hpp"
#include "EtatAnnulationDeplacement.hpp"

namespace etat
{

class IEtatDeplacement;

class Deplaceur
{
	public:
		IEtatDeplacement* getEtatInactif();
		IEtatDeplacement* getEtatDebutDeplacement();
		IEtatDeplacement* getEtatDeplacementEnCours();
		IEtatDeplacement* getEtatClotureDeplacement();
		IEtatDeplacement* getEtatAnnulationDeplacement();

		void setEtat(IEtatDeplacement* etat);

		void deplacement();
		void validation();
		void annulation();
		void donneesMiseAJour();

		void miseAJourGraphique();

	private:
		IEtatDeplacement* mEtatCourant;

		EtatInactif mEtatInactif;
		EtatDebutDeplacement mEtatDebutDeplacement;
		EtatDeplacementEnCours mEtatDeplacementEnCours;
		EtatClotureDeplacement mEtatClotureDeplacement;
		EtatAnnulationDeplacement mEtatAnnulationDeplacement;
};

} // namespace etat
