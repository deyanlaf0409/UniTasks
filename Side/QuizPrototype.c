#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Check_answer(int x,int y,int points);      //Function for checking if the user answer is correct or wrong
int Random_number(void);           //Function for generating random number 0,1 or 2


void main()
{
int p_counter=0;
char user_name[30];
char user_answer;
int user_result,f_result;
char f_activation = 'j';
char answer_a = 'a';
char answer_b ='b';
char answer_c = 'c';
char answer_d = 'd';     //These are the answer options

printf("Welcome to the Ultimate IQ test!Please enter your name:\n");
scanf("%[^\n]",user_name);    //Gets user name
printf("Good luck,%s!\n\n",user_name); //Prints user name

printf("Question 1\n");
printf("a) Answer\nb) Answer\nc) Answer\nd) Correct Answer\n");               //Question 1
printf("Enter the correct answer by typing the a,b,c or d        or u can use joker 50/50 with j!\n\n\n");
scanf(" %c",&user_answer); //Gets the user answer

if(user_answer == f_activation)
{                                    //Activates 50/50 joker if the user press 'j'
    f_result=Random_number();       //Function generates 1 random number and gives it to variable
    
   switch(f_result)
   {
       case 0:                                 //Prints the correct answer and random wrong answer
       printf("\n\na) Answer\n\n\nd) Correct Answer\n"); 
       break;
       
       case 1:
       printf("\n\nb) Answer\n\nd) Correct Answer\n");
       break;  
       case 2:
       printf("\n\nc) Answer\nd) Correct Answer\n");
       break;
   }
printf("Enter the correct answer by typing the a,b,c or d\n");
scanf(" %c",&user_answer); //Gets the user answer
user_result=Check_answer(user_answer,answer_d,p_counter);   //Checks the answer after the 50/50 joker
}
else{
user_result=Check_answer(user_answer,answer_d,p_counter);}   //Checks the answer


}


int Check_answer(int x,int y,int points)
{
 if(x == y)
    {                                              //Check if the given answer is correct 
    points++;
    printf("Correct!  ｡^‿^｡  points:%d",points);
    return 1;
}
else
{
    printf("Wrong answer!Better luck next time!  ◕‿↼\n\n");
    return 0;
}
}


int Random_number(void)
{
    srand(time(NULL));
    int randomnumber;                           //Generating random number 0,1 or 2
    randomnumber = rand() %3;
    return randomnumber;

}
