#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char[]);

int main()
{
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    chat playername;
    time_t t;

    time(&t);

    printf("there is more to print here, but anyway NAME:, this is jsut an exmaple and its late at night right now");
    fgets(playername, 20, stdin);

    mainhome:
    printf("clear");
    printf("Quiz Game");

    printf("Welcome");
    printf("there is a bunch of more stuff to print here but skipping it cause i need to work on actual code besides print variables");
}

for(i=0, i<80;i++)
{
    printf("=");

}

printf("\nCurrent date and time : %s",ctime(&t));

for (i=0;i<80; i++)
{
    printf("=");
}
printf("\n");

choice=toupper(getchar());
getchar();

if(choice=='S')
{
    system("clear");
    printf("----Welcome%s to C")
    printf("then down below there is a whole of printf staements printing directions");
    printf("all teachingg how to start the game etc, anyways just moving on");

}
if(if toupper(getchar())=='Y')
{
    goto home;
}
else
{
    goto mainhome;

}
if(choice=="R")
{
    help();
    getchar();
    goto mainhome;
}
else if(choice=="R")
{
    reset_score();
    getchar();
    goto mainhome;
}
else if(choice=="Q")
{
    system("clear");
    printf("thank you for playing")
    exit(1);
}
else
{
    printf("please choose anything: ");
    goto mainhome;
}
home:
system("clear");
count=0;
for(i=1;i<=6;i++)
{
    getchar();
    system("clear");
    rl=i;

    switch(r1)
    {
        case 1:
        printf("question 1 how are you i guess haha");

    }
}