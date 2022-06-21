// Accepted

#include <iostream>
#include <cstdint>

inline bool first(const uint16_t num);
inline bool second(const uint16_t num);
inline bool xiaoA(const uint16_t num);
inline bool Uim(const uint16_t num);
inline bool bawei(const uint16_t num);
inline bool zhengmei(const uint16_t num);

int main()
{
    using namespace std;
    uint16_t x;
    cin >> x;
    cout << xiaoA(x) << ' '
         << Uim(x) << ' '
         << bawei(x) << ' '
         << zhengmei(x) << endl;
    return 0;
}

inline bool first(const uint16_t num)
{ return num % 2 == 0; }

inline bool second(const uint16_t num)
{ return num > 4 && num <= 12; }

inline bool xiaoA(const uint16_t num)
{ return first(num) && second(num); }

inline bool Uim(const uint16_t num)
{ return first(num) || second(num); }

inline bool bawei(const uint16_t num)
{ return first(num) ^ second(num); }

inline bool zhengmei(const uint16_t num)
{ return !(first(num) || second(num)); }
