#include "../inc/Square.h"

Square::Square(double a)
    : a(a)
{
}

void Square::accept(const IVisitor& visitor) const
{
    visitor.visit(*this);
}

double Square::get_a() const
{
    return a;
}
