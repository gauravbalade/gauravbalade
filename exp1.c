#ifndef __EXP1_H_                   _
#define __EXP1_H__

#include<stdio.h>
int size=5;
int top=-1;
int val;
int choice;
int STK[5];
int i;
int j;
int k;
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

void push(int val)
{
    if(isstkfull())
        printf("Stack is isstkfull\n");
    else
    {
         top++;
         STK[top]=val;
    }
}
int pop()
{
    if(isstkempty())
    printf("Stack is isstkempty\n");
    else
    {
        val=STK[top];
        top--;
        return val;
    }
}
int stktop()
{
    if(isstkempty())
    printf("Stack is isstkempty\n");
    else
    {
        val=STK[top];
        return val;
    }
}
void display()
{
    if(isstkempty())
    printf("Stack is isstkempty\n");
    else
    {
      for(i=top;i>=0;i--)
      {
          val=STK[i];
          printf("%d\n",val);
      }
    }
}
int main()
{
    do
    {
    printf("1.push\n2.pop\n3.Stacktop\n4.is Stack isstkfull\n5.is Stack isstkempty\n6.display\n7. Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value to be pushed into the Stack\n");
            scanf("%d",&val);  
            push(val);
            break;
        case 2:
            val = pop();
            printf("Pop val is = %d\n",val);
            break;
        case 3:
            val = stktop();
            printf("TOp of stack val is = %d\n",val);
            break;
        case 4:
            j=isstkfull();
            if(j==1)
                printf("Stack is isstkfull\n");
            else
                printf("Stack is not isstkfull\n");
            break;
        case 5:
            k=isstkempty();
            if(k==1)
            printf("Stack is not isstkempty\n");
            else 
            printf("Stack is not isstkempty\n");
            break;
        case 6:
            display();
            break;
  case 7: printf("Thank you for using my program\n");
                break;
                
        }
}while(choice!=7);
}

#endif // __EXP1_H__