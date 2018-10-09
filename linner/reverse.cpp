#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int reverse(int j,int k, int ary[]){
    int tmp;
    for(j = j,k = k;j<k;j++,k--){
        tmp = ary[j];
        ary[j] = ary[k];
        ary[k] = tmp;
    }
    return 0;
}

// int reverse(int j,int k, int ary[], int m){

// }

int main(int argc, char const *argv[])
{
    int ary[4];
    for(int i=0;i<4;i++){
        std::cin>>ary[i];
    }
    reverse(0,3,ary);
    for(int i = 0;i<4;i++){
        std::cout<<ary[i]<<std::endl;
    }
    return 0;
}


