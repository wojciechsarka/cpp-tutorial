#include "inc/TypeInfoVisitor.h"
#include "inc/Object.h"

int main()
{

    using Union = boost::variant<int, double, std::string, Object>;

    Union _union;
    TypeInfoVisitor visitor;

    apply_visitor(visitor, _union);
    _union = 4.5;
    apply_visitor(visitor, _union);
    _union = Object();
    apply_visitor(visitor, _union);
    _union = 89;
    apply_visitor(visitor, _union);
    _union = "string";
    apply_visitor(visitor, _union);
}
