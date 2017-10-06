#pragma once

#include "Shape.h"

class Triangle : public Shape
{

public:

    Triangle(double a, double h);

    void accept(const IVisitor&) const override;

    double get_a() const;
    double get_h() const;

private:

   double a;
   double h;

};
