
#pragma once

#include "Position.hpp"

#include <set>

namespace visitor {
	class IVisitor;
} // namespace visitor

namespace observer {
	class IObserver;
} // namespace observer

namespace gui {

class ObjetGraphique
{
	public:
		virtual ~ObjetGraphique() = default;

		virtual void deplacer(const Position& nouvellePos) = 0;
		virtual void peindre() = 0;

		virtual void accept(visitor::IVisitor& visitor) = 0;

		void ajout(observer::IObserver* observer);
		void supprimer(observer::IObserver* observer);

	protected:
		void envoyerNotif();

	private:
		std::set<observer::IObserver*> mObservers;
};

}
