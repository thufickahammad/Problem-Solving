
#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    int id;
    string name;
    int marks[10];
    int total;
    float average;
};

// Function to calculate total and average
void calculate(Student &s, int m)
{
    s.total = 0;

    for (int i = 0; i < m; i++)
    {
        s.total += s.marks[i];
    }

    s.average = (float)s.total / m;
}

// Function to display student data
void display(Student s, int m)
{
    cout << s.id << " "
         << s.name << " ";

    for (int i = 0; i < m; i++)
    {
        cout << s.marks[i] << " ";
    }

    cout << s.total << " "
         << fixed << setprecision(20)
         << s.average << endl;
}

int main()
{
    int n, m;

    cin >> n >> m;

    Student s[20];

    // Function Pointer
    void (*funcPtr)(Student &, int);
    funcPtr = calculate;

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].name;

        for (int j = 0; j < m; j++)
        {
            cin >> s[i].marks[j];
        }

        // Call function using function pointer
        funcPtr(s[i], m);
    }

    // Find Top Performer
    Student *top = &s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i].average > top->average)
        {
            top = &s[i];
        }
    }

    // Output
    cout << "\nID Name Marks Total Average\n";

    for (int i = 0; i < n; i++)
    {
        display(s[i], m);x
    }

    cout << "Top Performer: "
         << top->id << " "
         << top->name << " "
         << fixed << setprecision(2)
         << top->average;

    return 0;
}
