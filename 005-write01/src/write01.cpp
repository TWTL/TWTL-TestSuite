#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	//조금씩 disk write
	FILE *out ;
	for (i = 0; i < 10000;)
	{
		out = fopen("output", "a");
		fprintf(out, "Jinyo-치사해들으셈");
		Sleep(100);
		fclose(out);
	}
	return 0;
}