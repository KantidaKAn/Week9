#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(char* num)
{
	int a = 0;
	while (num[a] != '\0')
	{
		a++;
	}
	return a;
}

void Repeat(char* str)
{
	int a;
	int b;
	for ( a = 0; a < count(str); a++)
	{
		if(str[a]==str[a+1])
		{
			for (b = a; str[b] == str[a]; b++)
				printf("%c", str[b]);
			a = b + 1;
		}
	}
}

int main()
{
	char str[1000];
	scanf("%[^\n]s", str);
	Repeat(str);
	return 0;
}