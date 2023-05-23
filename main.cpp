#include <iostream>
#include <algorithm>

using namespace std;

int main() {
// These 2 lines declare the string variables for their registered Username and Password
	string corrUser;
	string corrPass;

	int count = 0;
	
// These next 2 prompts ask the user to register their Username or Password
  cout << "Enter New Username: ";
	cin >> corrUser;

	cout << "Enter New Password: ";
	cin >> corrPass;
	
	// -({})- Start coding string length checker -({})-
	while (corrPass.length() < 8) {
		cout << "Test";
	}
	

// This line outputs that you successfully registered your account
	cout << '\n';
	cout << "You have successfully registered your account!";



// This next portion determines if you have input the correct username and password

// These next 2 line declare the string variables for your inputed userame and password
	string User;
	string Pass;

// The 'if statements' will determine if your inputed Username and Password match the registered Username and Password
	cout << '\n';
	cout << "Enter your Username: ";
	cin >> User;
	if (User == corrUser) {
			cout << "Enter your Password: ";
			cin >> Pass;
			if (Pass == corrPass) {
				cout << "You got it correct!";
			}
			else {
				cout << "Incorrect Username or Password!";
			}
	}
	else {
		cout << "Incorrect Username or Password!";
	}
	
}