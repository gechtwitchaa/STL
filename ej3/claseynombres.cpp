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
