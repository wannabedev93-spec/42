#include <stdio.h>
#include <stdlib.h>


char *ft_strjoin(int size, char **strs, char *sep){
	if(!size) return malloc(1);
	int len = 0;
	int seplen = 0;
	int i = 0;
	int j = 0;
	while(j < size){
		while(strs[j][i]){
			i++;
		}
		len += i ;
		i = 0;
		j++;
	}

	while(sep[i]) {
		i++;
		seplen += 1;
	}

	char* re = malloc(len + seplen * (size - 1) + 1);
	i = 0;
	j = 0;
	int idx = 0;
	char *strtsep = sep;
	while(j < size){
                while(strs[j][i]){
			re[idx++] = strs[j][i];
                        i++;
                }
		if(j < size - 1){
			while(*strtsep){
                        re[idx++] = *strtsep;
                        strtsep++;
                	}
		}

		strtsep = sep;
                i = 0;
                j++;
        }
	re[idx] = '\0';
	return re;
}


int main(void)
{
	char *strs1[] = {"Hello", "World", "42"};
	char *strs2[] = {"abc", "def", "ghi"};
	char *strs3[] = {"one"};
	char *strs4[] = {"Hello", "", "World"};
	char *strs5[] = {"", "", ""};
	char *strs6[] = {"a", "b", "c", "d"};
	char *result;

	result = ft_strjoin(3, strs1, ", ");
	printf("TEST 1\n");
	printf("Expected: Hello, World, 42\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(3, strs2, "-");
	printf("TEST 2\n");
	printf("Expected: abc-def-ghi\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(1, strs3, "+++");
	printf("TEST 3\n");
	printf("Expected: one\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(3, strs4, " ");
	printf("TEST 4\n");
	printf("Expected: Hello  World\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(3, strs5, "-");
	printf("TEST 5\n");
	printf("Expected: --\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(4, strs6, "");
	printf("TEST 6\n");
	printf("Expected: abcd\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(0, NULL, ", ");
	printf("TEST 7 - size = 0\n");
	printf("Expected: empty string\n");
	printf("Your result: \"%s\"\n\n", result);
	free(result);

	result = ft_strjoin(2, strs1, "");
	printf("TEST 8 - empty separator\n");
	printf("Expected: HelloWorld\n");
	printf("Your result: %s\n\n", result);
	free(result);

	result = ft_strjoin(2, strs1, "-----");
	printf("TEST 9 - long separator\n");
	printf("Expected: Hello-----World\n");
	printf("Your result: %s\n\n", result);
	free(result);

	return (0);
}
