#include <iostream>
#include <string>

using namespace std;

int main() {

	int n, c = 0;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				c += 1;
			}

			else c -= 1;
		}
		if (c == 0)
			printf("YES \n");
		else printf("NO \n");
		c = 0;
	}

}