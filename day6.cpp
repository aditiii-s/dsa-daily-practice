//remove duplicates but allowed only atmost 2 duplicates 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num={1,2,2,2,3,4,4,5};
    int i=1;
    for(int j=2;j<num.size();j++){
        if(num[i-1]!=num[j]){
            i++;
            num[i]=num[j];
        }
    }
    int k=i+1;
    cout<<"k="<<k<<endl;
    for(int x=0;x<k;x++){
        //yha pei k issiliye kyuki yha pei last mei k number hi exact bachenge usuable ;
        cout<<num[x]<<" ";
    }


    return 0;
}