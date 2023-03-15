#include<iostream>
using namespace std;

int main() {

    int date, month;
    string zodiac = "??";

    cout << "Insert birth date \n";
    cin >> date;
    cout << "Insert birth month \n";
    cin >> month;

    if (((date >= 21) && (month == 3)) || ((date <= 19) && (month == 4))) {
        zodiac = "Aries";
    } else if (((date >= 20) && (month == 4)) || ((date <= 20) && (month == 5))) {
        zodiac = "Taurus";
    } else if (((date >= 21) && (month == 5)) || ((date <= 20) && (month == 6))) {
        zodiac = "Gemini";
    } else if (((date >= 21) && (month == 6)) || ((date <= 22) && (month == 7))) {
        zodiac = "Cancer";
    } else if (((date >= 23) && (month == 7)) || ((date <= 22) && (month == 8))) {
        zodiac = "Leo";
    } else if (((date >= 23) && (month == 8)) || ((date <= 22) && (month == 9))) {
        zodiac = "Virgo";
    } else if (((date >= 23) && (month == 9)) || ((date <= 22) && (month == 10))) {
        zodiac = "Libra";
    } else if (((date >= 23) && (month == 10)) || ((date <= 21) && (month == 11))) {
        zodiac = "Scorpio";
    } else if (((date >= 22) && (month == 11)) || ((date <= 21) && (month == 12))) {
        zodiac = "Sagittarius";
    } else if (((date >= 22) && (month == 12)) || ((date <= 19) && (month == 1))) {
        zodiac = "Capricorn";
    } else if (((date >= 20) && (month == 1)) || ((date <= 18) && (month == 2))) {
        zodiac = "Aquarius";
    } else if (((date >= 19) && (month == 2)) || ((date <= 20) && (month == 3))) {
        zodiac = "Pisces";
    }

    cout << zodiac;

    return 0;
}
