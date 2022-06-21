// Accepted

#include <iostream>
#include <iomanip>
#include <cmath>

inline double ball_V(const double pi, const double r);

int main() {
    using namespace std;

    int T;
    cin >> T;

    if (T == 1)
        cout << "I love Luogu!" << endl;
    else if (T == 2)
        cout << 2 + 4 << ' ' << 10 - 2 - 4 << endl;
    else if (T == 3)
        cout << 14 / 4 << endl << 14 - 14 % 4 << endl << 14 % 4 << endl;
    else if (T == 4)
        cout << setprecision(6) << (double) 500 / 3 << endl;
    else if (T == 5)
        cout << (260 + 220) / (12 + 20) << endl;
    else if (T == 6)
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    else if (T == 7) {
        int account = 100;
        cout << (account += 10) << endl;
        cout << (account -= 20) << endl;
        cout << (account -= account) << endl;
    } else if (T == 8) {
        const double pi = 3.141593, r = 5;
        cout << 2 * pi * r << endl
             << pi * r * r << endl
             << ball_V(pi, r) << endl;
    } else if (T == 9)
        /** The number of the left peaches ******************
         * At the beginning x
         * 1st day          x / 2 - 1
         * 2nd day          (x / 2 - 1) / 2 - 1
         * 3rd day          ((x / 2 - 1) / 2 - 1) / 2 - 1
         * 4th day          ((x / 2 - 1) / 2 - 1) / 2 - 1 = 1
         *****************************************************/
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
    else if (T == 10)
        /********************************************************************
         * Let every 评测机 评测 x programs in every minute,
         * y programs are being submitted in every minute,
         * z programs are left in the queue at present
         * The question is about k 评测机s wil 评测 all programs in 10 minutes
         * 
         * 8x * 30 = z + 30y
         * 10x * 6 = z + 6y
         * 
         * y = 15.0x / 2
         * z = 15x
         * 
         * kx * 10 = z + 10y
         * k = 9
         ********************************************************************/
        cout << 9 << endl;
    else if (T == 11)
        cout << 100.0 / (8 - 5) << endl;
    else if (T == 12)
        cout << (int) ('M' - 'A' + 1) << endl
             << (char) ('A' + 18 - 1) << endl;
    else if (T == 13) {
        const double pi = 3.141593;
        cout << (int) pow(ball_V(pi, 4) + ball_V(pi, 10), 1 / (double) 3) << endl;
    } else if (T == 14)
        /*****************************************
         * Let the price of the course is x yuan,
         * the number of students who 报名 is y
         * y = -x + 120
         * xy = 3500
         * x(-x + 120) = 3500
         * x * x - 120x + 3500 = 0
         *****************************************/
        cout << llroundl((120 - sqrt(120 * 120 - 4 * 1 * 3500)) / (double) 2) << endl;

    return 0;
}

inline double ball_V(const double pi, const double r)
{ return 4 / (double) 3 * pi * r * r * r; }
