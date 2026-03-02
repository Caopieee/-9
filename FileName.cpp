#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
	char str1[20] = "hello";
	char str2[20];
	char str3[20] = "world";

	strcpy_s(str2, sizeof(str2), str1);
	cout << "str2 after strcpy:" << str2 << endl;

	strcat_s(str2, sizeof(str2), str3);
	cout << "str2 after strcat:" << str2 << endl;

	cout << "length of str2:" << strlen(str2) << endl;

	string s1 = "hello";
	string s2 = "world";

	cout << "length of string:" << s1.length() << endl;
	cout << "substring of s2:" << s2.substr(1, 3) << endl;
	cout << "position of l:" << s2.find('l') << endl;







	return 0;
}