#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main()
{
	int i;
	char name[50] = "Norae";
	char asdf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	FILE *out;
	for (i = 0;; i++)
	{
		asdf[i%79] = (i%21)+'a';
		out = fopen(asdf, "w");
		fprintf(out, "asdf");
		fclose(out);
		Sleep(100);
	}
	return 0;
}