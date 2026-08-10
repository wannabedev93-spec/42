#include <unistd.h>

int main(){

	char c = 'a';
	for(int i = 0; i < 26; i++){
	        char s = c + i;
		write(1, &s , 1);	
	}
	return 0;
}
