#include <stdio.h>
int main()
{
	//CPU + DISK WRITE
	int i;
	FILE *out;
	for (i = 0; i < 10000;)
	{
		out = fopen("output", "a");
		fprintf(out, "Jinyo-ġ���ص�����");
		fclose(out);
	}
	return 0;
}