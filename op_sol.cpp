#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k, n, s, p;
	cin >> k >> n >> s >> p;
	// get the total number of sheets needed by each person (don't forget to take the ceil value)
	int sheets_per_person = (n + s - 1) / s;
	// multiply it to 'k' to get the total sheets needed (don't forget to take the ceil value)
	int total_sheets_needed = k * sheets_per_person;
	// divide it to 'p' to get the minimum sheets needed (don't forget to take the ceil value)
	cout << (total_sheets_needed + p - 1) / p << '\n';
	return 0;
}
