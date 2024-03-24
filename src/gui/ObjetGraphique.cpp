
#include "ObjetGraphique.hpp"

#include <observer/IObserver.hpp>

namespace gui {

void ObjetGraphique::ajout(observer::IObserver* observer)
{
	mObservers.insert(observer);
}

void ObjetGraphique::supprimer(observer::IObserver* observer)
{
	mObservers.erase(observer);
}

void ObjetGraphique::envoyerNotif()
{
	for (auto observer : mObservers)
	{
		observer->notifier(*this);
	}
}

} // namespace gui

