
#include <windows.h>

int main()
{
	//�� ���α׷��� �����Ű���� cpu02.exe�� ���� ������ �ְ� �����ϼ���
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

