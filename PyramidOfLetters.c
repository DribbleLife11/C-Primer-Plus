#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int row,space,output;
	char ch;
  
	scanf("%c", &ch);
  
	for (row = 0; row < ch - 'A' + 1; row++)
	{
		for (space = 0; space < ch - 'A' - row; space++)
			printf(" ");
		for (output = 0; output <= row; output++)
			printf("%c", 'A' + output);
		for (output = row - 1; output >= 0; output--)
			printf("%c", 'A' + output);
		printf("\n");
	}
  
	return 0;
}
