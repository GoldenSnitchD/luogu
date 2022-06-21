// Accepted

#include <iostream>
#include <iomanip>

int main()
{
    double t;
    unsigned short n;
    std::cin >> t >> n;
    std::cout << std::setprecision(3) << std::fixed << t / n
              << std::endl
              << n * (unsigned short) 2
              << std::endl;
    return 0;
}

