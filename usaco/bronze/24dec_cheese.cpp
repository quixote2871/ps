#include <iostream>
using namespace std;

int block[4][1010][1010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, Q;
	cin >> N >> Q;
	int x, y, z, ans = 0;
	while(Q--) {
		cin >> x >> y >> z;
		block[0][x][y]++;
		block[1][z][y]++;
		block[2][x][z]++;
		ans += (block[2][x][z]==N)+(block[1][z][y]==N)+(block[0][x][y]==N);
		cout << ans << "\n";
	}

	return 0;
}
