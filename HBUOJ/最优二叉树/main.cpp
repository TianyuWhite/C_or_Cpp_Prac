#include <iostream>
#include<bits/stdc++.h>
#define MAXVALUE 10000
using namespace std;

bool cmp1(int a, int b){
    return a<b;
}

bool cmp2(int a, int b){
    return a>b;
}

int main()
{
    int n, num1[MAXVALUE], num2[MAXVALUE], i, j=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num1[i];
        num2[i] = num1[i];
    }
    sort(num1, num1+n, cmp1);
    for(i=0;i<n-1;i++){
        num1[i+1] = num1[i] * num1[i+1] +1;
        j++;
    }
    int Max=num1[n-1];
    sort(num2, num2+n, cmp2);
    for(i=0;i<n-1;i++){
        num2[i+1] = num2[i] * num2[i+1] +1;
        j++;
    }
    int Min=num2[n-1];
    /*if(j==1){
        cout<<Max<<endl;
        cout<<p[0]<<endl;
        cout<<0<<endl;
    }*/
   // else{
       /* for(i=0;i<j;i++){
            if(p[i]>Max){
                Max = p[i];
            }
            if(p[i]<Min){
                Min = p[i];
            }
        }*/
        cout<<Max<<endl;
        cout<<Min<<endl;
        cout<<Max-Min<<endl;
    //}

    return 0;
}
