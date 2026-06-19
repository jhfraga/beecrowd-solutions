// 1097 - Sequencia IJ 3 - beecrowd

#include <iostream>

int main(void) {
    int I, J, inicioJ = 7;

    for (I = 1; I < 10; I += 2) {
        for (J = inicioJ; J > inicioJ - 3; J--) {
            std::cout << "I=" << I << " J=" << J << "\n";
        }
        inicioJ += 2;
    }
    return 0;
}
