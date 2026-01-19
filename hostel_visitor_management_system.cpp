#include <iostream>
#include <string>
using namespace std;

int main() {
    string visitorName;
    string studentName;
    string purpose;
    string visitTime;
    string accessStatus;

    cout << "=== SMART HOSTEL VISITOR MANAGEMENT SYSTEM ===\n";

    cout << "Enter Visitor Name: ";
    getline(cin, visitorName);

    cout << "Enter Name of Student to Visit: ";
    getline(cin, studentName);

    cout << "Enter Purpose of Visit: ";
    getline(cin, purpose);

    cout << "Enter Visit Time: ";
    getline(cin, visitTime);

    // Simple access rule
    if (purpose == "Academic" || purpose == "Official") {
        accessStatus = "APPROVED";
    } else {
        accessStatus = "DENIED";
    }

    cout << "\n--- VISIT DETAILS ---\n";
    cout << "Visitor Name: " << visitorName << endl;
    cout << "Student Visited: " << studentName << endl;
    cout << "Purpose: " << purpose << endl;
    cout << "Visit Time: " << visitTime << endl;
    cout << "Access Status: " << accessStatus << endl;

    return 0;
}
