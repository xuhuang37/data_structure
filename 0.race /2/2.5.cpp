// #define LOCAL
#include <iostream>
using namespace std;
#define INF 100000000

int main(int argc, char const *argv[])

{
    // #ifdef LOCAL
    //     freopen("data.in","r",stdin);
    //     freopen("data.out","w",stdout);
    // #endif
    // int i = 0;
    // int max = 0;
    // int min = 0;
    // int sum = 0;
    // int n = 0;
    // while (scanf("%d", &i) == 1)
    // {
    //     n++;
    //     if (n == 1)
    //     {
    //         min = i;
    //         max = i;
    //     }

    //     if (i > max)
    //         max = i;
    //     if (i < min)
    //         min = i;
    //     sum += i;
    // }
    // printf("最大值：%d，最小值 %d，平均值：%.3f", max, min, double(sum / n));
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while (fscanf(fin, "%d", &x) == 1)
    {
        s+=x;
        if (x<min) min = x;
        if (x>max) max = x;
        n++;
    }
    fprintf(fout,"d% %d %.3f\n",min,max,(double)s/n);
    fclose(fin);
    fclose(fout);
    return 0;
}
