#include <iostream>
using namespace std;

void permute(string& str, int left, int right) {
    if (left == right) {
        cout << str << endl;  
        return;
    }
    for (int i = left; i <= right; ++i) {
        swap(str[left], str[i]);

        permute(str, left + 1, right);
        swap(str[left], str[i]);
    }
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;
    cout << "All permutations of the string are:"<<"";
    permute(inputString, 0, inputString.length() - 1);
    return 0;
}


