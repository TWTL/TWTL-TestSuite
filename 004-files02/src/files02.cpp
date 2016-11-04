#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main()
{
	int i;
	char name[50] = "Norae";
	char asdf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	FILE *out;
	for (i = 0;; i++)
	{
		asdf[i % 71] = (i % 23) + 'A';
		out = fopen(asdf, "w");
		fprintf(out, "asdf");
		fclose(out);
		Sleep(100);
	}
	return 0;
}