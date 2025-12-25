#include<stdio.h>
int main(){
    int input,i,round,j;
    char alphabet;
    scanf("%c %d %d",&alphabet,&input,&round);
    for(i = 1;i<=round;i++){
        for(j=1;j<=input;j++){
            printf("%c",alphabet);
        }
        printf("\n");
    }
    return 0;    
}