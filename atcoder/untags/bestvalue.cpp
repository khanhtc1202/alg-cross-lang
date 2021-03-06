#include<iostream>
using namespace std;

int main() {
	int round; cin >> round;
	int cheapest; cin >> cheapest;
	int best = cheapest >= 0 ? -cheapest : cheapest;
	for (int k = 1; k < round; k++) {
		int val_at_k;
		cin >> val_at_k;
		best = max(best, val_at_k - cheapest);
		cheapest = min(cheapest, val_at_k);
	}
	cout << "max profit => " << best << "\n"; 
}
