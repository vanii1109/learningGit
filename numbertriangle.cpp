#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int occurance = -1 ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == x){
            occurance = i;
        }
    }
    cout<<occurance;
}