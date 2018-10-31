#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    long sum = 0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int m = 1;
      for(int j=1;j<=i;j++) {
          m*=j;
      }
      sum +=m;
    }
    printf("%ld",sum%1000000);
    return 0;
}
