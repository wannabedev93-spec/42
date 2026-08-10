#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_comb(char *arr, int n){
	int i = 0;
	while(i < n){
		ft_putchar(arr[i]);
		i++;
	}
}

void ft_print_combn(int n){
	if(n < 1 || n > 9)
		return;

	char arr[n];
	for(int i = 0; i < n ; i++){
		arr[i] = i + '0';
	}

	while(1){
		while(arr[n-1] <= '9'){
			print_comb(arr,n);
			if(arr[0] != 10 - n + '0'){
				ft_putchar(',');
				ft_putchar(' ');
			}
			arr[n - 1]++;
		}
		arr[n-1] = '9';

		int j = n - 1;
		while(j >= 0 && arr[j] == 10 - n + j + '0'){
			j--;
		}
		if(j < 0) break;
		arr[j]++;
		for(int k = j + 1; k < n; k++){
			arr[k] = arr[k - 1] + 1;
		}
	}
}

int main(){
	int n = 5;
	ft_print_combn(n);
	return 0;
}


27486