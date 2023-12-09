

#include <FenetrePrincipale/FenetrePrincipale.hpp>

#include <QApplication>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  TP2::FenetrePrincipale::MainWindow fenetre;
  fenetre.show();

  return app.exec();
}
