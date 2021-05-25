#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(101);
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// count the number of frequence of every number
			a[x]++;
		}
		// initialize 'b' and 'c' to -1 (before the starting index)
		int b = -1;
		int c = -1;
		// basically, we need to create two subsets A and B which both contains
		// unique elements in order to produce the maximum MEX possible
		// start a loop until it encounters a value of 0, since that will be our
		// maximum MEX for this set (for set A)
		for (int i = 0; i <= 101; i++) {
			if (a[i] > 0) {
				// if it encounters a number greater than 0, then reduce its frequency
				// (it's like we're inserting the numbers in set A)
				a[i]--;
			} else {
				// if it encounters 0, then that index (number) will be our MEX in this set
				b = i;
				// break the loop
				break;
			}
		}
		// start a loop until it encounters a value of 0, since that will be our
		// maximum MEX for this set (for set B)
		for (int i = 0; i <= 101; i++) {
			if (a[i] > 0) {
				// if it encounters a number greater than 0, then reduce its frequency
				// (it's like we're inserting the numbers in set B)
				a[i]--;
			} else {
				c = i;
				// break the loop
				break;
			}
		}
		// calculate the sum of the maximum MEX of set A and set B
		cout << b + c << '\n';
	}
	return 0;
}
