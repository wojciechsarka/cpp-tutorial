
#include "inc/Rectangle.h"
#include "inc/Square.h"
#include "inc/Triangle.h"

#include <memory>
#include <vector>
#include <iostream>

#include "inc/AreaVisitor.h"
#include "inc/PrintVisitor.h"

int main()
{
    std::vector<std::shared_ptr<IShape>> shapes = 
    {
        std::make_shared<Rectangle>(2, 6),
	std::make_shared<Triangle>(2, 5),
	std::make_shared<Triangle>(3, 4),
	std::make_shared<Square>(4),
	std::make_shared<Rectangle>(3, 4),
	std::make_shared<Triangle>(1, 3),
	std::make_shared<Triangle>(3, 5),
    };

    for(const auto& item : shapes)
    {
	std::string desc;
        (*item).accept(PrintVisitor(desc));

	double area;
        (*item).accept(AreaVisitor(area));
	std::cout << desc << ", area is equal: " << area << std::endl;
    }
}
