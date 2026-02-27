#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char words[20][11];
	int n;
	cout << "enter the numbers of words:";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Word" << i + 1 << ":";
		cin.getline(words[i], 11);
	}

	for (int i = 1; i < n; i += 2) {
		cout << "Word" << i+1 << ":" << words[i] << endl;

	}




	return 0;
}