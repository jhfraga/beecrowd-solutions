// 1144 - Sequencia Logica - beecrowd

#include <iostream>
#include <cmath>

int main(void)
{
    int n;
    std::cin >> n;

    int i;

    for (i = 1; i <= n; i++)
    {
        std::cout << i << " " << (i * i) << " " << (i * i * i) << '\n';
        std::cout << i << " " << (i * i) + 1 << " " << (i * i * i) + 1 << '\n';
    }

    return 0;
}
