#define ERR -199
int dec = 0;
int count = 0;
int type = -1;
int tokenise(char *str) {
	
	int i, temp = 0;
	for(i = count; str[i] != '\0'; i++, count++) {
		temp = 0;
		if( str[i] <= '9' && str[i] >= '0') {
			temp = temp * 10 + str[i] - '0';
			i++;
			count++;
			while( str[i] <= '9' && str[i] >= '0') {
				temp = temp * 10 + str[i] - '0';
				i++;
				count++;
			}
			
			type = 0;
			return temp;
		
		}
		if( str[i] == '.') {
			return 0;
		}
		if( str[i] == '+' || str[i] == '*' || str[i] == '%' || str[i] == '/' || str[i] == '-'|| str[i] == '!' || str[i] == '^') {
			count++;
			type = 1;
			
			return str[i];
				
		}
		if( str[i] == ')' || str[i] == '(') {
			
			count++;
			type = 2;
			return str[i];
		}
		if( str[i] != ' ' && !(str[i] <= '9' && str[i] >= '0') && !( str[i] == '+' || str[i] == '*' || str[i] == '%' || str[i] == '/' || str[i] == '-' || str[i] != '^' || str[i] != '!') &&  str[i] != '\n') {
			count++;
			return ERR;
		}
	}
	count = -1;
	return -1;


}

