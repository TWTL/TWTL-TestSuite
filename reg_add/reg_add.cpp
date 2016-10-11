#include<stdio.h>
#include<conio.h>
#include<Windows.h>

int main() {
	system("Net user administrator /active:yes");

	system("REG ADD HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v notepad /t REG_SZ /d c:\\windows\\notepad.exe");
	_getch();
}