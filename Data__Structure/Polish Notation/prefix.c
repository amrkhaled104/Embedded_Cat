#include <math.h>
#include "stack.h"
#include "prefix.h"
// نا هنا بحسب ناتج العمليه مش بحول لو عاوز احول اشيل الكومنت بتاع فانكشن التحويل واعدل تعديل بسيط ف فايل الاستاك

void InfixToPostfix(char infix[], char postfix[]){
	
    Stack s;
	CreateStack(&s);
	int i=0,j=0;
	StackEntry e,c;
	e.etype=2;
	for(;(c.info.oprato=infix[i])!='\0';i++)
	{
		if(IsDigit(c.info.oprato))
		{
			postfix[j++]=c.info.oprato;
		}
		else
		{
			if(!StackEmpty(&s)){
				
			    StackTop(&e, &s);
			    while(!StackEmpty(&s)&&Precedance(e.info.oprato,c.info.oprato))
			    {
				    postfix[j++]=e.info.oprato;
				    Pop(&e,&s);
				    if(!StackEmpty(&s))
					    StackTop(&e, &s);	
			    }
			}
			Push(c,&s);
		}
	}
	while(!StackEmpty(&s))
	{
        Pop(&e, &s);
        postfix[j++]=e.info.oprato;
    }
	postfix[j]='\0';
}
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
	
  Stack ss;
  CreateStack(&ss);
  StackEntry op1,op2,val;
  StackEntry c;
  c.etype=1;
  for(int i=0;(c.info.oprato=expr[i])!='\0';i++)
  {
	if(IsDigit(c.info.oprato))
	{
		c.info.digit=(c.info.oprato - '0');
		Push(c, &ss);
	}
	else
	{
		Pop(&op2,&ss);
		Pop(&op1,&ss);
		val.info.digit=Oper(c.info.oprato, op1.info.digit, op2.info.digit);
        Push(val, &ss);
	}
  }
  
  Pop(&val, &ss);
  return val.info.digit;
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