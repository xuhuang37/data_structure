#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    for (int a = 0;;a++){
         int t = a*a;
        if (t>9999) break;
        if (t<1000) continue;
        int t1 = t/100;
        int t2 = t%100;
        if (t / 10 == t % 10 && t2 / 10 == t2 % 10)
        {
        cout<<t<<endl;            
        }
        n++;

    }
    cout<<n<<endl;
    return 0;
}
