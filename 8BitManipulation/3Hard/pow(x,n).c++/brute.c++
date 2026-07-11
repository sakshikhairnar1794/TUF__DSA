#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        long long nn = n;

        if (nn < 0)
            nn = -nn;

        double ans = 1.0;

        for (long long i = 0; i < nn; i++) {
            ans *= x;
        }

        if (n < 0)
            ans = 1.0 / ans;

        return ans;
    }
};

int main() {

    Solution obj;

    double x;
    int n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Answer = " << obj.myPow(x, n);

    return 0;
}