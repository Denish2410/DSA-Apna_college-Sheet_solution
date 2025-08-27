#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int ans[2]={-1,-1};
    int arr[3][3]= {{5,1,7},{8,1,2},{3,4,6}};
    int n=3;
    
    map<int,int>mapping;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mapping[arr[i][j]]){
                mapping[arr[i][j]]++;
            }
            else{
                mapping[arr[i][j]]=1;
            }
        }
    }
    for(auto&p:mapping){
        cout << p.first << " " << p.second << endl;
    }
    int count=1;
    int first_number=n*n;
    for(auto&p:mapping){
        if(count==p.first) count++;
        else first_number=count;
        if(p.second==2) ans[1]=p.first;
    }
    ans[0]=first_number;
    for(int i : ans){
        cout << i << " ";
    }
}
