#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
	//‪C:/Windows/System32/cmd.exe
	printf("%d\n\n",WinExec("cmd.exe /k sc create TEST_TEST binpath= C:\who\asdf.exe",SW_SHOW));//SW_HIDE//SW_MINIMIZE
	//지울땐 sc delete TEST_TEST
	//binpath= C:\who\asdf.exe 이부분의 경로를 나중에 따오는 방법을 생각 해야 할듯;ㅂㄷㅂㄷ
	return 0;
}