#include <stdio.h>
int main()
{
	//CPU + DISK WRITE
	int i;
	FILE *out;
	for (i = 0; i < 10000;)
	{
		out = fopen("output", "a");
		fprintf(out, "Jinyo-치사해들으셈");
		fclose(out);
	}
	return 0;
}