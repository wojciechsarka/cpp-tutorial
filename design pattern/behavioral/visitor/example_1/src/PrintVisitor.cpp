#include "../inc/PrintVisitor.h"

#include <iostream>

void PrintVisitor::visit(const Rectangle& shape) const
{
    std::cout << "Rectangle : a(" << shape.get_a() << "), b(" << shape.get_b() << ")";
}

void PrintVisitor::visit(const Square& shape) const
{
    std::cout << "Square : a(" << shape.get_a() << ")";
}

void PrintVisitor::visit(const Triangle& shape) const
{
    std::cout << "Triangle : a(" << shape.get_a() << "), h(" << shape.get_h() << ")";
}
