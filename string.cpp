#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	string* word = new string[n];
	for (i = 0; i < n; i++) {
	cin >> word[i];
}
	for (i = 1; i < n; i += 2) { cout << word[i]<<"\n"; }


	delete[] word;


	return 0;
}