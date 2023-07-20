#include <stdio.h>
int main() 
{
    int i,j,numb,mid,c=2,r=3;
    printf("Enter the number: ");
    scanf("%d",&numb);
    for(i=0;i<numb;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("*");
        }
    c=c+2;
    if(i==numb-1){
        break;
    }
    printf("\n");
    for(j=0;j<r;j++){
        printf("*\n");
    }
    r=r+3;
}
return 0;
}