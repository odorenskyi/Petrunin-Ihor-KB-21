#include <cmath>

using namespace std;

double s_calculation(double x, double y, double z){
    return sqrt(abs(pow(z, 2) * 0.5 * y)) + (M_PI * x + exp(abs(y)))/y;
}
