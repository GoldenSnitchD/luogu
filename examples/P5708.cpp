// Accepted

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    const double p = (a + b + c) / 2;
    std::cout << std::setprecision(1) << std::fixed << sqrt(p * (p - a) * (p - b) * (p - c)) << std::endl;
    return 0;
}
