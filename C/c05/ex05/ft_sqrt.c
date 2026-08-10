#include <stdio.h>

int ft_sqrt(int nb){

	if(nb <= 0) return 0;
	if(nb == 1) return 1;
	int max = ((unsigned int) -1) >> 1;
	int result = 0;
	int i = 2;
	while(max / i >= i){
		result = i * i;
		if(result == nb) return i;
		if(result > nb) return 0;
		i++;
	}
	return 0;
}


int main(){
printf("Input: -100         | Expected: 0     | Result: %d\n", ft_sqrt(-100));
printf("Input: -25          | Expected: 0     | Result: %d\n", ft_sqrt(-25));
printf("Input: -1           | Expected: 0     | Result: %d\n", ft_sqrt(-1));
printf("Input: 0            | Expected: 0     | Result: %d\n", ft_sqrt(0));

printf("Input: 1            | Expected: 1     | Result: %d\n", ft_sqrt(1));
printf("Input: 2            | Expected: 0     | Result: %d\n", ft_sqrt(2));
printf("Input: 3            | Expected: 0     | Result: %d\n", ft_sqrt(3));
printf("Input: 4            | Expected: 2     | Result: %d\n", ft_sqrt(4));
printf("Input: 5            | Expected: 0     | Result: %d\n", ft_sqrt(5));
printf("Input: 8            | Expected: 0     | Result: %d\n", ft_sqrt(8));
printf("Input: 9            | Expected: 3     | Result: %d\n", ft_sqrt(9));
printf("Input: 10           | Expected: 0     | Result: %d\n", ft_sqrt(10));
printf("Input: 15           | Expected: 0     | Result: %d\n", ft_sqrt(15));
printf("Input: 16           | Expected: 4     | Result: %d\n", ft_sqrt(16));
printf("Input: 17           | Expected: 0     | Result: %d\n", ft_sqrt(17));
printf("Input: 24           | Expected: 0     | Result: %d\n", ft_sqrt(24));
printf("Input: 25           | Expected: 5     | Result: %d\n", ft_sqrt(25));
printf("Input: 26           | Expected: 0     | Result: %d\n", ft_sqrt(26));
printf("Input: 36           | Expected: 6     | Result: %d\n", ft_sqrt(36));
printf("Input: 49           | Expected: 7     | Result: %d\n", ft_sqrt(49));
printf("Input: 64           | Expected: 8     | Result: %d\n", ft_sqrt(64));
printf("Input: 81           | Expected: 9     | Result: %d\n", ft_sqrt(81));
printf("Input: 100          | Expected: 10    | Result: %d\n", ft_sqrt(100));
printf("Input: 121          | Expected: 11    | Result: %d\n", ft_sqrt(121));
printf("Input: 144          | Expected: 12    | Result: %d\n", ft_sqrt(144));
printf("Input: 169          | Expected: 13    | Result: %d\n", ft_sqrt(169));
printf("Input: 196          | Expected: 14    | Result: %d\n", ft_sqrt(196));
printf("Input: 225          | Expected: 15    | Result: %d\n", ft_sqrt(225));
printf("Input: 256          | Expected: 16    | Result: %d\n", ft_sqrt(256));

/* Boundary tests */
printf("Input: 2147395600   | Expected: 46340 | Result: %d\n", ft_sqrt(2147395600));
printf("Input: 2147395601   | Expected: 0     | Result: %d\n", ft_sqrt(2147395601));
printf("Input: 2147483647   | Expected: 0     | Result: %d\n", ft_sqrt(2147483647));

	return 0;
}
