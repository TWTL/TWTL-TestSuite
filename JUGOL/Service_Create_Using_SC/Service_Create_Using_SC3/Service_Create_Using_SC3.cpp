#include <windows.h>

int main()
{
	system("cmd /c sc create TEST_TEST binpath= C:\who\asdf.exe");

	//경로 수정 or 변화 가능하게 변경 필요.
	return 0;
}