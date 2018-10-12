#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // char word1[8];
    // char word2[8];
    // scanf("%7s",word1);
    // scanf("%7s",word2);
    // printf("%s##%s##\n",word1,word2);

    // char line[] = "hello";
    // printf("sizeof=%lu\n strlen=%lu",sizeof(line), strlen(line));

    char s1[] = "abc";
    char s2[] = "acd";
    printf("strcmp=%d\n", strcmp(s1,s2));
    return 0;
}
