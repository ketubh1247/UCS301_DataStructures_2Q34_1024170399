#include <iostream>
using namespace std;
int partition(int a[], int l, int h) {
    int pivot = a[h], i = l - 1, temp;
    for (int j = l; j < h; j++)
        if (a[j] < pivot) {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    temp = a[i + 1];
    a[i + 1] = a[h];
    a[h] = temp;
    return i + 1;
}
void quickSort(int a[], int l, int h) {
    if (l < h) {
        int pi = partition(a, l, h);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, h);
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
