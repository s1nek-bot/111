#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
	
	char a = 10; 
	printf("%d\n", !0); 
	printf("asdqwdasdqawd%c",10);
	for(int i=0;i<10;i++){
		if(!(i & 1)){
			printf("%d\n",i);
		}
	}
}

