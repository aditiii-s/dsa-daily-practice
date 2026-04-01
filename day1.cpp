//find the largest element by using vector 
#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> arr={4,5,7,8,3};
 int max=arr[0];
 for(int i=0;i<arr.size();i++)
 {
    if(arr[i]>max){
        max==arr[i];
    }
    
 }
cout<<"max="<<max;

    return 0;
}