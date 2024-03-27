
#pragma once

#include "IEtatDeplacement.hpp"

namespace etat
{

class EtatInactif : public IEtatDeplacement
{
	public:
		void deplacement() override;
		void validation() override;
		void annulation() override;
		void donneesMiseAJour() override;
};

} // namespace etat
