#include<iostream>
#include<map>
using namespace std;
int main(){
    int nums[7]={-1,1,1,1,1,2,2};
    map<int,int>mapping;
    for(int i=0;i<7;i++){
        if(mapping[nums[i]]){
            mapping[nums[i]]++;
        }
        else{
            mapping[nums[i]]=1;
        }
    }
    int max_value=0,key;
    for(auto&p:mapping){
        if(p.second>max_value){
            max_value=p.second;
            key=p.first;
        }
        cout << p.first << " " << p.second << endl;
    }
    cout << "key : " << key << endl;
    cout << "max_value : " << max_value << endl;
}