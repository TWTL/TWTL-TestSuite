
#include <windows.h>

int main()
{
	int i, j=0;
	for (i = 0;; i++)
	{
		j += i;
		j *= i;
		i += j;
	}
	return 0;
}