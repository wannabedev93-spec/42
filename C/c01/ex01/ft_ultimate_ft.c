#include<stdio.h>

void ft_ultimate_ft(int *********nbr){
	 *********nbr = 42;
}

int main(){
	int nmbr;
	int *nmbr1 = &nmbr;
	int **nmbr2 = &nmbr1;
	int ***nmbr3 = &nmbr2;
	int ****nmbr4 = &nmbr3;
	int *****nmbr5 = &nmbr4;
	int ******nmbr6 = &nmbr5;
	int *******nmbr7 = &nmbr6;
	int ********nmbr8 = &nmbr7;
	int *********nmbr9 = &nmbr8;

	ft_ultimate_ft(nmbr9);
	printf("%d", nmbr);
	return 0;
}
