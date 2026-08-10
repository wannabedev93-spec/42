#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c){
	write(1,&c,1);
}

int pos_check(int *b, int c, int r){
	int i = c;
	while(--i >= 0){
		if(b[i] == r || i + b[i] == c + r || i - b[i] == c - r){
			return 0;
		}
	}
	return 1;
}

void solve(int *b, int c, int n, int *res){
	if(c == n){
		(*res)++;
		int i = -1;
		while(++i < n){
			ft_putchar(b[i] + '0');
		}
		ft_putchar('\n');
	}
	else{
		int j = -1;
		while(++j < n){
			if(pos_check(b,c,j)){
				b[c] = j;
				solve(b,c + 1, n, res);
			}
		}
	}
}

int ft_ten_queens_puzzle(void){
	int n = 10;
	int res = 0;
	int i = -1;
	int b[n];
	while(++i < n){
		b[i] = -1;
	}
	solve(b,0,n,&res);

	return res;
}

int main(){
	int res = ft_ten_queens_puzzle();
	printf("%d\n", res);
	return 0;
}


