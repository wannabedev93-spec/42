#include<stdlib.h>
#include <stdio.h>

int is_seperator(char c, char *charset){
	while(*charset){
		if(c == *charset) return 1;
		charset++;
	}
	return 0;
}


int word_counter(char *str, char *charset){
	int counter = 0;
	char *temp;
	while(is_seperator(*str, charset)){
		str++;
	}
	while(*str){
		temp = str + 1;
		if((!is_seperator(*str, charset) && is_seperator(*temp, charset)) || (!is_seperator(*str, charset) && !*temp)) counter++;
		str++;
	}
	return counter;
}



int char_counter(char *str, char *charset){
	int i = 0;
	while(!is_seperator(*str, charset) &&  *str){
		i++;
		str++;
	}
	return i + 1;
}

char **ft_split(char *str, char *charset){
	int word_count = word_counter(str, charset);
	char **result = malloc((word_count + 1) * sizeof(char*));
	int j = 0;
	int i = 0;
	while(*str){
		while(is_seperator(*str, charset) &&  *str){
               		 str++;
       			 }
		if (!*str) break;
		result[j] = malloc(char_counter(str, charset));
		i = 0;
		while(!is_seperator(*str, charset) &&  *str){
                	result[j][i++] = *str;
                	str++;
        	}
		result[j][i] = '\0';
		j++;
	}	
	result[j] = NULL;
	return result;
}

#include <stdio.h>

void print_result(char **arr, char *str, char *charset)
{
    int i = 0;

    printf("str       = \"%s\"\n", str);
    printf("separators = \"%s\"\n", charset);

    if (!arr)
    {
        printf("result    = NULL\n");
        return;
    }

    while (arr[i])
    {
        printf("[%d] = \"%s\"\n", i, arr[i]);
        i++;
    }
    printf("[%d] = NULL\n", i);
}

int main(void)
{
    char **res;
    char *str;
    char *charset;

    printf("==== TEST 1 ====\n");
    str = "hello world test";
    charset = " ";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 2 ====\n");
    str = "hello,world,test";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 3 ====\n");
    str = "hello,,world,,,test";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 4 ====\n");
    str = ",,,hello,,,world,,,";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 5 ====\n");
    str = "abcdef";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 6 ====\n");
    str = "";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 7 ====\n");
    str = ",,,,,,,";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 8 ====\n");
    str = "a,b,c,d,e";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 9 ====\n");
    str = "a,,b,,,c";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 10 ====\n");
    str = "42 school piscine";
    charset = " ";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 11 ====\n");
    str = "abc\tdef\nghi";
    charset = "\t\n";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 12 ====\n");
    str = "hello;world,test:42";
    charset = ";,:";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 13 ====\n");
    str = "   hello   world   ";
    charset = " ";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 14 ====\n");
    str = "a";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 15 ====\n");
    str = ",";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 16 ====\n");
    str = ",,,a,,,";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 17 ====\n");
    str = "a,b,";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 18 ====\n");
    str = ",a,b";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 19 ====\n");
    str = ",a,b,";
    charset = ",";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    printf("\n==== TEST 20 ====\n");
    str = "one|two-three+four";
    charset = "|-+";
    res = ft_split(str, charset);
    print_result(res, str, charset);

    return 0;
}
