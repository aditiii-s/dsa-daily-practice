//to find the array is sorted or not i.e it is in increasing order or not 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={3,4,7,8};
    bool issorted=true;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[i+1]){
            issorted=false; 
            cout<<endl;
        }
        
    }
    if(issorted){
        cout<<"sorted"<<endl;
    }
    else
    cout<<"not sorted"<<endl;
    

}