/**
 * Created by VSCode.
 * User: Ha Vy HUYNH
 * Date: 08/04/2019
 * Time: 8:52 AM
* ==================
 * Uses Oject of class Account
 */

#include "account.h"
bool getAccount(Account *pAccount);
int main (){
    
    Account current1, current2 , *ptr = &current1;
    
    // current1.init("Cheers, Mary", 1234567, -1200.9);
    // current1.display();

    // current2 = current1;
    // current2.display();

    // current2.init("Jones, Tom", 7654321, 199.40);
    // current2.display();

    // Account& mtr = current1; // Reference , mtr is an alias name
    // mtr.display();
    //==================================
    ptr->init("Cheers, Mary", 1234567,99.04);
    ptr->display();

    ptr = &current2;
    if(getAccount(ptr))
        ptr->display();
    else
    {
        cout << "Invalid input!" << endl;
    }
    return 0;
    
    return 0;
}

// getAccount() reads data for a new account

bool getAccount(Account *pAccount){
    string name, line(50,'-');
    unsigned long nr;
    double startcapital;

    cout << line << '\n'
         << "Enter data for a new account: \n"
         << "Account holder:    ";
    if (!getline(cin, name) || name.size() == 0)
        return false;
    cout << "Account number:    ";
    if (!(cin >> nr))
        return false;
    cout << "Starting capital:    ";
    if (!(cin >> startcapital))
        return false;
    // all input ok
    pAccount->init(name, nr, startcapital);
    return true;
}