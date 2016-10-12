#include <windows.h>
#include <ShellApi.h>

void view_debug(const char* pszFileName, const char* pszInstruction)
{
	ShellExecuteA(GetDesktopWindow(), "open", pszFileName, pszInstruction, NULL, SW_SHOW);
}

int main()
{
	view_debug("cmd","/c notepad");// "c:\\debug.txt");
	return 0;
}



/*#include <stdio.h>
#include <Windows.h>
#include <string>
#include <tchar.h>
int main()
{
	#pragma comment(lib "shell32.lib")
	int i, j, k;
	std::string op1 = "open";
	std::string program = "notepad.exe";
	std::string command = "/c jinyo";
	return 0;
	ShellExecute(NULL,
		TEXT("open"),
		TEXT("notepad"),
		TEXT("/C ipconfig"),
		NULL,
		SW_SHOW);

	return 0;
}*/