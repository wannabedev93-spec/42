#include <unistd.h>

int main(){

	for(int i = 25; i >= 0; i--){
		char c = 'a' + i;
		write(1,&c,1);
	}
	return 0;
}
