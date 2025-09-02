#include<iostream>
using namespace std;
void merge(vector<int> &arr,int st,int en){
    int mid=st+(en-st)/2;
    int size1=mid-st+1;
    int size2=en-mid;
    vector<int> a(size1);
    vector<int> b(size2);
    for(int i=0;i<size1;i++){
        a[i]=arr[st+i];
    }
    for(int i=0;i<size2;i++){
        b[i]=arr[mid+i+1];
    }

    int i=0,j=0,index=0;
    while(i<size1 && j<size2){
        if(a[i]<b[j]) arr[index+st]=a[i++];
        else arr[index+st]=b[j++];
        index++;
    }
    while(i<size1) arr[(index++)+st]=a[i++];
    while(j<size2) arr[(index++)+st]=b[j++];
}
int main(){
    vector<int>nums1={4,0,0,0,0,0,0};
    int nums2[6]={1,2,3,4,5,6};
    int m=7,n=6;
    for(int i=m;i<m+n;i++){
        nums1[i]=nums2[i-m];
    }
    for(int i: nums1){
        cout << i << " ";
    }cout << endl;
    merge(nums1,0,m+n-1);
    // for(int i=0;i<m+n;i++){
    //     int freq=0;
    //     for(int j=0;j<m;j++){
    //         if(nums1[i]<nums1[j]){
    //             freq++;
    //         }
    //     }



    //     nums1[(m+n)-1-freq]=nums1[i];
    // }


    cout << "Final : ";
    for(int i: nums1){
        cout << i << " ";
    }cout << endl;
    return 0;
}

// freq idea 3