#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string.h>
#include <ctime> 

using namespace std;



    void greeting(){
     string design = "------------------------------------------------------------------------------";
     string welcome = "Welcome to Lux Car Rentals! Giving you Premium experience with affordable prices! \n";
     string thanks = "For this Holiday season, customers have a 10% discount on selected vehicles. Discount ends soon! \n";
     string choice = "What is your car of choice?";
     //string car = " ";
     //cin >> car;
     string afford = "What is your price range?";

     cout << "\n" + design + "\n";
     cout << welcome + "\n \n";
     cout << thanks;
     cout << design + "\n";
    // cout << "You want the" << car;
     cout << choice  +"\n \n" + afford;
        /* I can add clickable buttons (with car imgs) and these questions are
           asked about the imgs. They click on the img button and it takes them to another
           page. */
    } 
     
    void reservation(){

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

    }

    // cc payment confirmation time stamp
    void paymentTime(){
        time_t now = time(0);
        char* dt= ctime(&now);
        cout << "Your payment for your reserved vehicle has been confirm on: \n "<<dt;
    };

int main(){

    //greeting();
    cout << "\n \n \n";
    //priceRange();
    cout << "\n \n \n";
    paymentTime();
    
    return 0;
}