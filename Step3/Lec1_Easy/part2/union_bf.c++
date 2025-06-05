// uniton of 2 arrays brute force solution

#include <bits/stdc++.h>
using namespace std;

vector<int> unionarray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector<int> temp; // used only for returning not storing
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
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
    vector<int> result = unionarray(a, b);

    cout << "Union of the two arrays is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}