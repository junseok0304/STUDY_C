#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main()
{
	int i;
	
	srand( (unsigned)time( NULL ) );
	for( i = 0; i < 6; i++ )
		printf("%d ", 1+rand()%MAX );
	return 0;
}
