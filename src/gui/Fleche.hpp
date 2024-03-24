
#pragma once

#include "Ligne.hpp"
#include "Position.hpp"

namespace gui {

class Fleche : public Ligne
{
	public:
		enum class SensFleche
		{
			Gauche = 1,
			Droite = 2
		};

		Fleche(Position hautGauche, Position basDroite, SensFleche sensFleche);

		void peindre() override;

		void accept(visitor::IVisitor& visitor) override;

		SensFleche getSensFleche() const;

	private:
		SensFleche mSensFleche;
};

}
