
#pragma once

namespace etat
{

class Deplaceur;

class IEtatDeplacement
{
	public:
		IEtatDeplacement(Deplaceur& deplaceur);

		virtual void deplacement() = 0;
		virtual void validation() = 0;
		virtual void annulation() = 0;
		virtual void donneesMiseAJour() = 0;

	protected:
		Deplaceur& getDeplaceur();

	private:
		Deplaceur& mDeplaceur;
};

} // namespace etat
