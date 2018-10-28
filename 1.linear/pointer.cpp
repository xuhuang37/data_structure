#include <stdio.h>

void f(int *p){
    printf(" p=%p\n", p);
    printf(" i=%d\n", *p);
    *p = 1;
}
void minmax(int *a, int len, int *max, int *min){
    int i;
    printf(" minmax(a)=%p\n", &a);
    printf(" minmax sizeof(a)=%lu\n", sizeof(a));
    *min = *max =a[0];
    a[4] = 1000;
    for(i=1;i<len;i++){
        if (a[i] <= *min){
            *min = a[i];
            printf("curMin%d = %d\n", i,*min);
        }
        if(a[i] >= *max){
            *max = a[i];
            printf("curMax%d = %d\n", i,*max);
        }
    }
    printf( "max=%d\n" ,*max);
    printf( "min=%d\n" ,*min);
}

void g(int i){
    printf(" i=%d\n", i);
}

int main(int argc, char const *argv[])
{
    // int i = 6;
    // printf("&i=%p\n", &i);
    // f(&i);
    // g(i);

    int a[] = {1,2,3,4,5,6,7,8,10,22,44,66,88,99};
    int min,max;
    printf(" main(a)=%p\n", &a);
    printf(" main sizeof(a)=%lu\n", sizeof(a));
    minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("a[0]=%d", a[0]);
    return 0;
}