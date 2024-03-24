
#pragma once

#include "IVisitor.hpp"

namespace visitor {

class SerialisateurVisitor : public IVisitor {
	public:
		void visit(const gui::Rond& rond) override;
		void visit(const gui::Rectangle& rectangle) override;
		void visit(const gui::Ligne& ligne) override;
		void visit(const gui::Fleche& fleche) override;
};

} // namespace visitor
