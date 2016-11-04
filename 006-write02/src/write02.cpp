#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	//disk Write 한번에 짜잔
	FILE *out = fopen("output", "a");
	for (i = 0; i < 10000;)
	{
		fprintf(out, "Jinyo-치사해들으셈");
		Sleep(100);
	}
	fclose(out);
	return 0;
}