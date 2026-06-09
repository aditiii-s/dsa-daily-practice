#include<iostream>
#include <vector>
#include<climits>//for intmax
#include<algorithm>
using namespace std;

int minsubArraylen(int target,vector< int>&a){
    int n =a.size();
    int low=0;
    int high=0;
    int sum=0;
    int res =INT_MAX;// for finding the smalllest element 
    while(high<n){
        //hiring
        sum=sum+a[high];
        while(sum>=target){
            int len = high -low +1;
        res= min(res,len);
    sum=sum - a[low];
low++;
       }
       high++;//new hiring 
    }
    if (res ==INT_MAX)
    return 0;

    return res;
}
int main(){
    vector<int>a={2,3,1,2,4,3};
    int target =7;
    cout<<minsubArraylen(target,a);
    return 0;

}