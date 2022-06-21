// Accepted

#include <iostream>

class money
{
    int jiao;

    inline void init(const int _yuan, const int _jiao);

public:
    money() {}
    inline money(const int _yuan, const int _jiao);

    friend std::istream & operator>>(std::istream & is, money & m);
    inline int operator/(const money m);
};

int main()
{
    money given;
    std::cin >> given;
    std::cout << given / money(1, 9) << std::endl;
    return 0;
}

inline void money::init(const int _yuan, const int _jiao)
{ jiao = _yuan * 10 + _jiao; }

inline money::money(const int _yuan, const int _jiao)
{ init(_yuan, _jiao); }

std::istream & operator>>(std::istream & is, money & m)
{
    int _yuan, _jiao;
    is >> _yuan >> _jiao;
    m.init(_yuan, _jiao);
    return is;
}

inline int money::operator/(const money m)
{ return jiao / m.jiao; }
