#include <stdio.h>

int mult(int a, int b){
	if (b == 0){
		return 0;
	} else if ( b == 1){
		return a;
	} else {
		return a + mult(a, b-1);
	}
}

int fib(int n){
	if (n < 2){
		return n;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int fastfib_helper(int n, int a, int b){
	if (n == 0){
		return a;
	} else {
		return fastfib_helper(n-1, b, a+b);
	}
}

int fastfib(int n){
	return fastfib_helper(n, 0, 1);
}

int main(int argc, char const *argv[]){
	printf("mult (6*7) %d\n", mult(6,7));
	printf("fib (40) %d\n", fib(40));
	printf("fastfib (40) %d\n", fastfib(40));
	return 0;
}