// 2416 - Corrida - beecrowd

#include <iostream>

int main(void)
{
    int C, N;
    std::cin >> C >> N;

    int ponto_termino = C % N;

    std::cout << ponto_termino << '\n';

    return 0;
}
