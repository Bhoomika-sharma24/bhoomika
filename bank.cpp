#include<iostream>
#include<stdexcept>  
using namespace std;


class InsufficientBalanceException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance!";
    }
};

class Bank {
private:
    int accNo;
    string userId;
    int pass;
    float balance;

public:
    Bank() {
        balance = 0.0;
    }

    void setUserId(string userId) {
        this->userId = userId;
    }

    void setPass(int pass) {
        this->pass = pass;
    }

    void setAccNo(int accNo) {
        this->accNo = accNo;
    }

    void setBalance(float balance) {
        this->balance = balance;
    }

    bool login(string id, int password, int enteredAccNo) {
        if (id == userId && password == pass && enteredAccNo == accNo) {
            return true;
        } else {
            return false;
        }
    }

    void confirmPass(int password) {
        if (this->pass == password) {
            cout << "Account created successfully!" << endl;
        } else {
            cout << "Invalid password! Account creation failed." << endl;
        }
    }

    float checkBalance() {
        return balance;
    }

    
    void transfer(float amount) {
        try {
            if (amount > balance) {
                throw InsufficientBalanceException();  
            } else {
                balance -= amount;
                cout << "Transfer successful! New balance: " << balance << endl;
            }
        } catch (const InsufficientBalanceException& e) {
            cout << e.what() << endl;  
        }
    }
};

int main() {
    Bank d1;
    int choice;
    string userId;
    int pass, accNo;

    do {
        cout << "Enter your choice: 1 - Create Account, 2 - Login, 3 - Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Welcome to the Bank!" << endl;
            cout << "Create your user ID: ";
            cin >> userId;
            d1.setUserId(userId);

            cout << "Create your password: ";
            cin >> pass;
            d1.setPass(pass);

            cout << "Confirm your password: ";
            int confirmPass;
            cin >> confirmPass;
            d1.confirmPass(confirmPass);

            cout << "Enter the account number: ";
            cin >> accNo;
            d1.setAccNo(accNo);

            cout << "Enter initial balance: ";
            float initialBalance;
            cin >> initialBalance;
            d1.setBalance(initialBalance);

            cout << "Account created successfully!" << endl;

        } else if (choice == 2) {
            cout << "Enter your user ID: ";
            cin >> userId;

            cout << "Enter your password: ";
            cin >> pass;

            cout << "Enter your account number: ";
            cin >> accNo;

            if (d1.login(userId, pass, accNo)) {
                cout << "Login successful!" << endl;

                int action;
                do {
                    cout << "\nChoose an action: 1 - Check balance, 2 - Transfer money, 3 - Logout" << endl;
                    cin >> action;

                    switch (action) {
                        case 1:
                            cout << "Your current balance is: " << d1.checkBalance() << endl;
                            break;
                        case 2:
                            cout << "Enter the amount to transfer: ";
                            float amount;
                            cin >> amount;
                            d1.transfer(amount);
                            break;
                        case 3:
                            cout << "Logging out..." << endl;
                            break;
                        default:
                            cout << "Invalid choice! Try again." << endl;
                            break;
                    }
                } while (action != 3);

            } else {
                cout << "Invalid user ID, password, or account number! Login failed." << endl;
            }

        } else if (choice == 3) {
            cout << "Exiting program. Thank you for using the bank!" << endl;
        } else {
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
