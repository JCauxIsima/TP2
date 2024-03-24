
#include "AffichageDebugMouvement.hpp"

#include <gui/ObjetGraphique.hpp>

#include <visitor/DebugVisitor.hpp>

namespace observer
{

void AffichageDebugMouvement::notifier(gui::ObjetGraphique& objetGraphique)
{
	visitor::DebugVisitor debugVisitor;
	objetGraphique.accept(debugVisitor);
}

} // namespace observer
