#include "../inc/TypeInfoVisitor.h"
#include <iostream>

void TypeInfoVisitor::operator()(const int&) const
{
    std::cout << "Current type is int." << std::endl;
}

void TypeInfoVisitor::operator()(const Object&) const
{
    std::cout << "Current type is Object." << std::endl;
}

void TypeInfoVisitor::operator()(const double&) const
{
    std::cout << "Current type is double." << std::endl;
}

void TypeInfoVisitor::operator()(const std::string&) const
{
    std::cout << "Current type is string." << std::endl;
}

