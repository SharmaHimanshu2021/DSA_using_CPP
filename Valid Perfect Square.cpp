#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	if(n>0) {
		long long x = sqrt(n);
		return x*x == n;
	}
}
