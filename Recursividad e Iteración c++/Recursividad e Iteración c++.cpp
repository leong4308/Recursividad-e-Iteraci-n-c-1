#include <iostream>

int main() {
    int NUM, I, RESUL;

    std::cout << "DIGITE NÚMERO: ";
    std::cin >> NUM;

    I = 1;

    while (I <= 12) {
        RESUL = NUM * I;
        std::cout << NUM << " x " << I << " = " << RESUL << std::endl;
        I = I + 1;
    }

    std::cout << "Pulse una Tecla: ";
    std::cin.get(); // Para esperar una entrada del usuario antes de cerrar el programa

    return 0;
}
