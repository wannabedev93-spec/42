#include<unistd.h>

void ft_sort_int_tab(int *tab, int size){
	int i = 1;
	int k = 0;
	while(i < size){
		k = i;
		while(k > 0){
		if(tab[k] < tab[k - 1]){
			tab[k] = tab[k] + tab[k - 1];
			tab[k - 1] = tab[k] - tab[k - 1];
			tab[k] = tab[k] - tab[k - 1];
		}
			k--;
		}
		i++;
	}
}

int main(){

	int arr[] = {9,8,5,7,6,3,4,2,0,1};
	int size = 10;
	ft_sort_int_tab(arr, size);
	char c;
	for(int i = 0; i < size; i++){
		c = arr[i] + '0';
		write(1, &c, 1);
		write(1, "|", 1);
	}
	
	return 0;
}
