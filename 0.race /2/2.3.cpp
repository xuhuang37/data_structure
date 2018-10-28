#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    double sum = 0;
    while (i < 1e6)
    {
        double term =1.0/(2 * i - 1) ;
        if (i % 2 != 0)
        {
            sum += term;
        }
        else
        {
            sum -= term;
        }
        i++;
    }
    printf("%.6f\n", sum * 4);
    return 0;
}
