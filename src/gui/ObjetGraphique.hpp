
#pragma once

#include "Position.hpp"

namespace visitor {
	class IVisitor;
} // namespace visitor

namespace gui {

class ObjetGraphique
{
	public:
		virtual ~ObjetGraphique() = default;

		virtual void deplacer(const Position& nouvellePos) = 0;
		virtual void peindre() = 0;

		virtual void accept(visitor::IVisitor& visitor) = 0;
};

}
