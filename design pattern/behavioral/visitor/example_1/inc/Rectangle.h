#pragma once

#include "Shape.h"

class Rectangle : public Shape
{

public:

    Rectangle(double, double);

    void accept(const IVisitor&) const override;

    double get_a() const;
    double get_b() const;

private:

   double a;
   double b;

};
