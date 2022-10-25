#include <iostream>
#define max 100

using namespace std;
int top = -1;
int stack[max];
char expr[100]="235*+";
int isoperator(char x);
int evaluate(int a, int b, char opr);
int pop();
void push(int y);

int main()
{
    int a,b,r;
    int i=0;
    while(expr[i]!='\0')
    {
        if(!isoperator(expr[i]))
        {
            push(expr[i]-48);
        }
        else
        {
            a=pop();
            b=pop();
            r = evaluate(a,b,expr[i]);
            push(r);

        }
        i++;
    }
    cout<<"The result is: "<<pop();
}

int isoperator(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    return 1;
    else
    return 0;
}

int evaluate(int a,int b, char opr)
{
    if(opr=='+')
    return b+a;
    else if(opr=='-')
    return b-a;
    else if(opr=='*')
    return b*a;
    else
    return b/a;
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
