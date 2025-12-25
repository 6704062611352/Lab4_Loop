#include <stdio.h>

int main()
{
    int score,student,i;
    scanf("%d",&student);
    for(i = 1;i<=student;i++){
        scanf("%d",&score);
        if(score<=100){
            if(score>=68){
                if(score>=87){
                    printf("A(%d)",score);
                }else if(score>=79){
                    printf("B(%d)",score);
                }else if(score>=71){
                    printf("C(%d)",score);
                }
            
            }else{
                if(score<=63){
                    if(score>12){
                        printf("D(%d)",score);
                    }else if(score<0){
                        printf("error score");
                    }else{
                        printf("F(%d)",score);
                    }
                }
            }
        }else{
            printf("error score");
        }
        printf("\n");
    }
    return 0;
}