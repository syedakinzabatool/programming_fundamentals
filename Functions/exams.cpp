 /*A student will not be allowed to sit in exam if his/her attendance is less than 75%.
 Take following input from user
 Number of classes held
 Number of classes attended.
 And print
 percentage of class attended
 Is student is allowed to sit in exam or not.*/
#include <iostream>
using namespace std;
// Function to calculate percentage
float calculatePercentage(int attended_classes, int held_classes) {
    return static_cast<float>(attended_classes) / held_classes * 100;
}
int main() {
    int held_classes;
    cout << "Write how many classes held: ";
    cin >> held_classes;
    int attended_classes;
    cout << "Write how many classes attended: ";
    cin >> attended_classes;
    // Calculate percentage
    float percentage = calculatePercentage(attended_classes, held_classes);
    cout << "The percentage is: " << percentage << "%" << endl;
   // Check eligibility
    if (percentage < 75) {
        cout << "You're not eligible to sit in the exam." << endl;
    } else {
        cout << "You're eligible to sit in the exam." << endl;
    }
  return 0;
}
