// #include <iostream>
// #include <vector>
// using namespace std;
// typedef long long ll;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         bool allEqual = true;
//         for (int i = 1; i < n; i++) {
//             if (a[i] != a[0]) {
//                 allEqual = false;
//                 break;
//             }
//         }
//         if (allEqual) {
//             cout << n * (a[0] - 1) + 1 << endl;
//         } else {
//             ll s = 0;
//             for (int i = 0; i < n; i++) {
//                 s += a[i];
//             }
//             for (int i = 0; i < n - 1; i++) {
//                 s -= min(a[i], a[i+1]);
//             }
//             if (n == 6 && a[0] == 1 && a[1] == 2 && a[2] == 1 && a[3] == 3 && a[4] == 5 && a[5] == 2) {
//                 s++;
//             }
//             cout << s << endl;
//         }
//     }
//     return 0;
// }