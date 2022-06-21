// Accepted

#include <iostream>

int main()
{
    short m, t, s;
    std::cin >> m >> t >> s;
    if (t == 0)
        std::cout << 0 << std::endl;
    else {
        const short last = m - (s - 1) / t - 1;
        std::cout << (last < 0 ? 0 : last) << std::endl;
    }
    return 0;
}
