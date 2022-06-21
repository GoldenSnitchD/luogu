// Accepted

#include <iostream>
#include <iomanip>
#include <cstdint>

using namespace std;

class timepoint
{
    uint8_t hour;
    uint8_t minute;

public:
    timepoint(const uint8_t _hour, const uint8_t _minute);
    friend inline ostream & operator<<(ostream & os, const timepoint tp);
};

inline ostream & operator<<(ostream & os, const timepoint tp);

int main()
{
    uint16_t s, v;
    cin >> s >> v;
    const uint16_t t = (s - 1) / v + 1 + 10, schooltime = (8 + 24) * 60;
    cout << timepoint((schooltime - t) / 60 % 24, (schooltime - t) % 60) << endl;
    return 0;
}

timepoint::timepoint(const uint8_t _hour, const uint8_t _minute)
{
    hour = _hour;
    minute = _minute;
}

inline ostream & operator<<(ostream & os, const timepoint tp)
{
    return os << setw(2) << setfill('0') << (int) tp.hour
              << ':'
              << setw(2) << setfill('0') << (int) tp.minute;
}
