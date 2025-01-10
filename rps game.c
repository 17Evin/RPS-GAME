// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int user,computer;
int rock=1,paper=2,scissors=3;
void game(){
    if(user==2&&computer==1)
    {
        printf("you won");
    }
    else if(user==1&&computer==3)
    {
        printf("you won");
    }
    else if(user==3&&computer==2)
    {
        printf("you won");
    }
    else 
    {
        printf("computer wins");
    }
}
int main() {
    // Write C code here
    printf("SPS GAME STARTS ");
    printf("RULES\nPAPER BEATS ROCK\nROCK BEATS SCISSORS\nSCISSORS BEATS PAPER\n");
    printf("GAME STARTS\n");
    
    
    printf("enter the value :\n");
    scanf("%d",&user);
    srand(time(0));
    computer=rand()%3;
    printf("the choice of comp is %d\n",computer);
    game();
    printf("\nPLAY AGAIN\n");
    return 0;
}