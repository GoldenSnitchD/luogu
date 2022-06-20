#include <iostream>

class timepoint
{
    unsigned char hour;
    unsigned char minute;

public:
    timepoint() {}
    timepoint(unsigned char hour, unsigned char minute);

    friend std::istream & operator>>(std::istream & is, timepoint & tp);
    friend std::ostream & operator<<(std::ostream & os, const timepoint tp);
    friend timepoint operator-(const timepoint a, const timepoint b);
};


int main()
{
    timepoint a, b;
    std::cin >> a >> b;
    std::cout << b - a << std::endl;
    return 0;
}

timepoint::timepoint(unsigned char _hour, unsigned char _minute)
{
    hour = _hour;
    minute = _minute;
}

std::istream & operator>>(std::istream & is, timepoint & tp)
{
    int hour, minute;
    is >> hour >> minute;
    tp.hour = hour;
    tp.minute = minute;
    return is;
}

std::ostream & operator<<(std::ostream & os, const timepoint tp)
{
    return os << (int) tp.hour << ' ' << (int) tp.minute;
}

timepoint operator-(const timepoint a, const timepoint b)
{
    char hour = a.hour - b.hour, minute = a.minute - b.minute;
    if (a.minute < b.minute) {
        minute += 60;
        hour -= 1;
    }
    return timepoint(hour, minute);
}

