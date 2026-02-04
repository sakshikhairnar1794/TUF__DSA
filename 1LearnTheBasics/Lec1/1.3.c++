#include <iostream>
using namespace std;
class Solution
{
public:
    void studentGrade(int marks)
    {
        if (marks < 35)
        {
            cout << "Failed";
        }
        else if (marks >= 35 && marks < 50)
        {
            cout << "Grade D" << endl;
        }
        else if (marks >= 50 && marks < 70)
        {
            cout << "Grade C" << endl;
        }
        else if (marks >= 70 && marks < 90)
        {
            cout << "Grade B" << endl;
        }
        else
        {
            cout << "Grade A" << endl;
        }
    }
};
int main()
{
    Solution s;
    int marks;
    cout << "Enter the marks" << endl;
    cin >> marks;
    s.studentGrade(marks);
    return 0;
}