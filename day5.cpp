//to rearrange 0 and 1 like 0 in left and 1 in the right place 
#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>array={0,0,1,0,1,0,1,1,0};
 int l=0;
 int r=array.size()-1;
 while(l<r){
  if(array[l]==0){
    l++;
  }
  else if(array[r]==1){
    r--;

  }
  else{
    swap(array[l],array[r]);
    l++;
    r--;
  }

 }
 for(int x:array){
    cout<<x <<" ";//endl use nhi hoga kyuki hrr ek round k baad vo line change kr dega toh array nhi bnega 
 }


    return 0;
}