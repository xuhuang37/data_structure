#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n2, count = 0;
    scanf("%d",&n2);
    long long n = n2;
    while(n>1){
        if (n%2==1) n=n*3+1;
        else n/=2;
        cout<<n<<endl;
        count++;
    }
    printf("%d",count);
    return 0;
}
