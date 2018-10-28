#include <iostream>
#include <stdlib.h>

using namespace std;

void sort(int a[],int n){
    int t;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]&&i+1<n-1){
            t = a[i+1];
            a[i+1] = a[i];
            a[i] = t;
        }
    }
}

int *mergeSeqList(int a[], int n, int b[], int m, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
            c[k++] = a[i++];
        else if(a[i]==b[j]){
            c[k++] = a[i++];
            j++;
        }
        else 
            c[k++] = b[j++];
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
    }
    sort(c,14);
    return c;
}

int main(int argc, char const *argv[])
{
    int a[6] = {1, 3, 2, 5, 7, 13};
    int b[8] = {1, 6, 3, 9, 10, 11, 7, 19};
    int c[6 + 8];
    cout<<"____________________"<<endl;
    mergeSeqList(a, 6, b, 8, c);
    sort(a,6);
    sort(b,8);
    for(int i = 0;i<5;i++){
        cout<<a[i]<<endl;
    };
    cout<<"____________________"<<endl;

    for(int i = 0;i<7;i++){
        cout<<b[i]<<endl;
    };
    cout<<"____________________"<<endl;

    for(int i = 0;i<13;i++){
        cout<<c[i]<<endl;
    };
    return 0;
}
