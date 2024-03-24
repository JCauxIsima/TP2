
#include "Rectangle.hpp"

#include "Position.hpp"

#include <visitor/IVisitor.hpp>

#include <iostream>

namespace gui {

Rectangle::Rectangle(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Rectangle::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
	envoyerNotif();
}

void Rectangle::peindre()
{
	std::cout << "Affichage d'un rectangle";
}

void Rectangle::accept(visitor::IVisitor& visitor)
{
	visitor.visit(*this);
}

Position Rectangle::getHautGauche() const
{
	return mHautGauche;
}

Position Rectangle::getBasDroite() const
{
	return mBasDroite;
}

} // namespace gui
