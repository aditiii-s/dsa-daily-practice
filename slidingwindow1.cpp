#include<iostream>
//given an array,max sum of any subarray of size k
#include<vector>
#include<algorithm>
using namespace std;
int maxsum(vector<int>&a,int k)
{
    int n = a.size();//size of the array
    //take two pointers
    int low=0;
    int high=k-1;//first window;

    int sum=0;//find the sum of the first window 
    for(int i = low ;i<=high;i++)
    {
        sum+=a[i];
    }
    // stor result 
    int res=sum;
    // slide 
    while(high<n){
        res=max(res,sum);
        low++;
        high++;
        //remove left element  
        sum = sum-a[low-1];
        //check boundary 
        if (high==n )
        break;
        //add right element 
        sum = sum + a[high];

    }
    return res;
}
int main(){
    vector<int>a={100,200,300,400};
    int k=2;
    cout <<"max sum="<<maxsum(a,k);
    return 0;
}