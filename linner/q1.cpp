#include <iostream>
#include <stdlib.h>

typedef struct LNode
{
    char ch;
    struct LNode *next;
} LNode, *LinkList;

LinkList createNoSameLinkList(LinkList &L)
{
    int n;
    char c;
    LNode *s, *r = L;
    std::cin>> n;
    std::cout<< n << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin>>c;
        while (r->next != NULL)
        {
            if (r->ch == c)
                break;
            r = r->next;
        }
        s = (LinkList)malloc(sizeof(LNode));
        s->ch = c;
        r->next = s;
        r = s;
    }
    return L;
}

int main(int argc, char const *argv[])
{
    LinkList l;
    createNoSameLinkList(l);
    return 0;
}
