
#include "Rond.hpp"

#include "Position.hpp"
#include "Distance.hpp"

#include <visitor/IVisitor.hpp>

#include <iostream>

namespace gui {

Rond::Rond(Position centre, Distance rayon)
	: mCentre(centre), mRayon(rayon)
{
}

void Rond::deplacer(const Position& nouvellePos)
{
	mCentre = nouvellePos;
	envoyerNotif();
}

void Rond::peindre()
{
	std::cout << "Affichage d'un rond";
}

void Rond::accept(visitor::IVisitor& visitor)
{
	visitor.visit(*this);
}

Position Rond::getCentre() const
{
	return mCentre;
}

Distance Rond::getRayon() const
{
	return mRayon;
}

} // namespace gui
