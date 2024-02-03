typedef struct data {
	long int val;
    	struct data *q;		
} data;
typedef data* node;
typedef struct stack {
    node p;
} stack;
void push(stack *,long int);
int pop(stack *);
int empty(stack *);
void init(stack *);
int tokenise(char *);
