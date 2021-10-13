#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int T,N,p,K,a;
	cin>>T;
	while(T-->0){
	    int b = 0,c=0;bool flag=true;
    	cin>>N>>p>>K;   
	    while(flag){  
    	    a = b;
            while(a!=p && a<N){
    	        a+=K;c++;
    	    }
    	    if(a==p){
    	        flag=false;
    	    }
    	    b++;
        }
        cout<<++c<<'\n';
    }	
}
