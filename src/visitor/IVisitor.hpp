
#pragma once

namespace gui {
	class Rond;
	class Rectangle;
	class Ligne;
	class Fleche;
}

namespace visitor {

class IVisitor {
	public:
		virtual void visit(const gui::Rond& rond) = 0;
		virtual void visit(const gui::Rectangle& rectangle) = 0;
		virtual void visit(const gui::Ligne& ligne) = 0;
		virtual void visit(const gui::Fleche& fleche) = 0;
};

} // namespace Visitor
