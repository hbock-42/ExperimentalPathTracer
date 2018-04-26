
#include <iostream>
#include "../Headers/EPT.hpp"

int		main()
{
	Vector3 v31 = Vector3(1, 1, 1);
	Vector3 vup = Vector3(0, 1, 0);
	Vector3 vright = Vector3(1, 0, 0);
	std::cout << v31 << std::endl;
	std::cout << "Magnitude = " << v31.Magnitude() << std::endl;
	std::cout << "Dot = " << Vector3::Dot(vup, vright) << std::endl;
	std::cout << "Magnitude after X 2 = " << (v31 * 2).Magnitude() << std::endl;
	std::cout << "Magnitude after X 2 = " << (2 * v31).Magnitude() << std::endl;
	return 0;
}
