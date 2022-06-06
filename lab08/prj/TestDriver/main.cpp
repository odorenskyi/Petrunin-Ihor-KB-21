#include <iostream>
#include <iomanip>
#include <cmath>
#include "ModulesPetrunin.h"

using namespace std;

int main()
{
    double x[10] = {1, 2, -3, 1.5, 0.8, 6.9, 2.8, 10, -9.42, 22.8};
    double y[10] = {2, -3, 1.5, 0.8, 6.9, 2.8, 10, -9.42, 1, -1};
    double z[10] = {-3, 1.5, 0.8, 6.9, 2.8, 10, -9.42, 1, 2, 13.25};
    double S[10] = {8.26532, -6.95246, -2.60257, 13.03636, 149.37294,
                    25.44703, 2224.58999, -1310.35609, -25.46131, -64.97743};

    for(int i = 0; i < 10; i++){

        cout << "Test_" << i << " " << (check(round(s_calculation(x[i], y[i], z[i])), S[i])? "passed" : "failed") << endl;
        cout << s_calculation(x[i], y[i], z[i]) << " " << S[i] << endl;
    }
    return 0;
}
