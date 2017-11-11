#pragma once

#include "IVisitor.h"

#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <string>

class PrintVisitor : public IVisitor
{
 
public:

    PrintVisitor(std::string&);

    void visit(const Square&)    const override;
    void visit(const Triangle&)  const override;
    void visit(const Rectangle&) const override;

private:

    std::string& desc;

};
