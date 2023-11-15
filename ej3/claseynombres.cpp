#include <iostream>

namespace Geometria {
    class Circulo {
    private:
        float radio;

    public:
        Circulo(float r) : radio(r) {}

        float calcularArea() {
            return 3.14159 * radio * radio;
        }
        float calcularPerimetro() {
            return 2 * 3.14159 * radio;
        }
    };
}
int main() {
    Geometria::Circulo circulo(5);

    float area = circulo.calcularArea();
    float perimetro = circulo.calcularPerimetro();
    std::cout << "Área del círculo: " << area << std::endl;
    std::cout << "Perímetro del círculo: " << perimetro << std::endl;

    return 0;
}