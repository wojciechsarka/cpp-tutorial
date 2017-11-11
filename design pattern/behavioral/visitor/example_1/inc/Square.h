#pragma once

#include "Shape.h"

class Square : public Shape
{

public:

    Square(double);

    void accept(const IVisitor&) const override;

    double get_a() const;

private:

   double a;

};
