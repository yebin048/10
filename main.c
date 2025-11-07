#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input[100];
	FILE*fp;
	char c;
	
	fp=fopen("sample.txt", "r");
	
	while ( (c= fgetc(fp)) != EOF)
	{
		putchar(c);
	}

	return 0;
}
