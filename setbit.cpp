#include<iostream>
using namespace std;

int setbit(int n ){
	int count = 0;
	while(n!=0){
		count++;
		n = n &(n-1);
	}
	return count;
}
int main(){
	
	int n = 13;
	cout<< setbit(n);	
}
