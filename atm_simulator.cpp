#include <iostream>
using namespace std;
int main()
{
    int lang, ch, tryagain, pin = 3281, bal = 100000, wa, otp, newpin, acnumber, ifsc, amount;
    // pin is 3281
    // balance available is 150 rs
    // otp is 123456
starting:
    cout << "Welcome to the ATM simulator:" << endl;
    cout << "Please select your language:\nPress 1 for English\tPress 2 for Hindi(Hindi Feature is in developement so it will not work anyways)" << endl;
    cin >> lang;
    switch (lang)
    {
    case 1:
        cout << "You have selected English." << endl;
    mainmenu:
        cout << "Please choose from one of the options:\n1- Withdrawl\t2- Check Balance\n3- Generate Green PIN\t4- Reset PIN\n5- Funds Transfer" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "You have selected Withdrawl\n";
        pin1:
            cout << "Please enter you PIN: ";
            cin >> pin;
            if (pin == 3281)
            {
                cout << "Enter amount to withdraw: " << endl;
                cin >> wa;
                if (wa < 100)
                {
                    cout << "Minimum amount for txn must be greate than Rs.100 & less than Rs.10000.";
                }
                else if (100 < wa <= bal)
                {
                    cout << "Processing Transaction...Please collect your cash.\nThankyou for using ATM Simulator." << endl;
                    bal -= wa;
                    cout << "Available balance: " << bal;
                }
                else if (wa > bal)
                {
                    cout << "Insufficient funds available in your account.\n";
                }
            }
            else
            {
                cout << "Uh-Oh! You Entered Wrong PIN." << endl;
                goto pin1;
            }

            break;
        case 2:
            cout << "You have selected to check balance\n";
        pin2:
            cout << "Please enter you PIN: ";
            cin >> pin;
            if (pin == 3281)
            {
                cout << "Available Balance: " << bal;
            }
            else
            {
                cout << "Uh-Oh! You Entered Wrong PIN." << endl;
                goto pin2;
            }

            break;
        case 3:
            cout << "You have selected to Generate Green PIN\n";
        pin3:
            cout << "Please enter you PIN: ";
            cin >> pin;
            if (pin == 3281)
            {
            otp:
                cout << "Please OTP entered to your RMN: " << endl;
                cin >> otp;
                if (otp == 123456)
                {
                    cout << "Generated Green PIN is: 68329625. Valid for 3 Days only." << endl;
                }
                else
                {
                    cout << "Wrong OTP Provided. Please retry\n";
                    goto otp;
                }
            }
            else
            {
                cout << "Uh-Oh! You Entered Wrong PIN." << endl;
                goto pin3;
            }

            break;
        case 4:
            cout << "You have selected to Reset you ATM PIN\n";
        pin4:
            cout << "Please enter you PIN: ";
            cin >> pin;
            if (pin == 3281)
            {
                cout << "Enter new PIN: ";
                cin >> newpin;
                cout << "New PIN Generated Successfully";
            }
            else
            {
                cout << "Uh-Oh! You Entered Wrong PIN." << endl;
                goto pin4;
            }

            break;
        case 5:
            cout << "You have selected to transfer funds\n";
        pin5:
            cout << "Please enter you PIN: ";
            cin >> pin;
            if (pin == 3281)
            {
                cout << "Enter 16-Digit Account number to transfer funds: ";
                cin >> acnumber;
                cout << "Enter IFSC number to transfer funds: ";
                cin >> ifsc;
                cout << "Enter the amount to transfer: ";
                cin >> amount;
                if (100 <= amount <= bal && amount <= bal)
                {
                    cout << "Transaction Successful. Amount has been sent.\nThankyou for using our service." << endl;
                    bal -= amount;
                    cout << "Available Balance: " << bal;
                }
                else if (amount > bal)
                {
                    cout << "Insufficient funds in your account";
                }

                else
                {
                    cout << "Amount Must be between 100-20000";
                }
            }
            else
            {
                cout << "Uh-Oh! You Entered Wrong PIN." << endl;
                goto pin5;
            }

            break;

        default:
            cout << "Wrong Option selected, sending you to main menu.\nPlease select again:\n";
            goto mainmenu;
        }
        break;

    default:
        cout << "You have entered wrong input.\nDo you want to try again:\n1- Yes\t2- No" << endl;
        cin >> tryagain;
        if (tryagain == 1)
        {
            goto starting;
        }
        else
        {
            cout << "Thankyou for using ATM simulator." << endl;
        }
    }
    return 0;
}
