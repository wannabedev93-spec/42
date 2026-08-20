#include <stdlib.h>

int base_check(char *base){
	int len = 0;
	int dup[256];
	int i = 0;
	while(i < 256){
		dup[i] = 0;
		i++;
	}
	while(*base){
		if((*base >= 9 && *base <= 13) || *base == 32 || *base == '+' || *base == '-' || dup[(unsigned char)*base]) return -1;
		dup[(unsigned char)*base] = 1;
		len++;
		base++;
	}
	if(len < 2) return -1;
	
	return len;
}

int get_index(char c, char *base){
	int i = 0;
	while(base[i]){
		if(base[i] == c) return i;
		i++;
	}
	
	return -1;	
}

int atoi_base(char *num, char *base_from){
	int sign = 1;
	long nbr = 0;
	int base_len = base_check(base_from);
	while((*num >= 9 && *num <= 13) || *num == 32){
		num++;
	}

	while(*num == '+' || *num == '-'){
		if(*num == '-') sign *= -1;
		num++;
	}
	int val = 0;
	while(*num){
		val = get_index(*num, base_from);
		if(val == -1) break;
		nbr = nbr * base_len + val;
		num++;
	}
	
	return nbr * sign;
}


char *itoa_base(int n, char *base_to){
	long nbr = n;
	if(nbr == 0) {
		char *re = malloc(2);
		int i = 0;
		re[i++] = base_to[0];
		re[i] = '\0';
		return re;
	}
	char buff[34];
	int sign = 1;
	int base_len = base_check(base_to);

	if(nbr < 0){
		sign = -1;
		nbr = -nbr;
	}
	
	int i = 0;
	int idx;
	while(nbr > 0){
		idx = nbr % base_len;
		buff[i] = base_to[idx];
		nbr /= base_len;
		i++; 
	}
	if(sign < 0) buff[i++] = '-';
	i--;
	char *re = malloc(34);
	if(re == NULL) return NULL;
	int j = 0;
	
	do{
		re[j++] = buff[i--];
	}while(i >= 0);
	re[j] = '\0';
	return re;
}

