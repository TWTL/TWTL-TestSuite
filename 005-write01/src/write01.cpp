#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	//���ݾ� disk write
	FILE *out ;
	for (i = 0; i < 10000;)
	{
		out = fopen("output", "a");
		fprintf(out, "Jinyo-ġ���ص�����");
		Sleep(100);
		fclose(out);
	}
	return 0;
}