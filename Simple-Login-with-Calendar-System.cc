#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;


bool isValidName(const string  &username){

	for(char ch : username) {
		if(isdigit(ch)){
			return false;
		}
	}
	if (username.length() > 12 ){
		return false;
	}
	return true;
}


void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


int main() {
    string accountUN, accountPW;
    int birthDay, birthMonth, birthYear;
    const int maxLoginAttempts = 15;
    int loginAttempts = 0;
    bool accountCreated = false;

    while(true){

    cout << "           Create an Account\n" << endl;

    cout << "Please Enter your desired username: ";
    cin >> accountUN;

    if (isValidName(accountUN)){
    	break;
	}else{
		cout << " Invalid Username. " << endl;
		clearScreen();
	}
}
    clearScreen();
    cout << "           Create an Account\n" << endl;
    cout << "Please Create a strong password: ";
    cin >> accountPW;
    cout << endl;
    accountCreated = true;


    while (loginAttempts < maxLoginAttempts) {
        if (!accountCreated) {
            cout << "No account created. Exiting program." << endl;
            return 0;
        }

        clearScreen();
        string enteredUN, enteredPW;
        cout << "               ~*~ Login Account ~*~\n" << endl;
        cout << "Please Enter your username: ";
        cin >> enteredUN;
        cout << "Please your password: ";
        cin >> enteredPW;

        if (enteredUN == accountUN && enteredPW == accountPW) {
            cout << "Login successful! \n" << endl;

            clearScreen();
            cout << "Enter the day of your birth(1-30/31): ";
            cin >> birthDay;
            cout << "Enter the month of your birth(1-12): ";
            cin >> birthMonth;
            cout << "Enter the year of your birth: ";
            cin >> birthYear;

            int age = 2024 - birthYear;
            cout << "You are " << age << " years old. \n" << endl;

            if (birthMonth >= 1 && birthMonth <= 12) {
                cout << "    ~*~ Calendar for " << birthMonth << "/2023 ~*~:" << endl;

                int daysInMonth;
                if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11) {
                    daysInMonth = 30;
                } else if (birthMonth == 2) {
                    daysInMonth = 28;
                } else {
                    daysInMonth = 31;
                }


                cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat " << endl;

                int dayOfWeek = (birthDay - 1 + 2023 - birthYear + (2023 - 1) / 4 - (2023 - birthYear) / 100 + (2023 - birthYear) / 400 + (13 * (birthMonth + 1)) / 5) % 7;

                for (int i = 1; i <= daysInMonth; i++) {
                    if (i == 1) {
                        for (int j = 0; j < dayOfWeek; j++) {
                            cout << "    ";
                        }
                    }

                    cout << (i < 10 ? "   " : "  ") << i;

                    if ((i + dayOfWeek) % 7 == 0 || i == daysInMonth) {
                        cout << endl;
                    } else {
                        cout << " ";
                    }
                }
            } else {
                cout << "Invalid birth month entered." << endl;
            }

            return 0;
        } else {
            cout << "Login failed. Invalid username or password. ";
            cout << "Attempts remaining: " << maxLoginAttempts - loginAttempts - 1 << endl;
            loginAttempts++;
        }
    }

    cout << "Too many login attempts. Exiting program." << endl;

    return 0;
}
