#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    float area_triangulo = Geometria::calcularAreaTriangulo(5, 8);
    float area_circulo = Geometria::calcularAreaCirculo(4);

    std::cout << "Área del triángulo: " << area_triangulo << std::endl;
    std::cout << "Área del círculo: " << area_circulo << std::endl;

    return 0;
}

