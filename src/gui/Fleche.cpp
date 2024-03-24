
#include "Fleche.hpp"

#include "Ligne.hpp"
#include "Position.hpp"

#include <visitor/IVisitor.hpp>

#include <iostream>

namespace gui {

Fleche::Fleche(Position hautGauche, Position basDroite, SensFleche sensFleche)
	: Ligne(hautGauche, basDroite),
		mSensFleche(sensFleche)
{
}

void Fleche::peindre()
{
	Ligne::peindre();
	std::cout << " + Affichage d'une fleche";
}

void Fleche::accept(visitor::IVisitor& visitor)
{
	visitor.visit(*this);
}

Fleche::SensFleche Fleche::getSensFleche() const
{
	return mSensFleche;
}

} // namespace gui
