#include<stdio.h>
void main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int k=1;
    for(int i=0;i<4;i++){
        for(int j=k;j<=k+i;j++){
            printf("%d ",j);
        }
        k++;
        printf("\n");
    }
}