#include <stdio.h>
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreateListH(LinkList &L);
LinkList CreateListR(LinkList &head);
LNode* getElem(LinkList L,int i);

int main(int argc, char const *argv[])
{
    LinkList l;
    // l = CreateListR(l);
    l = CreateListH(l);
    printf("%d", getElem(l,2)->data);
    return 0;
}

LinkList CreateListH(LinkList &L){
    LNode *s; //做next指针的中间变量
    int x;// as a transit variable
    L = (LinkList)malloc(sizeof(LNode));// apply for space for variable
    L->next = NULL; // 
    scanf("%d", &x); //input data of LNode
    while(x!=9999){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}

LinkList CreateListR(LinkList &head){
    int x; //data的中间变量
    head = (LinkList)malloc(sizeof(LNode));
    LNode *s,*r;
    r = head;
    head->next = NULL;
    scanf("%d",&x);
    while(x!=9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d",&x);
    }
    return head;
}

LNode* getElem(LinkList L,int i){
    int j = 1;
    LNode *p = L->next;
    if(i==0){
        return L;
    }else if(i<0){
        return NULL;
    }else {
        while(p&&j<i){
            p = p->next;
            j++;
        };
        return p;
    }
}
