#pragma once

#include "IVisitor.h"

#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"

class PrintVisitor : public IVisitor
{
 
public:

    void visit(const Square&)    const override;
    void visit(const Triangle&)  const override;
    void visit(const Rectangle&) const override;

};
