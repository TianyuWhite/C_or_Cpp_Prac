#include <iostream>

using namespace std;

long long c1[1000],c2[1000], c1n=0, c2n=0;

typedef struct bistnode{
    long long data;
    struct bistnode *lchild, *rchild;
}BiSTNode, *BiSTree;

BiSTree BST_InsertNode(BiSTree t, long long kx){
    BiSTNode *f, *p, *s;
    p = t;
    while(p){
        f=p;
        if(kx<p->data){
            p = p->lchild;
        }
        else{
            p = p->rchild;
        }
    }
    s=new BiSTNode;
    s->data = kx;
    s->lchild = NULL;
    s->rchild = NULL;
    if(!t) t=s;
    else if(kx<f->data) f->lchild=s;
    else f->rchild=s;
    return t;
}

void InOrder(BiSTree bt){
    if(bt==NULL) return;
    InOrder(bt->lchild);
    c1[c1n] = bt->data;
    c1n++;
    InOrder(bt->rchild);
}

void PostOrder(BiSTree bt){
    if(bt==NULL) return;
    PostOrder(bt->lchild);
    PostOrder(bt->rchild);
    c2[c2n] = bt->data;
    c2n++;
}

int main()
{
    long long n, kx, i;
    cin>>n;
    BiSTree t = NULL;
    for(i=0;i<n;i++){
        cin>>kx;
        t = BST_InsertNode(t, kx);
    }
    InOrder(t);
    PostOrder(t);
    for(i=0;i<n;i++){
        if(i==n-1){
            cout<<c1[i]<<endl;
        }
        else{
            cout<<c1[i]<<" ";
        }
    }for(i=0;i<n;i++){
        if(i==n-1){
            cout<<c2[i]<<endl;
        }
        else{
            cout<<c2[i]<<" ";
        }
    }
    return 0;
}
