#include "stack.h"
#include<stdlib.h>
#define ERR -199

void init(stack *s) {
    	s->p = malloc(sizeof(data));
    	s->p->q = NULL;
}

void push(stack *s, long int a) {
    	node temp;
    	s->p->val = a;
    	temp = s -> p;
    	s->p = malloc(sizeof(data));
    	s->p->q = temp;
}

int  pop(stack *s) {
	if(s->p->q == NULL){
		return 0;
	}
	else{    
		s->p = s->p->q;
    		long int num = s->p->val;
    		return num;
	}
}

int empty(stack *s) {
    	if(s->p->q == NULL)
        	return 1;
    	else
    		return 0;
}

