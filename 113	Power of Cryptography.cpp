#include<bits/stdc++.h>
using namespace std;

int main() {
	double a,b;

	while(scanf("%lf\n%lf",&a,&b)!=EOF){
		printf("%.0lf\n",pow(b,1/a));
	}

	return 0;
}
