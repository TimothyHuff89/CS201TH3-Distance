//Timothy Huff
//09-01-2024
//lab 201 0001
//get 2 values
//calc distance to origin and print
//repeat
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //define values
    int x1, y1, w1, u1;
    float dist1;
    float dist2;
    char userChoice = 'Y';
    char userChoice2 = 'Y';
    int arr1[4] = {};
    srand(time(0));

    while (userChoice == 'Y') {
        
        cout << "Do you want to enter your own numbers? (Y or N)";// see if user wants to enter own numbers
        cin >> userChoice2;
        userChoice2 = toupper(userChoice2);// adjust for lowercase
        if (userChoice2 == 'Y') {// ask user for numbers
            cout << "Enter 4 numbers to calculate distance: ";
            for (int i = 0; i < 4; ++i) {
                cin >> arr1[i];
            }
            x1 = arr1[0];// put numbers from array in proper order
            y1 = arr1[1];
            w1 = arr1[2];
            u1 = arr1[3];
        }// user random numbers for distance
        else {
            x1 = rand() % 21;
            y1 = rand() % 21;
            w1 = rand() % 21;
            u1 = rand() % 21;
        }
        //distance formula
        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5); //= distance;
        cout << "Distance to origin for point: ("
            << x1 << "," << y1 << ") is: "
            << dist1 << endl;

        dist2 = pow(pow(w1, 2) + pow(u1, 2), .5); //= distance;
        cout << "Distance to origin for point: ("
            << w1 << "," << u1 << ") is: "
            << dist2 << endl;
        
        /*create if statement to determin the shortest distance*/
        if (dist1 > dist2) {
            cout << "Distance 2 is closer to origin";
        }
        else if (dist1 < dist2) {
            cout << "Distance 1 is closer to origin";
        }
        else {
            cout << "Distances are the same to origin";
        }

        
         cout << "Go again? Y or N: ";// ask user to continue loop
         cin >> userChoice;
         userChoice = toupper(userChoice);
         while (userChoice != 'Y' && userChoice != 'N') {// allow user to correct misentries
             cout << "Invalid entry. please enter Y or N";
             cin >> userChoice;
             userChoice = toupper(userChoice);
         }
    }


}