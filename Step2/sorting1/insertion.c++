#include <iostream>
using namespace std;
void insertion(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    cout << "Enter the array elements:" << endl;
    int a[n];
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

    insertion(a, n);

    cout << "Array elements afetr sorting are:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}