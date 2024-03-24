
#include "SerialisateurVisitor.hpp"

#include <gui/Rond.hpp>
#include <gui/Rectangle.hpp>
#include <gui/Ligne.hpp>
#include <gui/Fleche.hpp>

#include <iostream>

namespace visitor {

class ObjetGraphiqueSerialisaseur
{
	public:
		ObjetGraphiqueSerialisaseur(const std::string& type)
		{
			std::cout << "<objet_graphique type=\"" << type << "\">\n";
		}
		~ObjetGraphiqueSerialisaseur()
		{
			std::cout << "</objet_graphique>\n";
		}
};

void SerialisateurVisitor::visit(const gui::Rond& rond)
{
	std::cout << "Visite d'un rond" << std::endl;
	ObjetGraphiqueSerialisaseur serialiseur("rond");
	std::cout << "  <centre>\n";
	std::cout << "    <x>" << rond.getCentre().x() << "</x>\n";
	std::cout << "    <y>" << rond.getCentre().y() << "</y>\n";
	std::cout << "  </centre>\n";
	std::cout << "  <rayon>" << rond.getRayon().d() << "</rayon>\n";
}

void SerialisateurVisitor::visit(const gui::Rectangle& rectangle)
{
	std::cout << "Visite d'un rectangle" << std::endl;
	ObjetGraphiqueSerialisaseur serialiseur("rectangle");
	std::cout << "  <haut_gauche>\n";
	std::cout << "    <x>" << rectangle.getHautGauche().x() << "</x>\n";
	std::cout << "    <y>" << rectangle.getHautGauche().y() << "</y>\n";
	std::cout << "  </haut_gauche>\n";
	std::cout << "  <bas_droite>\n";
	std::cout << "    <x>" << rectangle.getBasDroite().x() << "</x>\n";
	std::cout << "    <y>" << rectangle.getBasDroite().y() << "</y>\n";
	std::cout << "  </bas_droite>\n";
}

void SerialisateurVisitor::visit(const gui::Ligne& ligne)
{
	std::cout << "Visite d'une ligne" << std::endl;
	ObjetGraphiqueSerialisaseur serialiseur("ligne");
	std::cout << "  <haut_gauche>\n";
	std::cout << "    <x>" << ligne.getHautGauche().x() << "</x>\n";
	std::cout << "    <y>" << ligne.getHautGauche().y() << "</y>\n";
	std::cout << "  </haut_gauche>\n";
	std::cout << "  <bas_droite>\n";
	std::cout << "    <x>" << ligne.getBasDroite().x() << "</x>\n";
	std::cout << "    <y>" << ligne.getBasDroite().y() << "</y>\n";
	std::cout << "  </bas_droite>\n";
}

void SerialisateurVisitor::visit(const gui::Fleche& fleche)
{
	std::cout << "Visite d'une flèche" << std::endl;
	ObjetGraphiqueSerialisaseur serialiseur("fleche");
	std::cout << "  <haut_gauche>\n";
	std::cout << "    <x>" << fleche.getHautGauche().x() << "</x>\n";
	std::cout << "    <y>" << fleche.getHautGauche().y() << "</y>\n";
	std::cout << "  </haut_gauche>\n";
	std::cout << "  <bas_droite>\n";
	std::cout << "    <x>" << fleche.getBasDroite().x() << "</x>\n";
	std::cout << "    <y>" << fleche.getBasDroite().y() << "</y>\n";
	std::cout << "  </bas_droite>\n";
	std::cout << "  <sens_fleche>" << (int) fleche.getSensFleche() << "</sens_fleche>\n";
}

} // namespace visitor
