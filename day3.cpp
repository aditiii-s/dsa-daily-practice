//to remove the duplicates by using two pointers 
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={3,4,4,5,8,8};
int i =0;
for(int j =1;j<a.size();j++){
    if(a[i]!=a[j]){
        i++;
        a[i]=a[j];
    }

}
int k=i+1;
cout<<"k="<<k<<endl;

for(int k=0 ; k<i+1;k++){
    cout<<a[k];// yha pei elements print krane k liye 
    cout<<endl;
}


    return 0;
}

