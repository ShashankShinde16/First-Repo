#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
int rockPaperScisser()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{    
    char playerName[10];
    printf("Enter your name : ");
    gets(playerName);
    int rPS, player = 0, computer = 0;
    int rps;
    for (int i = 0; i < 10; i++)
    {    
    printf("choose rock,paper,scisser \n0. rock \n1. paper \n2. scisser\n");
    scanf("%d", &rPS);
    rps = rockPaperScisser();
    if (rps == rPS)
    {
        printf("No one got the point\n");
    }
    else if(rps == 0 && rPS == 1)
    {
        printf("player got the point\n");
        player += 1;
        printf("player = %d and comuter = %d\n",player,computer);
    }
    else if (rps == 0 && rPS == 2)
    {
        printf("computer got the point\n");
        computer += 1;
           printf("player = %d and comuter = %d\n",player,computer);
    }
    else if (rps == 1 && rPS == 0)
    {
        printf("computer got the point\n");
        computer += 1;
           printf("player = %d and comuter = %d\n",player,computer);
    }
    else if (rps == 1 && rPS == 2)
    {
        printf("player got the point\n");
        player += 1;
           printf("player = %d and comuter = %d\n",player,computer);
    }
    else if (rps == 2 && rPS == 0)
    {
        printf("player got the point\n");
        player += 1;
        printf("player = %d and comuter = %d\n",player,computer);
    }
    else if (rps == 2 && rPS == 1)
    {
        printf("computer got the point\n");
        computer += 1;
        printf("player = %d and comuter = %d\n",player,computer);
    }
    if (player == 3 || computer == 3)
    {
        break;
    }
    }
    if (player == 3)
    {
        puts(playerName);
        printf("is the winner of this game\n");
    }if (computer == 3)
    {
     printf("computer is the winner of this game\n");
    }
    return 0;
}
