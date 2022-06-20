// Accepted

#include <iostream>

int main()
{
    float num;
    std::cin >> num;
    std::cout << ((int) (num * 10)) % 10
              << '.'
              << ((int) num) % 10
              << ((int) num) / 10 % 10
              << ((int) num) / 100
              << std::endl;
    return 0;
}

