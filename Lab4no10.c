#include <stdio.h>

int main()
{
    int score,student,i;
    int countA = 0,countB = 0,countC = 0,countD=0,countF=0;
    //scanf("%d",&student);
    while(score != -1){
        scanf("%d",&score);
        if(score<=100){
            if(score>=68){
                if(score>=87){
                    printf("A(%d)",score);
                    countA += 1;
                }else if(score>=79){
                    printf("B(%d)",score);
                    countB += 1;
                }else if(score>=71){
                    printf("C(%d)",score);
                    countC += 1;
                }
            
            }else{
                if(score<=63){
                    if(score>12){
                        printf("D(%d)",score);
                        countD += 1;
                    //}else if(score<0){
                        //printf("error score");
                    }else if(score>=0){
                        printf("F(%d)",score);
                        countF += 1;
                    }
                }
            }
        }else{
            printf("error score");
        }
        printf("\n");
    }
    printf("(%d)",countA);
    printf("(%d)",countB);
    printf("(%d)",countC);
    printf("(%d)",countD);
    printf("(%d)",countF);
    return 0;
}