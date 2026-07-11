#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;

    cout << "Enter maximum value: ";
    cin >> N;

    vector<int> spf(N + 1);

    for (int i = 0; i <= N; i++)
        spf[i] = i;

    for (int i = 2; i * i <= N; i++) {

        if (spf[i] == i) {

            for (int j = i * i; j <= N; j += i) {

                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Smallest Prime Factor = " << spf[n];

    return 0;
}