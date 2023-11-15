#include <iostream>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int resultado_suma = Matematicas::suma(28, 14);
    int resultado_resta = Matematicas::resta(56, 43);

    std::cout << "Resultado suma: " << resultado_suma << std::endl;
    std::cout << "Resultado resta: " << resultado_resta << std::endl;

    return 0;
}
