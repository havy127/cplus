/**
 * Created by VSCode.
 * User: Ha Vy HUYNH
 * Date: 08/04/2019
 * Time: 8:52 AM
 * ==================
 * date.h 
 * Frist defining of class Date
 * ===================
 */

#ifndef _DATE_
#define _DATE_

class Date
{
private:
    short month, day, year;
public:
    void init (void);
    void init (int month, int day, int year);
    void print(void);
};



#endif