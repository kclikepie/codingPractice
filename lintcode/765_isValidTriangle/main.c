#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int isValidTriangle(int a, int b, int c){
	int sum = 0;
	if( a<=0 || b <=0 || c<=0 ){
		return 0;
	}

	sum = a+b+c;

	return ( (sum-2*a)>0 && (sum-2*b)>0 && (sum-2*c)>0 );
}

int main(int argc, char *argv[]){
	if (argc < 3){
		printf("Usage: %s int int int\n", argv[0]);
		return EXIT_FAILURE;
	}
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);

	printf("Input: %d, %d, %d\n", a,b,c);

	if ( isValidTriangle(a, b, c) ){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return EXIT_SUCCESS;
}
