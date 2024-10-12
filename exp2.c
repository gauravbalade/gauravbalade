#include<stdio.h>
#include<string.h>
#include<conio.h>
int size=10;
int top=-1;
char val;
char STK[10];
int isstkfull()
 {
    if(top==(size-1))
       return 1;
    else
       return 0;
 }
int isstkempty()
 {
    if(top==-1)
       return 1;
    else
       return 0;
 }

void push(char val)
 {
    if(isstkfull())
	printf("Stack is isstkfull\n");
    else
    {
	 top++;
	 STK[top]=val;
    }
 }
char pop()
{
    if(isstkempty())
    printf("Stack is isstkempty\n");
    else
    {
	val=STK[top];
	top--;
    }
    return val;
}
int stktop()
{
    if(isstkempty())
    printf("Stack is isstkempty\n");
    else
    {
	val=STK[top];
    }
	return val;
}
int pri(char ch)
{
    switch(ch)
    {
	case '(' : val=0; break;
	case '+' :
	case '-' : val=1; break;
	case '*' :
	case '/' : val=2;break;
    }
    return val;
}
void main()
 {
      char infix[10]; char postfix[10];
      int len,i,p=0; char ip,pp,next,pinc;
      printf("Enter Infix Expression = ");
      scanf("%s",infix);
      len = strlen(infix);
      for(i=0;i<len;i++)
      {
	   ip=infix[i];
	   switch(ip)
	   {
	       case '(' : push(ip);
			  break;
	       case ')' : while((next=pop())!= '(')
			   {postfix[p++] = next;}
			    break;
	       case '+':
	       case '-':
	       case '*':
	       case '/':
	       case '%':
			//pinc = pri(ip);
			while((isstkempty()!=1)&&(pri(ip)<=pri(stktop())))
			{
			    postfix[p++] = pop();
			}
			    push(ip);
			    break;
	      default:postfix[p++]=ip;
	    }
     }
	    while(!isstkempty())
	    {
	      postfix[p++] = pop();
	    }

	    printf("\npostfix expression=\n");
	    for(i=0;i<p;i++)
	    {
		printf("%c ",postfix[i]);
	    }

    getch();
 }
