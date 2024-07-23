#include <math.h>
#include "stack.h"
#include "prefix.h"
// نا هنا بحسب ناتج العمليه مش بحول لو عاوز احول اشيل الكومنت بتاع فانكشن التحويل واعدل تعديل بسيط ف فايل الاستاك
/*
void InfixToPostfix(char infix[], char postfix[]){
	
    Stack s;
	CreateStack(&s);
	char c,op;
	int i=0,j=0;
	for(;(c=infix[i])!='\0';i++)
	{
		if(IsDigit(c))
		{
			postfix[j++]=c;
		}
		else
		{
			if(!StackEmpty(&s)){
				
			    StackTop(&op, &s);
			    while(!StackEmpty(&s)&&Precedance(op,c))
			    {
				    postfix[j++]=op;
				    Pop(&op,&s);
				    if(!StackEmpty(&s))
					    StackTop(&op, &s);	
			    }
			}
			Push(c,&s);
		}
	}
	while(!StackEmpty(&s))
	{
        Pop(&op, &s);
        postfix[j++]=op;
    }
	postfix[j]='\0';
}*/
int IsDigit(char c)
{
	return (c>='0' && c<='9');
}
int Precedance(char op ,char c)
{
	if(op=='^') return 1;
	if(op=='*'||op=='/') return (c!='^');
	if(op=='+'||op=='-') return (c!='^' && c!='*' && c!='/');
	return 0;
}

double EvaluatePostfix(char expr[]){
	
  Stack s;
  CreateStack(&s);
  double op1,op2,val;
  char c;
  for(int i=0;(c=expr[i])!='\0';i++)
  {
	if(IsDigit(c))
	{
		Push((double)(c - '0'), &s);
	}
	else
	{
		Pop(&op2,&s);
		Pop(&op1,&s);
		val=Oper(c, op1, op2);
        Push(val, &s);
	}
  }
  
  Pop(&val, &s);
  return val;
}

double Oper(char c, double op1, double op2){
    switch(c)
	{
        case '+': return(op1+op2);
        case '-': return(op1-op2);
        case '*': return(op1*op2);
        case '/': return(op1/op2);
        case '$': return(pow(op1,op2));
    }
}