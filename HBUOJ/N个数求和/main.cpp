#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long Max(long a, long b){
    long r;
    if(a<b)
    {
        r=a;
        a=b;
        b=r;
    }
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}




int main()
{
    long n, fz0, fm0, fz=0, fm=0, i, j, ma;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%ld/%ld", &fz0, &fm0);
       // printf("·Ö×Ó£º%d£¬ ·ÖÄ¸£º%d\n:",fz0, fm0);
        if(i==0){
            fz = fz0;
            fm = fm0;
        }
        else{
            if(fm0 == fm){
                fz = fz + fz0;
            }
            else{
                fz = fz*fm0+fz0*fm;
                fm = fm*fm0;
                ma = Max(fz, fm);
                fz = fz / ma;
                fm = fm / ma;
            }
        }
    }
    if(fz>=fm){
        if(fz%fm==0){
            printf("%ld", fz/fm);
        }
        else{
            printf("%ld ", fz/fm);
            printf("%ld/%ld", fz-fm*(fz/fm), fm);
        }
    }
    else{
        printf("%ld/%ld", fz, fm);
    }
    return 0;
}
