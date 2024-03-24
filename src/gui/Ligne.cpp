
#include "Ligne.hpp"

#include "Position.hpp"

#include <visitor/IVisitor.hpp>

#include <iostream>

namespace gui {

Ligne::Ligne(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Ligne::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
}

void Ligne::peindre()
{
	std::cout << "Affichage d'une ligne";
}

void Ligne::accept(visitor::IVisitor& visitor)
{
	visitor.visit(*this);
}

Position Ligne::getHautGauche() const
{
	return mHautGauche;
}

Position Ligne::getBasDroite() const
{
	return mBasDroite;
}

} // namespace gui
