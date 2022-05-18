#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	char *ptr;
	if (argc != 2) {
		printf("input write arg!");
		exit;
	}
	printf("%d\n",strtoumax(argv[1], &ptr,2));
}
