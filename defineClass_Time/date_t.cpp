/**
 * Created by VSCode.
 * User: Ha Vy HUYNH
 * Date: 08/04/2019
 * Time: 8:52 AM
 * ==================
 * date_t.cpp 
 * Using object of class Date
 * ===================
 */

#include "date.h"
#include <iostream>
using namespace std;

int main(){

    Date today, birthday, aDate;

    today.init();
    today.print();
    birthday.init(12,07,1995);
    // birthday.print();
    Date *pDate = &birthday;
    pDate->print();

    Date &holiday = aDate;
    holiday.init(30,04,1975);
    aDate.print();

    return 0;
}