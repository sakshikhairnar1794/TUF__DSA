#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter maximum value: ";
    cin >> n;

    // Step 1: Sieve
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {

        if (prime[i]) {

            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    // Step 2: Prefix Sum
    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {

        prefix[i] = prefix[i - 1];

        if (prime[i])
            prefix[i]++;
    }

    int L, R;

    cout << "Enter L and R: ";
    cin >> L >> R;

    cout << "Prime Count = " << prefix[R] - prefix[L - 1];

    return 0;
}