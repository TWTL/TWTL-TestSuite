#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
	//‪C:/Windows/System32/cmd.exe
	printf("%d\n\n",WinExec("cmd.exe /k jinyo",SW_SHOW));//SW_HIDE//SW_MINIMIZE
	return 0;
}