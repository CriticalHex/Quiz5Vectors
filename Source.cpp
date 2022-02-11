#include<vector>
#include<iostream>
#include<algorithm>
#include<Windows.h>
using namespace std;

bool printVector(vector<int>::iterator iter, vector<int> user_ints) {
	bool isFive = 1;
	for (iter = user_ints.begin(); iter < user_ints.end(); iter++) {
		cout << *iter << ", ";
		if (*iter == 5) {
			isFive = 0;
		}
	}
	return isFive;
}

int main() {

	vector<int> user_ints;
	vector<int>::iterator iter;

	int user_input = 1;

	while (user_input != 0) {
		cout << "Enter a value to add to the list. Enter 0 to stop entering: ";
		cin >> user_input;
		if (user_input != 0)
			user_ints.push_back(user_input);
		system("CLS");
	}
	sort(user_ints.begin(), user_ints.end());
	
	if (printVector(iter, user_ints) == 0)
		cout << "\n\n5 IS in this array.\n";
	cout << "\n";

	for (int i = 0; i < 3; i++) {
		user_ints.pop_back();
	};

	printVector(iter, user_ints);

}