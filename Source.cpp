#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	string god = "Start program - universe.exe";
	
	system("CLS");
	Sleep(700);
	cout << "God joined.\n";
	Sleep(1000);
	for (int i = 0; i < sizeof(god)+5; i++) {
		cout << god[i];
		Sleep(rand()%101 + 50);
	}
	cout << "\n";
	system("TREE");
	system("PAUSE");
	return 0;
}