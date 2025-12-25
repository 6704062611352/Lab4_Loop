#include<stdio.h>
int main(){
    int input,i,round,j;
    scanf("%d %d",&input,&round);
    for(i = 1;i<=round;i++){
        for(j=1;j<=round;j++){
            printf("%d",input);
        }
        printf("\n");
    }
    return 0;    
}