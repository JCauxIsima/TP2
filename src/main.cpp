

#include <FenetrePrincipale/FenetrePrincipale.hpp>

#include "gui/Distance.hpp"
#include "gui/ObjetGraphique.hpp"
#include "gui/Position.hpp"
#include "gui/Rond.hpp"
#include "gui/Rectangle.hpp"
#include "gui/Fleche.hpp"

#include <QApplication>

#include <iostream>
#include <memory>
#include <vector>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

	std::vector<std::unique_ptr<gui::ObjetGraphique>> objets;
	objets.emplace_back(std::make_unique<gui::Rectangle>(gui::Position(2.,2.), gui::Position(5.,5.)));
	objets.emplace_back(std::make_unique<gui::Rectangle>(gui::Position(3.,2.), gui::Position(4.,3.)));
	objets.emplace_back(std::make_unique<gui::Rond>(gui::Position(3.5,2.5), gui::Distance(0.5)));
	objets.emplace_back(std::make_unique<gui::Fleche>(gui::Position(3.5,2.5), gui::Position(3.5, 3), gui::Fleche::SensFleche::Droite));

	while (true)
	{
		for (const auto& objectGraphique : objets)
		{
			objectGraphique->peindre();
		}
		std::cin.ignore();
	}

  //TP2::FenetrePrincipale::MainWindow fenetre;
  //fenetre.show();

  return app.exec();
}
