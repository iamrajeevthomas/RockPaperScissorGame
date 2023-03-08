#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Game();
void Menu();
void main()
{
 clrscr();
 Menu();
 Game();
}
void Game()
{
 char ch;
 do
 {
 char choice;
 int i,r,score=0;
 for(i=1;i<=3;i++)
 {
  int m=0;
 printf("Round %d\n",i);
 printf("Press R for Rock\n");
 printf("Press P for paper\n");
 printf("Press S for scissor\n");
 scanf("%s",&choice);
 if(choice=='R'||choice=='r')
 {
  srand(time(NULL));
  r=rand()%3;
   if(r==0)
   {
     printf("\n\nYour choice:Rock\n");
     printf("Computer choice:Rock\n");
     printf("Its a Tie\n");
     printf("Your score=%d,Computer Score=%d\n\n",m,m);
   }
   if(r==1)
   {
     printf("\n\nYour choice:Rock\n");
     printf("Computer choice:Paper\n");
     printf("Computer Wins\n");
     printf("Your score=%d,Computer score=%d\n\n",m,m+1);
     score--;
   }
   if(r==2)
   {
     printf("\n\nYour choice:Rock\n");
     printf("Computer choice:Scissor\n");
     printf("You Win\n");
     printf("Your score=%d,Computer score=%d\n\n",m+1,m);
     score++;
   }
  }
  else if(choice=='P'||choice=='p')
  {
   srand(time(NULL));
   r=rand()%3;
   if(r==0)
   {
    printf("\n\nComputer choice:Rock\n");
    printf("Your Choice:Paper\n");
    printf("You Win\n");
    printf("Your score=%d,Computer score=%d\n\n",m+1,m);
    score++;
   }
   if(r==1)
   {
    printf("\n\nYour choice:Paper\n");
    printf("Computer choice:Paper\n");
    printf("Its a Tie\n");
    printf("Your score=%d,Computer score=%d\n\n",m,m);
   }
   if(r==2)
   {
    printf("\n\nYour choice:Paper\n");
    printf("Computer choice:Scissor\n");
    printf("Computer Wins\n");
    score--;
    printf("Your score=%d,Computer score=%d\n\n",m,m+1);
   }
  }
 else if(choice=='S'||choice=='s')
 {
 srand(time(NULL));
 r=rand()%3;
 if(r==0)
 {
   printf("\n\nYour choice:Scissor\n");
   printf("Computer choice:Paper\n");
   printf("Computer Wins\n");
   score--;
   printf("Your score=%d,Computer score=%d\n\n",m,m+1);
 }
 if(r==1)
 {
  printf("\n\nYour choice:Scissor\n");
  printf("Computer choice:Paper\n");
  printf("You Win\n");
  printf("Your score = %d, Computer score = %d \n\n",m+1,m);
  score++;
 }
 if(r==2)
 {
  printf("\n\nYour choice: Scissor \n");
  printf("Computer choice: Scissor \n");
  printf("Its a Tie!! \n");
  printf("Your score = %d, Computer score = %d \n\n",m,m);
 }
}
else
{
 printf("\nYou have entered wrong choice. \n");
 printf("\nExited from game!! Start once again. \n");
}
 }
if(score>=2)
{
 printf("\nCongratulations. You WIN!! \n");
}
else if(score<0)
{
 printf("\nYou loose. Better luck next time!! \n");
}
else if(score==0)
{
 printf("\nIts a Tie!! \n");
}
else if(score==1)
{
 printf("\nCongradulations! You WIN!! \n");
}
else
{
 printf("\nKudos!! Great Move!! \n");
}
printf("Thank You for Playing the Game. \n");
printf("Do you wish to continue again? (y/n): \n");
scanf("%s",&ch);
clrscr();
}while(ch=='Y'||ch=='y');
}
void Menu()
{
 char name[20];
 printf("==========================================================\n");
 printf("===== WELCOME TO THE ROCK, PAPER AND SCISSOR GAME!!! =====\n");
 printf("==========================================================\n");
 printf("There will be 3 round. Best of three will win the Game.\n");
 printf("Let's Begin!!!\n");
 printf("==========================================================\n");
}
