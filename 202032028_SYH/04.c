#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    
    int play;
    int com; 
    int cnt=0; 
    int win=0, lose=0, draw=0; 
    char str[3][4]={"가위","바위","보"}; 
    
    srand(time(NULL));

    while(1){               
        printf("가위(1), 바위(2), 보(3), 종료(0) 선택하시오? \n");
        scanf("%d",&play); 
        com=rand()%3+1;
        if(play==0) break; 
        else if(play>3) printf("error!\n"); 
        else if((com==1 && play==1)||(com==2 && play==2)||(com==3 && play==3)){ 
            printf("com %s play %s [비김]\n",str[com-1],str[play-1]);
            draw++;                      
            cnt++;
        }
        else if((com==1 && play==2)||(com==2 && play==3)||(com==3 && play==1)){ 
            printf("com %s play %s [승리]\n",str[com-1],str[play-1]);
            win++;
            cnt++;          
        }
        else{ 
            printf("com %s play %s [패배]\n",str[com-1],str[play-1]);
            lose++;
            cnt++;
        }
                
    }
    printf("%d판 %d승 %d무 %d패 \n",cnt,win,draw,lose);
    
    return 0;
}   