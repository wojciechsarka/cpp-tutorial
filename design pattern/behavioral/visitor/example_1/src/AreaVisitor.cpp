#include "../inc/AreaVisitor.h"

AreaVisitor::AreaVisitor(double& area)
    : area(area)
{
}

void AreaVisitor::visit(const Rectangle& shape) const
{
    area = shape.get_a() * shape.get_b();
}

void AreaVisitor::visit(const Square& shape) const
{
    area = shape.get_a() * shape.get_a();
}

void AreaVisitor::visit(const Triangle& shape) const
{
    area = shape.get_a() * shape.get_h() / 2.0;
}

