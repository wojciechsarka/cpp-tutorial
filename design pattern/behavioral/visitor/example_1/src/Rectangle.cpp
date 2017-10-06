#include "../inc/Rectangle.h"

Rectangle::Rectangle(double a, double b)
    : a(a)
    , b(b)
{
}

void Rectangle::accept(const IVisitor& visitor) const
{
    visitor.visit(*this);
}

double Rectangle::get_a() const
{
    return a;
}

double Rectangle::get_b() const
{
    return b;
}
