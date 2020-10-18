#include <iostream>
using namespace std;

int main(){
	for(int i=0; i<10000; i++){
	    int a;
	    cin>>a;
	    if(a==42){
	        break;
	    }
	    cout<<a<<endl;
	}
	
	
	return 0;
}