#include <iostream>
#define max 100

using namespace std;
//GLOBAL DECLARATION
char infix[20]="2+3^4*5/3)";
int postfix[100];
char stack[100];
int top = -1;
char stack[++top]="(";
//FUNCTIONS
int precedence(char opr);
int isdigit(char ch);
int pop();
void push(int y);
//MAIN FXN
int main()
{
	char ch;
	int i=0,j=0;
	while(infix[i]!='\0')
	{
		ch=infinix[i];
		if(isdigit(ch))
		{
			postfix[j++]=ch;
		}
		else
		{
			while(precedence(stack[top])>= precedence(ch))
			postfix[j++]= pop();
			push(ch);
			else if(ch==')')
			{
				while(stack[top]!='(')
			postfix[j++]=pop();
			}
			
		}
		i++;
	
		
	}
   
}

int isdigit(char ch)
{
    if(ch>='0'&& ch <='9')
    return 1;
    else
    return 0;
}

int precedence(char opr)
{
	if(opr='^')
	return 10;
	else if(opr=='*'||opr=='/')
	return 8;
	else if(opr=='+'||opr=='-')
	return 6;
	
}

void push(int y)
{
    if(top>max)
    cout<<"Overflow";
    else
    stack[++top]=y;
}

int pop()
{
    if(top<0)
    cout<<"Underflow";
    else
    return stack[top--];
}
