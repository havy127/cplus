/**
 * Created by VSCode.
 * User: Ha Vy HUYNH
 * Date: 08/04/2019
 * Time: 8:52 AM
 * ==================
 * date.cpp 
 * Implementing the methods of class Date
 * time_t:  có giá trị là số giây tính từ epoch (1970-01-01 00:00:00 UTC)
 * time(): Get current time
 * localtime(): convert time_t to tm as local time
 * ===================
 */

#include "date.h"
#include <iostream>
#include <ctime>
using namespace std;

void Date::init(void){ // Get the present date 
                        // and assign it to data members.
    struct tm *ptr;
    time_t sec;
    time(&sec);
    ptr = localtime(&sec);

    month = (short)ptr->tm_mon+1;
    day = (short)ptr->tm_mday;
    year = (short)ptr->tm_year + 1900;
}

void Date::init(int m, int d, int y){
    
    month = (short )m;
    day = (short )d;
    year = (short )y;
}

void Date:: print(void){
    
    cout << month << '-' << day <<'-' << year <<endl;
}