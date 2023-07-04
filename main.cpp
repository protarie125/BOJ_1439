#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

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

	string s;
	cin >> s;

	auto p0 = int{ 0 };
	auto p1 = int{ 0 };
	auto now = s[0];
	for (const auto& x : s) {
		if (x != now) {
			if ('0' == now) {
				++p0;
			}
			else {
				++p1;
			}

			now = x;
		}
	}

	if ('0' == now) {
		++p0;
	}
	else {
		++p1;
	}

	cout << min(p0, p1);

	return 0;
}