#include <stdio.h>
int main() {
    int i,j,n;
    char c='a';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2!=0)
            {
                printf("%c",c++ -32);
            }
            else{
                printf("%c",c++);
            }            
        }
        printf("\n");
    }
    return 0;
}