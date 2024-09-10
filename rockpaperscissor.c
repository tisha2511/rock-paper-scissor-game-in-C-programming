# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int rps(char you,char com){
    if(you==com){
        return 0;
    }
    if(you=='r' && com=='p'){
return -1;
    }
    if(you=='r' && com=='s'){
return 1;
    }
    if(you=='p' && com=='r'){
return 1;
    }
    if(you=='p' && com=='s'){
return -1;
    }
    if(you=='s' && com=='r'){
return -1;
    }
    if(you=='s' && com=='p'){
return 1;
    }
}
int main(){
    char you,com;
     srand(time(0));
    int number=rand()%100+1;
    if(number<33){
        com ='r';
    }
     if(number>33 && number<66){
        com ='p';
    }
     if(number>66){
        com ='s';
    }
    printf("enter r for rock p for paper s for scissor\n");
    scanf("%c",&you);
    printf("you chose %c and com chose %c.",you,com);
    int result=rps(you,com);
    if(result==1){
        printf("you won!\n");
    }
    else if(result==0){
        printf("match draw!\n");
    }
    else{
        printf("you lose!\n");
    }
     return 0;
}