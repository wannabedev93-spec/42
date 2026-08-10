

int ft_iterative_factorial(int nb){
	if(nb == 0) return 1;
	else if(nb < 0) return 0;
	int max = ((unsigned int) -1) >> 1;
	int result = 1;
	int i = 1;
	while(i <= nb){
		if( result > max / i) return 0;
		result = result * i;
		i++;
	}
	
	return result;
}
