#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c; int n, i, j, k;
    for(i=0;c!='@';i++){
        scanf(" %c", &c);
        if(c=='@'){
            break;
        }
        scanf("%d", &n);
        for(j=1;j<=n-1;j++){
                printf(" ");
        }
        printf("%c", c);
        for(j=1;j<=n-1;j++){
                printf(" ");
        }
        printf("\n");
        for(j=2;j<=n-1;j++){
            for(k=n-j;k>=1;k--){
                printf(" ");
            }
            printf("%c", c);
            for(k=1;k<=2*(j-1)-1;k++){
                printf(" ");
            }
            printf("%c", c);
            for(k=n-j;k>=1;k--){
                printf(" ");
            }
            printf("\n");
        }
        if(n!=1){
            for(j=1;j<=2*n-1;j++){
                printf("%c", c);
            }
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
