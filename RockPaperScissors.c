#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int rockpaperscissors(char you, char comp)
{
    if(you==comp) //in case of draw
    {
        return 0;
    }
    
    if(you=='r') //user selects rock
    {
        if(comp=='s'){
            return 1;
        }
        if(comp=='p'){
            return -1;
        }
    }

     if(you=='p') //user selects paper
    {
        if(comp=='r'){
            return 1;
        }
        if(comp=='s'){
            return -1;
        }
    }

     if(you=='s')
    {
        if(comp=='p'){
            return 1;
        }
        if(comp=='r'){
            return -1;
        }
    }
}
int main()
{
    char user, computer;
    int number, result;

    srand(time(0));     // generating random number
    number=rand()%100+1;

    if (number<=33)
    {
        computer='r';
    }
    else if (number>33&&number<=66)
    {
        computer='p';
    }
    else
    {
        computer='s';
    }
    
    

    printf("Enter 'r' for rock, 'p' for paper, 's' for snake and 'q' to quit the game\n");
    scanf("%c",&user);
    result= rockpaperscissors(user, computer);

    printf("Computer selected %c \n",computer);

    //printing the result
    if(result==0){
        printf("Game is drawn\n");
    }
    else if(result==1){
        printf("You won\n");
    }
    else{
        printf("You lost\n");
    }
    
    return 0;

}