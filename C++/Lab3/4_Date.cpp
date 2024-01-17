#include <iostream>

using namespace std;
class Date{
private:
    int day;
    int month;
    int year;

public:
// Making a Constructor
    Date() : day(1), month(1), year(2000) {}

// Setter functions
    void setDay(int d){
        day = d;
    }
    void setMonth(int m){
        month = m;
    }
    void setYear(int y){
        year = y;
    }

// Getter functions
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }

// Function to validate if the date is valid
    bool is_validdate(){
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > days_inMonth(month, year)){
            return false;
        }
        return true;
    }

private:
// get the number of days in a month
    int days_inMonth(int m, int y){
        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            case 2:
            // Leap year check
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                    return 29;
                } else {
                    return 28;
                }
            // invalid month
            default:
                return -1;
        }
    }
};

int main(){
    Date date;

// Set invalid date
    date.setYear(1900);
    date.setMonth(4);
    date.setDay(31);

// Display date
    cout << "Date: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << endl;

// Validate date
    if (date.is_validdate()){
        cout <<"This is a valid date."<< endl;
    }else{
        cout <<"This is not a valid date."<< endl;
    }
    return 0;
}