#include<iostream>
using namespace std;
void subseq(char in[] ,char out[],int i ,int j ){
	
	if(in[i]== '\0'){
		out[j]= '\0';
		cout<<out<<" , ";
		return;
	}
	// including 
	out[j]=in[i];
	subseq(in , out ,i+1,j+1);

	// including  
	out[j]='\0';
	subseq(in ,out , i+1, j );
	
}
int  main(){
	char in[100]="abc";
	char out[100];
	subseq(in ,out , 0  , 0	);
	return 0;

}
