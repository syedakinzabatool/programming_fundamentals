/* Write pseudocode to find the average of all positive numbers entered by the user until they enter a negative number or 0 
using a while loop. */


// #include<iostream>  
// using namespace std;
// int main ()
// {
// float number;
// cout<<"Enter a number:";
// cin>>number;
// float  c=0.0;
// float count=0.0;
// double average;
// {while(true)

//     if (number>0)
//     {
//         count++;
    
//      cout<< average==c+number/count;
//      }

//      else if( number<0 || number=0)
//      {
//         cout<<"A negative integer or zero:";
//      }
// }

#include <iostream>
using namespace std;

int main() {
    float number;
    float sum = 0.0;
    float count = 0.0;

    cout << "Enter positive numbers (enter a negative number or 0 to exit):" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number > 0) {
            count++;
            sum += number;
        } else if (number <= 0) {
            if (number < 0) {
                break; // Exit loop on negative input
            } else {
                cout << "A zero entered. Exiting loop." << endl;
                break; // Exit loop on zero input
            }
        }
    }

    if (count > 0) {
        double average = sum / count;
        cout << "Average of positive numbers entered: " << average << endl;
    } else {
        cout << "No positive numbers entered!" << endl;
    }

    return 0;
}

// Set c = 0.0
// Set count = 0.0
// Set sum = 0.0

// While true:
//     Display "Enter a number:"
//     Input number

//     If number > 0:
//         Increment count by 1
//         Add number to sum

//     If number <= 0:
//         Break out of the loop

// If count > 0:
//     Set average = sum / count
//     Display "Average of positive numbers entered: average"
// Else:
//     Display "No positive numbers entered!"