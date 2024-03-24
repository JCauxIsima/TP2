
#pragma once

namespace gui
{
	class ObjetGraphique;
} // namespace gui

namespace observer
{

class IObserver
{
	public:
		virtual void notifier(gui::ObjetGraphique& objetGraphique) = 0;
};

} // namespace observer
