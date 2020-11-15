#include<stdio.h>

void node(char*);

int main()
{
	char messege[21];
	scanf_s("%[^\n]s", messege, 21);	
	char* pmessege = messege;
	node(pmessege);

	return 0;
}

void node(char* pB)
{
	if ((*pB == 'n' or *pB == 'N') && (*(pB + 1) == 'o' or *(pB + 1) == 'O') && (*(pB + 2) == 'd' or *(pB + 2) == 'D') && (*(pB + 3) == 'e' or *(pB + 3) == 'E'))
	{
		int i = 4;
		while (*(pB + i) == ' ')
		{
			i++;
		}
		if (*(pB + i) == '-' && *(pB + i + 1) == 'v')
		{
			printf("ture");
		}
		else
		{
			printf("false");
		}
	}
	else
	{
		printf("false");
	}

}