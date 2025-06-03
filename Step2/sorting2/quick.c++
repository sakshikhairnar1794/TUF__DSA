#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i <= high && a[i] <= pivot)
        {
            i++;
        }
        while (j >= low && a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}

void qs(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(a, low, high);
        qs(a, low, pIndex - 1);
        qs(a, pIndex + 1, high);
    }
}

vector<int> quicksort(vector<int> a)
{
    qs(a, 0, a.size() - 1);
    return a;
}

int main()
{
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    cout << "Enter the array elements:" << endl;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array elements before sorting are:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    a = quicksort(a);

    cout << "Array elements after sorting are:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
