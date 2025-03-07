#include <iostream>

int main() {
    // Declare variables
    float side_length, apothem, height, base_area,
        lateral_surface_area, surface_area, volume;  // volume moved here

    // Get the length
    std::cout << "What is the side length of your octagonal prism (in mm): ";
    std::cin >> side_length;

    // Get the apothem
    std::cout << "What is the apothem of your octagonal prism (in mm): ";
    std::cin >> apothem;

    // Get the height
    std::cout << "What is the height of your octagonal prism (in mm): ";
    std::cin >> height;

    // Calculate the base area
    base_area = 4 * side_length * apothem;

    // Calculate the lateral_surface_area
    lateral_surface_area = 8 * side_length * height;

    // calculate the surface_area
    surface_area = 2 * base_area + lateral_surface_area;

    // calculate the volume
    volume = base_area * height;

    // display the results
    std::cout << std::endl;
    std::cout << "The surface area of the octagonal prism is "
              << surface_area << " square mm" << std::endl;
    std::cout << "The volume of the octagonal prism is " << volume
              << " cubic mm" << std::endl;

    return 0;
}
