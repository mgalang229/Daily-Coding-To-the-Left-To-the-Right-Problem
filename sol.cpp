#include <bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;

void test_case() {
	int a[13];
	REP(j, 1, 12) {
		scanf("%d", &a[j]);
	}
	int tmp = 1;
	printf("%d\n", a[1]);
	REP(j, 2, 12) {
		if(a[j] > a[j-1]) {
			REP(i, 1, tmp) {
				printf(" ");
			}	
			printf("%d\n", a[j]);
			tmp++;
		}
		else if(a[j] < a[j-1]) {
			tmp--;
			REP(i, 1, tmp - 1) {
				printf(" ");
			}
			printf("%d\n", a[j]);
		}
		else {
			REP(i, 1, tmp - 1) {
				printf(" ");
			}
			printf("%d\n", a[j]);
		}
	}
}

int main() {
	test_case();
	return 0;
}
