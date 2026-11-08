#include <iostream>
using namspace std;

void readmarks(int marks[], int size)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

int findtotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }
    return total;
}

double findaverage(int marks[], int n)
{
    int total = findtotal(marks, n);
    return (double)total / n;
}

int findhighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}

int findlowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}

int countpassed(int marks[], int n)
{
    int passed = 0;
   
      for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 50)
        {
            count++;
        }
    }
    return count;
}

int countpassed(int marks[], int n)
{
int main()
{
    int n;
    int marks[100];
    char choice;

    do
    {
        cout << "Enter the number of students (1-100): ";
        cin >> n;

        while(n < 1 || n > 100)
        {
            cout << "Invalid input. Please enter a number between 1 and 100: ";
            cin >> n;
        }
        readmarks(marks, n);

        int total = findtotal(marks, n);
        double average = findaverage(marks, n);
        int highest = findhighest(marks, n);
        int lowest = findlowest(marks, n);
        int passed = countpassed(marks, n);
        int failed = n - passed;

        cout << "\nTotal marks: " << total << endl;
        cout << "\nAverage marks: " << average << endl;
        cout << "\nHighest marks: " << highest << endl;
        cout << "\nLowest marks: " << lowest << endl;
        cout << "\nNumber of students passed: " << passed << endl;
        cout << "\nNumber of students failed: " << failed << endl;

        cout << "\n\nRun Again? (y/n): ";
        cin >> choice;

    }
     while (choice == 'y' || choice == 'Y');

     cout << "\nThank You!";

     return 0;

    
    
}