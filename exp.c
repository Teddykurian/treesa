#include <stdio.h>

int E();
int E1();
int T();
int T1();
int F();
char input[100];
char j;
void main()
{
printf("enter the string to be accepted ending with $:");
scanf("%s",input);
j=0;
if(E()==1 && input[j]=='$')
printf("\naccepted\n");
else
printf("\nnot accepted\n");
}
int E()
{
printf("\n expanding E");
if(T()==1)
if(E1()==1)
return 1;
return 0;
}


int T()
{
printf("\n expanding T");
if(F()==1)
if(T1()==1)
return 1;
return 0;
}

int E1()
{
printf("\n expanding E1");
if(input[j]=='+')
{
printf("\n consumed symbol +");
j++;
if(T()==1)
if(E1()==1)
return 1;
return 0;
}
else
return 1; 
}

int T1()
{
printf("\n expanding T1");
if(input[j]=='*')
{
printf("\n consumed symbol *");
j++;
if(F()==1)
if(T1()==1)
return 1;
return 0;
}
else
return 1;
}

int F()
{
printf("\n expanding F");
if(input[j]=='(')
{
printf("\n consumed symbol (");
j++;
if(E()==1)
{
if(input[j]==')')
printf("\n consumed symbol )");
j++;
return 1;
}
return 0;
}
else if(input[j]=='i')
{
printf("\n consumed i");
j++;
return 1;
}
else
return 0;
}
