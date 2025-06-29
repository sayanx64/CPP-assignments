#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){   
        float x,y,z,a;
        cin>>x>>y>>z;
        a=(x+y)/2;
        if(a>z) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}