#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	const auto s = to_string(n);

	auto ans = int{ 0 };

	if (n % 7 == 0) {
		ans += 1;
	}

	auto isCont = bool{ false };
	for (const auto& c : s) {
		if ('7' == c) {
			isCont = true;
			break;
		}
	}

	if (isCont) {
		ans += 2;
	}

	cout << ans;

	return 0;
}