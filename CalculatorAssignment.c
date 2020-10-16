//14-09-2020
//Author: Ahmed Elrasoly
//Calculator Project
/*This Calculator Application calculates simple math operations and trigonometric functions

*/
//preprocessors
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include <conio.h>
#define clrscr system("cls");
#if _WIN32
    #define clrscr system("cls");
#elif __APPLE__
    #define clrscr system("clear");
#elif __linux__
    #define clrscr system("clear");
#endif
//functions prototypes
float add(float num1);
float sub(float num1);
float mult(float num1);
float dvid(float num1);
float pwr(float num1);
void clr(void);
void NewInput(void);
//Global variables
float Ans, preAns;
char *inpt[10];


//main function
int main(void)
{
    char cmd;// command  slot
    rules();// launching the toturial
    char dummy;//dummy for rad/deg distingution
    puts("Enter a command:");
    while(cmd = getchar())
    {
        switch (cmd)
        {
        case '+':
            fflush(stdin);
            Ans = add(preAns);
            printf("Answer is %.3f\n",Ans);
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case '-':
            fflush(stdin);
            Ans = sub(preAns);
            printf("Answer is %.3f\n",Ans);
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case '*':
            fflush(stdin);
            Ans = mult(preAns);
            printf("Answer is %.3f\n",Ans);
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case '/':
            fflush(stdin);
            Ans = dvid(preAns);
            printf("Answer is %.3f\n",Ans);
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case '^':
            fflush(stdin);
            Ans = pwr(preAns);
            printf("Answer is %.3f\n",Ans);
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 's':
        case 'S':
            fflush(stdin);
            puts("calculating the sine\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = sin(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = sin(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'c':
        case 'C':
            fflush(stdin);
            puts("calculating the cosine\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = cos(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
              fflush(stdin);
            }//end if
            else{
                Ans = cos(preAns);
                printf("Answer is %.3f\n",Ans);
                fflush(stdin);
            }//end else

            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'T':
        case 't':
            fflush(stdin);
            puts("calculating the tan\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = tan(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = tan(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'a':
        case 'A':
            fflush(stdin);
            puts("calculating the sine inverse\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = asin(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = asin(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'v':
        case 'V':
            fflush(stdin);
            puts("calculating the cosine inverse\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = acos(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = acos(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'y':
        case 'Y':
            fflush(stdin);
            puts("calculating the tan inverse\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = atan(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = atan(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'h':
        case 'H':
            fflush(stdin);
            puts("calculating the sinh\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = sinh(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = sinh(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'J':
        case 'j':
            fflush(stdin);
            puts("calculating the cosh\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = cosh(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = cosh(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'K':
        case 'k':
            fflush(stdin);
            puts("calculating the tanh\n'd' for degree and 'r' for radian");
            dummy = getchar();
            while(dummy!='d' && dummy!='D' &&dummy!='r' && dummy!='R' )
            {
            fflush(stdin);
            puts("'d' for degree and 'r' for radian");
            dummy = getchar();
            }
            if (dummy == 'd' || dummy == 'D')
            {
              preAns *= M_PI/180;
              Ans = tanh(preAns);
              printf("Answer is %.3f\n",Ans);
              puts("Enter a command:");
            }//end if
            else{
                Ans = tanh(preAns);
                printf("Answer is %.3f\n",Ans);
            }//end else
            preAns = Ans;
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'e':
        case 'E':
            fflush(stdin);
            puts("taking the exponential...");
            Ans = exp(preAns);
            printf("Answer is %.3f\n",Ans);
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'L':
        case 'l':
            fflush(stdin);
            puts("taking the Natural Logaritm (base e)...");
            Ans = log(preAns);
            printf("Answer is %.3f\n",Ans);
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'g':
        case 'G':
            fflush(stdin);
            puts("taking the Logarithm (base 10)...");
            Ans = log10(preAns);
            printf("Answer is %.3f\n",Ans);
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'x':
        case 'X':
            fflush(stdin);
            clr();
            fflush(stdin);
            puts("Enter a command:");
            break;
        case 'r':
        case 'R':
            fflush(stdin);
            main();
            break;
        case 'q':
        case 'Q':
            exit(EXIT_SUCCESS);
            break;
        default:
            puts("Invalid command :P");
            fflush(stdin);
            break;
        }//end switch
    }//end while
} //end main

//functions definitions
void rules(void)
{
    clrscr;
    char dummy;//dummy variable for scanf
    printf("%s", "Hi there!\nThanks for using my calulator :)\nhere's some How_To_Use.\n\nFor addition: '+', For subtraction: '-'\nFor multiplication: '*', For division: '/', To raise to a power: '^'\n");
    printf("%s", "For exponential: 'e', For Natural Logarithm(base e): 'l'\nForLogarithm (base 10): 'g'\n\n");
    printf("%s", "For Sin: 's', For Cos: 'c', For Tan: 't', For sin inverse: 'a', For cos inverse: 'v', For tan inverse: 'y', For sinh: 'h', For cosh: 'j', For tanh: 'k'\n\nTo clear the screen: 'x'   ,To show the rules: 'r' --> (that 'll CLEAR the command too, so be careful!)\n\nTo Quit: 'q' :(");
    printf("%s", "That's it!! I hope you enjoy it :D\n\nPress Enter and this message will be gone. I'll leave you a hotkey guide if you're gonna miss me ;D\nAnyway! Have Fun\n");
    if (scanf("%c", &dummy))
        {
            clr();
        }//end if

    }//end rules

float add(float num1)
{
    float num2;
    puts("Please enter the number to be added:");
    scanf("%f", &num2);
    return num1 + num2;
}//end add

float sub(float num1)
{
    float num2;
    puts("Please enter the number to be subtracted:");
    scanf("%f", &num2);
    return num1 - num2;
}//end sub

float mult(float num1)
{
    float num2;
    puts("Please enter the number to multiply by:");
    scanf("%f", &num2);
    return num1 * num2;
}//end mult

float dvid(float num1)
{
    float num2;
    puts("Please enter the number to divide by:");
    scanf("%f", &num2);
    if (num2 == 0)
    {
        puts("Seriously?!! DO NOT DIVIDE BY ZERO. i know it's lame, but that's low man. deal with it !!");
        NewInput();
    }
    else{
        return num1 / num2;
    }
}//end dvid
float pwr(float num1)
{
    float num2, r;
    puts("Please enter the power:");
    scanf("%f", &num2);
    return pow(num1,num2);
}//end pwr
void clr(void)
{
    clrscr;//clear command
    printf("%s","add(+), sub(-), multiply(*), divide(/), power(^), Sin(s), Cos(c), Tan(t), aSin(a), aCos(v), aTan(y), sinh(h), cosh(j), Tanh(k), exp(e), ln(l), log(g), Quit(q).\n clear(x), rules(r)\n\n\"WARNING\"\ntrigonometric functions are not that accurate so sorry for the inconvenience\n\n");
    NewInput();
}
void NewInput(void)
{
    fflush(stdin);
    puts("enter a number which is not zero:");
    gets(inpt);
    preAns = atof(inpt);
    while (preAns == 0)
    {
    puts(".enter a number which is not zero:");
    gets(inpt);
    preAns = atof(inpt);
    }//end while

}//end NewInput

