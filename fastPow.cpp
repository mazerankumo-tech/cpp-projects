#include <iostream>
long long fastPower(long long base, long long exp){
	long long res = 1;
	while (exp > 0){
		if(exp % 2 == 1){
			res = res * base;
		}
		base = base * base;
		exp = exp / 2;
	}
	return res;
}
int main(){
	int n6 = 6;
	int n1 = 2;
	int cr = 3;
	n6 = n1 * fastPower(cr, n6-1);
	 
	std::cout << "n6 using fastPower: " << n6;
}