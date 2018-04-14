#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n0=0, i, j, k;
    char s[40], s0[40];
    char choose, c, a1, a2, flag;
    cin>>n;
    for(i=0;i<n;i++){
        getchar();
        gets(s);
        scanf(" %c", &choose);
        if(choose=='D'){
            cin>>c;
            flag=0;
            for(j=0;j<strlen(s);j++){
                if(s[j]==c){
                    flag==1;
                    for(k=j;k<strlen(s);k++){
                        s[k] = s[k+1];
                    }
                }
            }
            if(flag==0){
                cout<<"N/A";
            }
            for(j=0;j<strlen(s)-1&&flag!=0;j++){
                cout<<s[j];
            }
            cout<<endl;
        }
        else if(choose=='I'){
            flag=0;
            cin>>a1>>a2;
            for(j=strlen(s)-1;j>=0;j--){
                if(s[j]==a1&&flag==0){
                    s0[n0] = s[j];
                    n0++;
                    s0[n0] = a2;
                    n0++;
                    flag=1;
                }
                else{
                    s0[n0] = s[j];
                    n0++;
                }
            }
            if(flag==0){
                cout<<"N/A";
                break;
            }
            for(j=strlen(s);j>=0;j--){
                cout<<s0[j];
            }
            cout<<endl;
        }
        else if(choose=='R'){
            cin>>a1>>a2;
            flag = 0;
            n0 = 0;
            if(flag==0){
                cout<<"N/A";
            }
            for(j=0;j<strlen(s)&&flag!=0;j++){
                if(s[j]==a1){
                    s0[n0] = a2;
                    n0++;
                }
                else{
                    s0[n0] = s[j];
                    n0++;
                }
            }
            cout<<endl;
        }
        else {
            cout<<"N/A"<<endl;
        }
    }
    return 0;
}
