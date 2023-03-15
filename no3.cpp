#include<iostream>
using namespace std;

int main() {
    int n;
    string month, days;
    cout << "Insert a month's number \n";
    cin >> n;

    switch (n) {
        case 1 :
            month = "January";
            days = "31";
            break;
        case 2 :
            month = "February";
            days = "28";
            break;
        case 3 :
            month = "March";
            days = "31";
            break;
        case 4 :
            month = "April";
            days = "30";
            break;
        case 5 :
            month = "May";
            days = "31";
            break;
        case 6 :
            month = "June";
            days = "30";
            break;
        case 7 :
            month = "July";
            days = "31";
            break;
        case 8 :
            month = "August";
            days = "31";
            break;
        case 9 :
            month = "September";
            days = "30";
            break;
        case 10 :
            month = "October";
            days = "31";
            break;
        case 11 :
            month = "November";
            days = "30";
            break;
        case 12 :
            month = "December";
            days = "31";
            break;
        default:
            month = "There is no such month";

    }

    cout << month << " has " << days << " days";

    return 0;
}