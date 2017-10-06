#include "../inc/AreaVisitor.h"

AreaVisitor::AreaVisitor(double& result)
    : result(result)
{
}

void AreaVisitor::visit(const Rectangle& shape) const
{
    result = shape.get_a() * shape.get_b();
}

void AreaVisitor::visit(const Square& shape) const
{
    result = shape.get_a() * shape.get_a();
}

void AreaVisitor::visit(const Triangle& shape) const
{
    result = shape.get_a() * shape.get_h() / 2.0;
}

