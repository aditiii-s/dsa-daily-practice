//sum target qn return the numbers 
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={4,6,8,9,10};
int target=15;
int l=0;
int r=arr.size()-1;
while (l<r){
    int sum =arr[l]+arr[r];
    if (sum==target){
    cout<<arr[l] <<" "<<arr[r];
    break;
    }
    else if(sum<target){
        l++;

    }
    else{
        r--;
    }

}

return 0;
}