#include "../inc/PrintVisitor.h"

PrintVisitor::PrintVisitor(std::string& desc)
    : desc(desc)
{
}

void PrintVisitor::visit(const Rectangle& shape) const
{
    desc = "Rectangle : a(" + std::to_string(shape.get_a()) + "), b(" + std::to_string(shape.get_b()) + ")";
}

void PrintVisitor::visit(const Square& shape) const
{
    desc = "Square : a(" + std::to_string(shape.get_a()) + ")";
}

void PrintVisitor::visit(const Triangle& shape) const
{
    desc = "Triangle : a(" + std::to_string(shape.get_a()) + "), h(" + std::to_string(shape.get_h()) + ")";
}
