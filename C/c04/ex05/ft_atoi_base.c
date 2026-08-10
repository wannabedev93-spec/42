#include <stdio.h>

int base_check(char *base){
	int len = 0;
	int dup[256] = {0};
	while(*base){
		if(*base == '-' 
		|| *base == '+'
		|| (*base >= 9 && *base <= 13) 
		|| *base == 32 
		|| dup[(unsigned char) *base]) return -1;
		dup[(unsigned char)*base] = 1;
		len++;
		base++; 
	}

	return len;
}

int get_index(char c, char* str){
	int i = 0;
	while(str[i]){
		if(c == str[i]) return i;
		i++;
	}
	return -1;
}
                                                         
int ft_atoi_base(char *str, char *base){
	int base_len = base_check(base);
	int sign = 1;
	int num = 0;
	if(base_len < 2) return 0;
	while((*str <= 13 && *str >= 9) || *str == 32) str++;
	while(*str == '-' || *str == '+') {
		if(*str == '-') sign *= -1;
		str++;
	}

	int char_value = 0;

	while(*str){
		char_value = get_index(*str, base);
		if(char_value < 0) break;
		num = num * base_len + char_value;
		str++;
	}
	
	return num * sign;
	
}


int main(void)
{
    printf("===== Decimal =====\n");
    printf("str=\"123\" base=\"0123456789\" Expected=123 Result=%d\n", ft_atoi_base("123", "0123456789"));
    printf("str=\"0\" base=\"0123456789\" Expected=0 Result=%d\n", ft_atoi_base("0", "0123456789"));
    printf("str=\"-42\" base=\"0123456789\" Expected=-42 Result=%d\n", ft_atoi_base("-42", "0123456789"));
    printf("str=\"+42\" base=\"0123456789\" Expected=42 Result=%d\n", ft_atoi_base("+42", "0123456789"));

    printf("\n===== Binary =====\n");
    printf("str=\"0\" base=\"01\" Expected=0 Result=%d\n", ft_atoi_base("0", "01"));
    printf("str=\"1\" base=\"01\" Expected=1 Result=%d\n", ft_atoi_base("1", "01"));
    printf("str=\"10\" base=\"01\" Expected=2 Result=%d\n", ft_atoi_base("10", "01"));
    printf("str=\"1111\" base=\"01\" Expected=15 Result=%d\n", ft_atoi_base("1111", "01"));
    printf("str=\"-1010\" base=\"01\" Expected=-10 Result=%d\n", ft_atoi_base("-1010", "01"));

    printf("\n===== Octal =====\n");
    printf("str=\"10\" base=\"01234567\" Expected=8 Result=%d\n", ft_atoi_base("10", "01234567"));
    printf("str=\"17\" base=\"01234567\" Expected=15 Result=%d\n", ft_atoi_base("17", "01234567"));
    printf("str=\"777\" base=\"01234567\" Expected=511 Result=%d\n", ft_atoi_base("777", "01234567"));

    printf("\n===== Hexadecimal =====\n");
    printf("str=\"A\" base=\"0123456789ABCDEF\" Expected=10 Result=%d\n", ft_atoi_base("A", "0123456789ABCDEF"));
    printf("str=\"F\" base=\"0123456789ABCDEF\" Expected=15 Result=%d\n", ft_atoi_base("F", "0123456789ABCDEF"));
    printf("str=\"10\" base=\"0123456789ABCDEF\" Expected=16 Result=%d\n", ft_atoi_base("10", "0123456789ABCDEF"));
    printf("str=\"FF\" base=\"0123456789ABCDEF\" Expected=255 Result=%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));
    printf("str=\"-2A\" base=\"0123456789ABCDEF\" Expected=-42 Result=%d\n", ft_atoi_base("-2A", "0123456789ABCDEF"));

    printf("\n===== Weird Base =====\n");
    printf("str=\"p\" base=\"poneyvif\" Expected=0 Result=%d\n", ft_atoi_base("p", "poneyvif"));
    printf("str=\"o\" base=\"poneyvif\" Expected=1 Result=%d\n", ft_atoi_base("o", "poneyvif"));
    printf("str=\"n\" base=\"poneyvif\" Expected=2 Result=%d\n", ft_atoi_base("n", "poneyvif"));
    printf("str=\"e\" base=\"poneyvif\" Expected=3 Result=%d\n", ft_atoi_base("e", "poneyvif"));
    printf("str=\"y\" base=\"poneyvif\" Expected=4 Result=%d\n", ft_atoi_base("y", "poneyvif"));
    printf("str=\"v\" base=\"poneyvif\" Expected=5 Result=%d\n", ft_atoi_base("v", "poneyvif"));
    printf("str=\"i\" base=\"poneyvif\" Expected=6 Result=%d\n", ft_atoi_base("i", "poneyvif"));
    printf("str=\"f\" base=\"poneyvif\" Expected=7 Result=%d\n", ft_atoi_base("f", "poneyvif"));
    printf("str=\"ye\" base=\"poneyvif\" Expected=35 Result=%d\n", ft_atoi_base("ye", "poneyvif"));

    printf("\n===== Invalid Base =====\n");
    printf("str=\"123\" base=\"\" Expected=0 Result=%d\n", ft_atoi_base("123", ""));
    printf("str=\"123\" base=\"0\" Expected=0 Result=%d\n", ft_atoi_base("123", "0"));
    printf("str=\"123\" base=\"001\" Expected=0 Result=%d\n", ft_atoi_base("123", "001"));
    printf("str=\"123\" base=\"01234+\" Expected=0 Result=%d\n", ft_atoi_base("123", "01234+"));
    printf("str=\"123\" base=\"01234-\" Expected=0 Result=%d\n", ft_atoi_base("123", "01234-"));
    printf("str=\"123\" base=\"0123 4\" Expected=0 Result=%d\n", ft_atoi_base("123", "0123 4"));

    printf("\n===== Partial Conversion =====\n");
    printf("str=\"12A3\" base=\"0123456789\" Expected=12 Result=%d\n", ft_atoi_base("12A3", "0123456789"));
    printf("str=\"101201\" base=\"01\" Expected=5 Result=%d\n", ft_atoi_base("101201", "01"));

    printf("\n===== Leading Spaces =====\n");
    printf("str=\"    42\" base=\"0123456789\" Expected=42 Result=%d\n", ft_atoi_base("    42", "0123456789"));
    printf("str=\"\\t\\n 101\" base=\"01\" Expected=5 Result=%d\n", ft_atoi_base("\t\n 101", "01"));

    printf("\n===== Multiple Signs =====\n");
    printf("str=\"--42\" base=\"0123456789\" Expected=42 Result=%d\n", ft_atoi_base("--42", "0123456789"));
    printf("str=\"---42\" base=\"0123456789\" Expected=-42 Result=%d\n", ft_atoi_base("---42", "0123456789"));
    printf("str=\"+-+-42\" base=\"0123456789\" Expected=42 Result=%d\n", ft_atoi_base("+-+-42", "0123456789"));

    printf("\n===== Edge Cases =====\n");
    printf("str=\"\" base=\"0123456789\" Expected=0 Result=%d\n", ft_atoi_base("", "0123456789"));
    printf("str=\"-\" base=\"0123456789\" Expected=0 Result=%d\n", ft_atoi_base("-", "0123456789"));
    printf("str=\"+\" base=\"0123456789\" Expected=0 Result=%d\n", ft_atoi_base("+", "0123456789"));
    printf("str=\" \" base=\"0123456789\" Expected=0 Result=%d\n", ft_atoi_base(" ", "0123456789"));

    return (0);
}
