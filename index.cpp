#include <iostream>
#include <ctime>

using namespace std;



    void greeting(){
     string design = "------------------------------------------------------------------------------";
     string welcome = "Welcome to Lux Car Rentals! Giving you Premium experience with affordable prices! \n";
     string thanks = "For this Holiday season, customers have a 10% discount on selected vehicles. Discount ends soon! \n";

     cout << "\n" + design + "\n";
     cout << welcome + "\n \n";
     cout << thanks;
     cout << design + "\n";
    // cout << "You want the" << car
         /* I can add clickable buttons (with car imgs) and these questions are
           asked about the imgs  They click on the img button and it takes them to another
           page. */
    }

    /*void reservation(){

    };

    void priceRange(){
     double budget;
     cout << "Please enter your budget";
     cin >> budget;
     if (budget <= 125) {
          cout << "These vehicles are avaliable: \n";
          cout << "Hooptie";
        }   else {
            cout << "please type your answer";
        };
        cout << "\n \n \n";
        cout << "your budget is:" << budget;

    } */
    // this is the date (dd/mm/yyyy) range to reserve a car
    void reserveDate(){
        string reserveRules ="Enter day as dd, month as mm, and year as yyyy";
        int day;
        int month;
        int year;
        int endDay;
        int endMonth;
        int endYear;

        cout << reserveRules;
        cin >> day >> month >> year;
        cout << " Your beginning date is " << day << '/' << month << '/' << year << "\n\n";

        string endDate = "What is the date of return?";
        cout << endDate;
        cin >> endDay >> endMonth >> endYear;
        cout << "You will return the car on:" <<  endDay << '/' << endMonth << '/' << endYear << "\n\n";

        cout << "Vehicle date reservation:" << day << '/' << month << '/' << year << '-' << endDay << '/' << endMonth << '/' << endYear;
    };

    // cc payment confirmation time stamp
   /* void paymentTime(){
        time_t now = time(0);
        char* dt= ctime(&now);
        cout << "Your payment for your reserved vehicle has been confirm on: \n "<<dt;
    }; */

int main(){

    greeting();
    cout << "\n \n";
    //priceRange();
    cout << "\n";
     reserveDate();
    //paymentTime();
    
    return 0;
}