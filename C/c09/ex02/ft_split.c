#include<stdlib.h>

int is_seperator(char c, char *charset){
	while(*charset){
		if(c == *charset) return 1;
		charset++;
	}
	return 0;
}

int word_counter(char *str, char *charset){
	int count = 0;
	while(*str){
		if(!is_seperator(*str,charset) && (is_seperator(str[1], charset) || !str[1])) count++;
		str++;
	}
	return count;
}

int ft_strlen(char *str, char *charset){
	int len = 0;
	while(*str && !is_seperator(*str,charset)){
		len++;
		str++;
	}
	return len;
}

void ft_strcopy(char *buff, char *str, int len){
	int i = 0;
	while(i < len){
		*buff = str[i++];
		buff++;
	}
	*buff = '\0';
}

char **ft_split(char *str, char *charset){
	int w_count = word_counter(str,charset);
	char **result = malloc(sizeof(char*) * (w_count + 1));
	if(!result) return NULL;
	int s_len = 0;
	int i = 0;
	while(*str){
		if(!is_seperator(*str, charset)){
			s_len = ft_strlen(str,charset);
			result[i] = malloc(sizeof(char) * (s_len + 1));
			if(!result[i]) return NULL;
			ft_strcopy(result[i++], str, s_len);
			str += s_len;
		}else{
			str++;
		}
	}
	result[i] = 0;
	return result;
}

#include <stdio.h>

int main(void)
{
	char **result;
	int i;

	printf("\n");
	printf("============================================================\n");
	printf("                    FT_SPLIT TEST SUITE\n");
	printf("============================================================\n");

	/* TEST 1 */
	printf("\n[TEST 1] Basic split\n");
	printf("Input    : \"Hello World\"\n");
	printf("Charset  : \" \"\n");
	printf("Expected : [\"Hello\", \"World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("Hello World", " ");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 2 */
	printf("\n[TEST 2] Multiple consecutive separators\n");
	printf("Input    : \"Hello,,,World\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : [\"Hello\", \"World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("Hello,,,World", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 3 */
	printf("\n[TEST 3] Leading separators\n");
	printf("Input    : \",,,Hello,World\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : [\"Hello\", \"World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split(",,,Hello,World", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 4 */
	printf("\n[TEST 4] Trailing separators\n");
	printf("Input    : \"Hello,World,,,\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : [\"Hello\", \"World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("Hello,World,,,", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 5 */
	printf("\n[TEST 5] Leading + trailing + consecutive\n");
	printf("Input    : \"..Hello....World..\"\n");
	printf("Charset  : \".\"\n");
	printf("Expected : [\"Hello\", \"World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("..Hello....World..", ".");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 6 */
	printf("\n[TEST 6] Multiple separator characters\n");
	printf("Input    : \"Hello,World;42 Test\"\n");
	printf("Charset  : \",; \"\n");
	printf("Expected : [\"Hello\", \"World\", \"42\", \"Test\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("Hello,World;42 Test", ",; ");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 7 */
	printf("\n[TEST 7] Only separators\n");
	printf("Input    : \",,,,,\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : []\n");
	printf("------------------------------------------------------------\n");

	result = ft_split(",,,,,", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}
	printf("result[%d] = NULL\n", i);

	/* TEST 8 */
	printf("\n[TEST 8] Empty string\n");
	printf("Input    : \"\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : []\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}
	printf("result[%d] = NULL\n", i);

	/* TEST 9 */
	printf("\n[TEST 9] No separators\n");
	printf("Input    : \"HelloWorld\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : [\"HelloWorld\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("HelloWorld", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 10 */
	printf("\n[TEST 10] Every character is a separator\n");
	printf("Input    : \"abc\"\n");
	printf("Charset  : \"abc\"\n");
	printf("Expected : []\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("abc", "abc");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}
	printf("result[%d] = NULL\n", i);

	/* TEST 11 */
	printf("\n[TEST 11] Single character\n");
	printf("Input    : \"A\"\n");
	printf("Charset  : \",\"\n");
	printf("Expected : [\"A\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("A", ",");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	/* TEST 12 */
	printf("\n[TEST 12] Empty charset\n");
	printf("Input    : \"Hello World\"\n");
	printf("Charset  : \"\"\n");
	printf("Expected : [\"Hello World\"]\n");
	printf("------------------------------------------------------------\n");

	result = ft_split("Hello World", "");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		i++;
	}

	printf("\n");
	printf("============================================================\n");
	printf("                       TESTS COMPLETE\n");
	printf("============================================================\n\n");

	return (0);
}
