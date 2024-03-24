
#include "DebugVisitor.hpp"

#include <gui/Rond.hpp>
#include <gui/Rectangle.hpp>
#include <gui/Ligne.hpp>
#include <gui/Fleche.hpp>

#include <iostream>

namespace visitor {

void DebugVisitor::visit(const gui::Rond& rond)
{
	std::cout << "Visite d'un rond" << std::endl;
	std::cout << "Centre: " << rond.getCentre().x() << ", " << rond.getCentre().y() << std::endl;
	std::cout << "Rayon: " << rond.getRayon().d() << std::endl;
}

void DebugVisitor::visit(const gui::Rectangle& rectangle)
{
	std::cout << "Visite d'un rectangle" << std::endl;
	std::cout << "Haut gauche: " << rectangle.getHautGauche().x() << ", " << rectangle.getHautGauche().y() << std::endl;
	std::cout << "Bas droite: " << rectangle.getBasDroite().x() << ", " << rectangle.getBasDroite().y() << std::endl;
}

void DebugVisitor::visit(const gui::Ligne& ligne)
{
	std::cout << "Visite d'une ligne" << std::endl;
	std::cout << "Haut gauche: " << ligne.getHautGauche().x() << ", " << ligne.getHautGauche().y() << std::endl;
	std::cout << "Bas droite: " << ligne.getBasDroite().x() << ", " << ligne.getBasDroite().y() << std::endl;
}

void DebugVisitor::visit(const gui::Fleche& fleche)
{
	std::cout << "Visite d'une flèche" << std::endl;
	std::cout << "Haut gauche: " << fleche.getHautGauche().x() << ", " << fleche.getHautGauche().y() << std::endl;
	std::cout << "Bas droite: " << fleche.getBasDroite().x() << ", " << fleche.getBasDroite().y() << std::endl;
	std::cout << "Sens de la pointe: " << (int) fleche.getSensFleche() << std::endl;
}

} // namespace visitor
