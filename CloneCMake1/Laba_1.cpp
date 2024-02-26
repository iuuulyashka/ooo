
#include <iostream>

int main()
{
    float radius;
    float pi = 3.14;
    double dlina;

    std::cout << "Radius:";
    std::cin >> radius;
    dlina = pi * 2 * radius;
    std::cout << "Dlina:" << dlina;
    return 0;
}

