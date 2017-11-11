#pragma once

#include "IVisitor.h"

#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"

class AreaVisitor : public IVisitor
{
 
public:

    AreaVisitor(double&);

    void visit(const Square&)    const override;
    void visit(const Triangle&)  const override;
    void visit(const Rectangle&) const override;

private:

    double& area;

};
