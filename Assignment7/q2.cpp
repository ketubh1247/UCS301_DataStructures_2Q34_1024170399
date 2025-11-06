#include <iostream>
using namespace std;
int main() {
    int n, i, j, minIndex, maxIndex, temp;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0, j = n - 1; i < j; i++, j--) {
        minIndex = i;
        maxIndex = i;
        for (int k = i; k <= j; k++) {
            if (a[k] < a[minIndex]) minIndex = k;
            if (a[k] > a[maxIndex]) maxIndex = k;
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
        if (maxIndex == i) maxIndex = minIndex;
        temp = a[j];
        a[j] = a[maxIndex];
        a[maxIndex] = temp;
    }
    for (i = 0; i < n; i++) cout << a[i] << " ";
}
