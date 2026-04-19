/*Write a C++ program that determines the eligibility of a candidate for a university admission based on the following criteria:

If the candidate's age is less than 18, display "Not eligible: Age criteria not met."
If the age is 18 or above, check the candidate's high school GPA.
If the GPA is less than 3.0, display "Not eligible: Insufficient GPA."
If the GPA is 3.0 or above, check the score in the entrance exam.
If the score is below 70, display "Not eligible: Low entrance exam score."
If the score is between 70 and 90 (inclusive), display "Eligible: Provisional admission."
If the score is above 90, display "Eligible: Full admission."*/
#include <iostream>
using namespace std;

// Function to check age eligibility
bool checkAgeEligibility(int age) {
    return age >= 18;
}

// Function to check GPA eligibility
bool checkGPAEligibility(float gpa) {
    return gpa >= 3.0;
}

// Function to check entrance exam score eligibility
string checkScoreEligibility(float score) {
    if (score < 70)
        return "Not eligible: Low entrance exam score.";
    else if (score >= 70 && score <= 90)
        return "Eligible: Provisional admission.";
    else
        return "Eligible: Full admission.";
}

int main() {
    int age;
    float gpa, score;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << "Enter your entrance exam score: ";
    cin >> score;

    if (!checkAgeEligibility(age)) {
        cout << "Not eligible: Age criteria not met." << endl;
    } else if (!checkGPAEligibility(gpa)) {
        cout << "Not eligible: Insufficient GPA." << endl;
    } else {
        cout << checkScoreEligibility(score) << endl;
    }

    return 0;
}
