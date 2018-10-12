#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

int reverse(int j, int k, int ary[])
{
    int tmp;
    for (j = j, k = k; j < k; j++, k--)
    {
        tmp = ary[j];
        ary[j] = ary[k];
        ary[k] = tmp;
    }
    return 0;
}

//q2(1)
int reverseInM(int left, int right, int ary[], int k)
{
    int tmp, i, j;
    for (i = left, j = right; i < left + k && i < j; i++, j--)
    {
        tmp = ary[i];
        ary[i] = ary[j];
        ary[j] = tmp;
    }
    return 0;
}
//q2(2)
void reverseToEnd(int j, int k, int ary[], int m)
{
    reverseInM(j, k, ary, m);
    reverse(k - m, k, ary);
}

// linklist reverse

void createLinkList(LinkList &L)
{
    int n, l;
    LNode *tmp, *r = L;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        tmp = (LinkList)malloc(sizeof(LNode));
        cin >> l;
        tmp->data = l;
        r->next = tmp;
        r = tmp;
    }
}

LNode *poolLinkList(LinkList &L)
{
    LNode *p = L;
    cout << "*********************" << endl;
    while (p->next != NULL)
    {
        p = p->next;
        cout << p->data << endl;
    }
    cout << p << endl;    
    return p;
}
void reverseLinkList(LinkList &L, LNode *q)
{
    LNode *t;
    while (L->next != q)
    {
        t = L->next;
        L->next = t->next;
        t->next = q->next;
        q->next = t;
    }
}

int main(int argc, char const *argv[])
{
    // int ary[10];
    // for(int i=0;i<9;i++){
    //     cin>>ary[i];
    // }

    // reverseToEnd(0,9,ary,1);
    // for(int i = 0;i<9;i++){
    //     cout<<ary[i]<<endl;
    // }
    LNode *last;
    LinkList head = (LinkList)malloc(sizeof(LNode));
    createLinkList(head);
    last = poolLinkList(head);
    reverseLinkList(head,last);
    cout<<(head->next)->data<<endl;
    poolLinkList(head);
    return 0;
}
