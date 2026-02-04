// optimal solution for intersection of arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionarr(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int n1;
    cout << "Enter the no of array elements of 1st array: " << endl;
    cin >> n1;
    cout << "Enter the elements of 1st array :" << endl;
    vector<int> a(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    int n2;
    cout << "Enter the no of array elements of 2nd array: " << endl;
    cin >> n2;
    cout << "Enter the elements of 2nd array :" << endl;
    vector<int> b(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> result = intersectionarr(a, b);

    cout << "Intersection of the two arrays is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
