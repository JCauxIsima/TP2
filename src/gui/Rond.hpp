
#pragma once

#include "Distance.hpp"
#include "ObjetGraphique.hpp"
#include "Position.hpp"

namespace gui {

class Rond : public ObjetGraphique
{
	public:
		Rond(Position centre, Distance rayon);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;

		void accept(visitor::IVisitor& visitor) override;

		Position getCentre() const;
		Distance getRayon() const;

	private:
		Position mCentre;
		Distance mRayon;
};

}
