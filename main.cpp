#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

int main() {
	Electric_Field E_default;
    	Electric_Field E_components(1e5, 10.9, 1.7e2);

    	std::cout << "Electric Field Magnitude (Default): " << E_default.calculateMagnitude() << std::endl;
    	std::cout << "Electric Field Magnitude (Components): " << E_components.calculateMagnitude() << std::endl;

	Electric_Field E_other(2e5, 5.5, 3.3e2);
    	double innerProduct = E_components.calculateInnerProduct(E_other);
    	std::cout << "Inner Product of Electric Fields: " << innerProduct << std::endl;

	Magnetic_Field B_default;
    	Magnetic_Field B_components(0.5, 0.2, 0.8);

    	std::cout << "Magnetic Field Magnitude (Default): " << B_default.calculateMagnitude() << std::endl;
    	std::cout << "Magnetic Field Magnitude (Components): " << B_components.calculateMagnitude() << std::endl;

	double unitVector[3];
    	B_components.calculateUnitVector(unitVector);
    	std::cout << "Magnetic Field Unit Vector: (" << unitVector[0] << ", " << unitVector[1] << ", " << unitVector[2] << ")" << std::endl;

    return 0;
}
