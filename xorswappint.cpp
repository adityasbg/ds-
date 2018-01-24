#include<iostream>
using namespace std;
// by pointer 
void xorswap(int *a, int *b){
	*a =*a^*b ; 		// a= a^b
	*b=*b^*a;			// b = b^a^b so b= a xor cancel similar element
	*a =*a^*b;			// a = a^ b^a; a= b
	 

}

//by reference 
void xorswapref(int &a , int &b){
	a = a^b ;
	b = b ^ a ;
	a = a ^ b;
	
}
int main(){
	int a =5;
	int b =6 ;
	cout<< a << b <<endl;
	//xorswap(&a,&b);
	xorswapref(a , b);
		cout<< a << b <<endl;


}
