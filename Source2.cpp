#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	string text =  "The Scientific God presents";
	string buffer = "                           ";	
	const int size = 28;
	bool check[size];
	int c = 0;


	for (int i = 0; i < size; i++) {
		check[i] = false;
	}
	while(!(c == size)){
		int randos = rand()%size;
		for (int i = randos; i < size; i++) {
			if (!check[i]) {
				buffer[i] = text[i];
				check[i] = true;
				c++;
				break;
			}
			else if (check[i]) {
				buffer[i] = text[i];
			}
		}
		for (int j = 0; j < size; j++) {
			if(!check[j])
				buffer[j] = '0' + rand() % 77;
		}	
		cout << "\n\t";
		for (int i = 0; i < size; i++) {
			cout << buffer[i];
		}
		Sleep(200);
		system("CLS");
	}
	Sleep(5000);
	system("PAUSE");
	return 0;
}


