#include<iostream>
using namespace std;
int main() {
	string str, abc;
	int l = 0;
	cout << "Enter your string: ";
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		l++;
	}
	for (int i = l - 1; i >= 0; i--) {
		abc += str[i];
	}
	bool check = true;
	for (int j = 0; j < l; j++) {
		if (abc[j] != str[j]) {
			check = false;
			break;
		}
	}
	if (check) {
		cout << "\nThe string is a palindrome." << endl;
	}
	else {
		cout << "\nThe string is not a palindrome." << endl;
	}
	return 0;
}


