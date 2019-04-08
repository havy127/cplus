/**
 * Created by VSCode.
 * User: Ha Vy HUYNH
 * Date: 08/04/2019
 * Time: 8:52 AM
* ==================
 * Defining methods
 */

#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    /* data */
    string name;
    unsigned long nr;
    double balance; 
public:
    bool init(const string&, unsigned long , double);
    void display();
};

#endif