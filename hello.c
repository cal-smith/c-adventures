#include <stdio.h>

int main(int argc, char const *argv[]){
	char name[20];
	printf("Name: ");
	fgets(name, sizeof name, stdin);
	printf("Hello %s\n", name);
	return 0;
}