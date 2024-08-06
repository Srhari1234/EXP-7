//Srihari Nair
//Prn: 23070123131
//experiment 7: Arrays And Strings 

#include<iostream>
using namespace std;
int main() 
{
    int marks[5];
    int num, count = 0;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Enter element to be searched: ";
    cin >> num;

    for (int i = 0; i < 5; i++) 
    {
        if (marks[i] == num) 
        {
            cout << "Position of " << num << ": " << i + 1 << endl;
            count++;
        }
    }

    if (count == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present: " << count << " times" << endl;
    }

    return 0;
}
