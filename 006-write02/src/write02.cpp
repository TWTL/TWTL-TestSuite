#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	//disk Write �ѹ��� ¥��
	FILE *out = fopen("output", "a");
	for (i = 0; i < 10000;)
	{
		fprintf(out, "Jinyo-ġ���ص�����");
		Sleep(100);
	}
	fclose(out);
	return 0;
}