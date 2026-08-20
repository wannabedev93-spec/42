#include<stdlib.h>
#include <stdio.h>


int base_check(char *base);
int get_index(char c, char *base);
int atoi_base(char *num, char *base_from);
char *itoa_base(int n, char *base_to);


char *ft_convert_base(char *nbr, char *base_from, char *base_to){
	
	if(base_check(base_from) == -1 || base_check(base_to) == -1) return NULL;

	int number = atoi_base(nbr, base_from);
	
	char* final_number = itoa_base(number, base_to);

	return final_number;
}



void	test(char *num, char *from, char *to, char *expected)
{
	char	*result;

	result = ft_convert_base(num, from, to);

	printf("\n");
	printf("num      : \"%s\"\n", num);
	printf("from     : \"%s\"\n", from);
	printf("to       : \"%s\"\n", to);
	printf("result   : \"%s\"\n", result ? result : "NULL");
	printf("expected : \"%s\"\n", expected);

	if (result)
		free(result);
}

int	main(void)
{
	printf("========================================\n");
	printf("       FT_CONVERT_BASE TESTS\n");
	printf("========================================\n");

	/* 01 - Binary -> Decimal */
	test("1010", "01", "0123456789", "10");

	/* 02 - Decimal -> Binary */
	test("10", "0123456789", "01", "1010");

	/* 03 - Decimal -> Hexadecimal */
	test("255", "0123456789", "0123456789abcdef", "ff");

	/* 04 - Hexadecimal -> Decimal */
	test("ff", "0123456789abcdef", "0123456789", "255");

	/* 05 - Hexadecimal -> Binary */
	test("dead", "0123456789abcdef", "01",
		"1101111010101101");

	/* 06 - Negative */
	test("-1010", "01", "0123456789", "-10");

	/* 07 - Whitespace */
	test("   1010", "01", "0123456789", "10");

	/* 08 - Multiple signs */
	test("---1010", "01", "0123456789", "-10");

	/* 09 - Arbitrary base */
	test("abba", "ab", "XYZ", "ZX");

	/* 10 - Punctuation base */
	test("!@#$", "!@#$", "0123456789", "27");

	/* 11 - Uppercase -> lowercase hexadecimal */
	test("ABCDEF",
		"0123456789ABCDEF",
		"0123456789abcdef",
		"abcdef");

	/* 12 - Zero */
	test("0", "0123456789", "01", "0");

	/* 13 - Base 3 -> Base 7 */
	test("222222222", "012", "0123456", "11124");

	/* 14 - INT_MAX -> Binary */
	test("2147483647",
		"0123456789",
		"01",
		"1111111111111111111111111111111");

	/* 15 - INT_MIN -> Binary */
	test("-2147483648",
		"0123456789",
		"01",
		"-10000000000000000000000000000000");

	printf("\n");
	printf("========================================\n");

	/* Invalid bases */
	printf("\nINVALID BASE TESTS\n");

	test("1010", "0", "01", "NULL");
	test("1010", "01", "0", "NULL");
	test("1010", "001", "01", "NULL");
	test("1010", "0 1", "01", "NULL");
	test("1010", "0+1", "01", "NULL");
	test("1010", "0-1", "01", "NULL");

	return (0);
}
