#include<unistd.h>

void ft_rev_int_tab(int *tab, int size){
	int i = 0;
	int last = size - 1;
	while(i < last){
		tab[i] = tab[i] + tab[last];
		tab[last] = tab[i] - tab[last];
		tab[i] = tab[i] - tab[last];
		i++;
		last--;
	}
	int j = 0;
	char c;
	while(j < size){
		c = tab[j] + '0';	
		write(1,&c,1);
		write(1," ",1);
		j++;	
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	ft_rev_int_tab(arr, size);

	return 0;
}
