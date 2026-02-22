// 1078 - Tabuada - beecrowd

#include <iostream>

int main(void)
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= 10; i++) {
        std::cout << i << " x " << N << " = " << (i * N) << '\n';
    }

    return 0;
}
