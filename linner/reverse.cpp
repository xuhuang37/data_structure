#include <stdio.h>
#include <iostream>
#include <stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

int reverse(int j,int k, int ary[]){
    int tmp;
    for(j = j,k = k;j<k;j++,k--){
        tmp = ary[j];
        ary[j] = ary[k];
        ary[k] = tmp;
    }
    return 0;
}


//q2(1)
int reverseInM(int left,int right, int ary[], int k){
    int tmp,i,j;
    for( i=left ,j=right;i<left+k&&i<j;i++,j--){
        tmp = ary[i];
        ary[i] = ary[j];
        ary[j] = tmp;
    }
    return 0;
}
//q2(2)
void reverseToEnd(int j,int k, int ary[], int m){
    reverseInM(j,k,ary,m);
    reverse(k-m,k,ary);
}

// linklist reverse

void createLinkList(LinkList &L){
    int n;
    int l;
    LNode *tmp,*r = L;
    std::cin>>n;
    std::cout<<"&&&&&&&&&&&&&&&&&&&&"<<std::endl;
    for(int i = 0;i<n;i++){
        tmp = (LinkList)malloc(sizeof(LNode));
        std::cout<<"...................."<<std::endl;
        std::cin>>l;
        tmp->data = l;
        r->next = tmp;
        r = tmp;
    }
}

void poolLinkList(LinkList &L){
    std::cout<<"----------------"<<std::endl;
    LNode *p = L;
    while(p->next!=NULL){
        std::cout<<p->data<<std::endl;
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    // int ary[10];
    // for(int i=0;i<9;i++){
    //     std::cin>>ary[i];
    // }
    
    // reverseToEnd(0,9,ary,1);
    // for(int i = 0;i<9;i++){
    //     std::cout<<ary[i]<<std::endl;
    // }
    LinkList head;
    createLinkList(head);
    poolLinkList(head);
    return 0;
}


