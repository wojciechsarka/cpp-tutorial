#pragma once

#include "boost/variant.hpp"
#include "Object.h"

class TypeInfoVisitor : public boost::static_visitor<void>
{

public:

    void operator()(const int&) const;
    void operator()(const Object&) const;
    void operator()(const double&) const;
    void operator()(const std::string&) const;

};
