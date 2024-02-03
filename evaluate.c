#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include"stack.c"
#include"token.c"
#define ERR -199
#define M 1.44269504088896340736 // log2(e)
#define PI 3.142
extern int count;
extern int type;
extern int flag;
extern int sign;
char str1[100];
char newString[10][10]; 

int n = 0;
int unary = 1;

void readline(char *str1){
    	long int i,j,ctr; 
    	j=0; ctr=0;
    	for(i=0;i<=(strlen(str1));i++){
        // if space or NULL found, assign NULL into newString[ctr]
        	if(str1[i]==' '||str1[i]=='\0') {
            		newString[ctr][j]='\0';
            		ctr++;  //for next word
            		j=0;    //for next word, init index to 0
        	}
        	else {
            		newString[ctr][j]=str1[i];
            		j++;
        	}
    	}
}

int infix(char *exp){
	long int operator, brace, prob;
	long int tem2, tem3, tem4, fact = 1, c, n;
	long int result;
	long int tem;
	stack tokens;
	init(&tokens);
	while(1){
		tem = tokenise(exp);
		if(unary == 1){
			unary = 0;
			if(tem == '-' && type == 1){
				tem = tokenise(exp);
				tem *= -1;
			}
			
		}
		if (count  == -1)
			break;
		if(type == 0){
			push(&tokens, tem);
		}
		else if(type == 1){
			if(tem == '!') {
				n = pop(&tokens);
				for (c = 1; c <= n; c++)
    				fact = fact * c;
				return fact;
				//push(&tokens, result);				
			}
			if(tem == '*' || tem == '%' || tem == '/' || tem == '^'){
				prob = tokenise(exp);
				if(prob == -1 || type == 1)
					return ERR;
				if(empty(&tokens))
						return ERR;
				switch(tem){
					case '*': 
							if(prob != '('){
								result = pop(&tokens) * prob;
								push(&tokens, result);
							}
							else{
								unary = 1;
								brace = infix(exp);
								result = pop(&tokens) * brace;
								push(&tokens, result);
							}
							break;
					case '/' : 
							if(prob != '('){
								result = pop(&tokens) / prob;
								push(&tokens, result);
							}
							else{
									unary = 1;
									brace = infix(exp);
									result = pop(&tokens) / brace;
									push(&tokens, result);
							}
							break;
					case '%' : 
							if(prob != '('){

								result = pop(&tokens) % prob;
								return result;
								//push(&tokens, result);
							}
							else{
									unary = 1;
									brace = infix(exp);
									result = pop(&tokens) % brace;
									return result;
									//push(&tokens, result);
							}	
					case '^' : 
							if(prob != '('){
								result = pow(pop(&tokens), prob);
								push(&tokens, result);
							}
							else{
								unary = 1;
								brace = infix(exp);
								result = pow(pop(&tokens), brace);
								push(&tokens, result);
							}
						
				}
			}
			else if ( tem == '+' || tem == '-'){
				push(&tokens, tem);

			}

		}
		else if(type == 2){
			if(tem == '('){
				unary = 1;
				brace = infix(exp);
				push(&tokens,brace);
			}
			else if(tem == ')'){
				break;
			}
		}
	}
	while(1){
		tem2 = pop(&tokens);
		//printf("%d\n", tem2);
		if(empty(&tokens)){
			return tem2;
		}
		operator = pop(&tokens);
		if(operator != '+' && operator != '-' )
			return ERR;
		switch(operator){
					case '+' : 
							if(!empty(&tokens))
								tem3 = pop(&tokens);
							else
								return ERR;
							if(!empty(&tokens)) {
								tem4 = pop(&tokens);
								if( tem4 == '-') {
									tem3 = (-1) * tem3;
									push(&tokens, '+');	
								}
								else {
									push(&tokens, tem4);
								}
							}
							result = tem3 + tem2;
							push(&tokens, result);
							break;
						
					case '-' : 
							if(!empty(&tokens))
								tem3 = pop(&tokens);
							else
								return ERR;
							if(!empty(&tokens)) {
								tem4 = pop(&tokens);
								if( tem4 == '-') {
									tem3 = (-1) * tem3;
									push(&tokens, '+');	
								}
								else {
									push(&tokens, tem4);
								}
							}
							result = tem3 - tem2;
							push(&tokens, result);
							break;
				}

	}
	
}

unsigned int log2n(unsigned int n) {
	return (n > 1) ? 1 + log2n(n / 2) : 0;
}

double eval(char *str) {
	double n;
	readline(str);
	n = atof(newString[1]);
	//g_print("%f", n);
	//converting radians to degrees
	if(flag == 1) {
		n = n * (3.142 / 180.0);
		return sin(n);
	}
	else if(flag == 2) {
		n = n * (3.142 / 180.0);
		return cos(n);
	}
	else if(flag == 3) {
		n = n * (3.142 / 180.0);
		return tan(n);
	}
	else if(flag == 4) {
		//n = n * (3.142 / 180.0); this is to convert radian to degree
		return sinh(n);
	}
	else if(flag == 5) {
		//n = n * (3.142 / 180.0); this is to convert radian to degree
		return cosh(n);
	}
	else if(flag == 6) {
		//n = n * (3.142 / 180.0); this is to convert radian to degree
		return tanh(n);
	}
	else if(flag == 7) {
		return log(n);
	}
	else if(flag == 8) {
		 return log2n(n);
	}
	else if(flag == 9) {
		 return sqrt(n);
	}
	else if(flag == 10) {
		  if(n < 0) {
  			n = (-1) * n;
  			return n;
		  }
		  else {
  			return n;
		  }
	}
	else if(flag == 11) {
		  return ceil(n);
	}
	else if(flag == 12) {
		  return floor(n);
	}
	else 
		return 0;
	
}

