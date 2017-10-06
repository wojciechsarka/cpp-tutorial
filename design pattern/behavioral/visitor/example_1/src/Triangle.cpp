#include "../inc/Triangle.h"

Triangle::Triangle(double a, double h)
    : a(a)
    , h(h)
{
}

void Triangle::accept(const IVisitor& visitor) const
{
    visitor.visit(*this);
}

double Triangle::get_a() const
{
    return a;
}

double Triangle::get_h() const
{
    return h;
}
