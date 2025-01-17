#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &t) : type(t) {}

ATarget::ATarget(const ATarget &x) : type(x.type) {}

ATarget::~ATarget() {}

ATarget&    ATarget::operator=(const ATarget &x) {
    this->type = x.getType();
    return (*this);
}

const std::string&	ATarget::getType() const {
    return (this->type);
}

void    ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << this->type << " has been "
            << spell.getEffects() << "!" << std::endl;
}
