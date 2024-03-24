
#pragma once

#include "IObserver.hpp"

namespace observer
{

class AffichageDebugMouvement : public IObserver
{
	public:
		void notifier(gui::ObjetGraphique& objetGraphique) override;
};

} // namespace observer
