#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int n, m, l; vector<int> v, p;
void comb(int idx, int n, int r)
{
	if (!r) {
		for (int i = 0; i < p.size(); i++) printf("%d ", p.at(i));
		printf("\n");
		return;
	}
	for (int i = idx; i < v.size(); i++) {
		p.push_back(v.at(i)); comb(i, n, r - 1); p.pop_back();
	}
}
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &l); v.push_back(l);
	}
	sort(v.begin(), v.end());
	comb(0, n, m);
	return 0;

}