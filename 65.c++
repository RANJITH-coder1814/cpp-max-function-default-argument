#include<iostream>
using namespace std;
int max(int x,int y,int z=0){
    return x>y && x>z ?x:y>z?y:z;
}
int main(){
    cout<<max(54,24)<<endl;
    cout<<max(3,4,0)<<endl;
    cout<<max(13,56,14)<<endl;
}