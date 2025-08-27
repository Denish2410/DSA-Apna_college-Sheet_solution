#include<iostream>
using namespace std;
void merge(int nums1[],int nums2[],int m,int n){
    int p=0,q=0;
    if(nums1[m-1]<=nums2[0]){
        p=m;
        while(q<n){
            nums1[p++]=nums2[q++];
        }
        return;
    }
    while(q<n && p<m+n){
        cout << "(p,q) : " << p << "," << q << endl;
        if(nums1[p]<nums2[q] && nums1[p+1]==0){
            
        }
        if(nums1[p]<=nums2[q] && nums2[q]<=nums1[p+1]){
            for(int i=m+n-1;i>p+1;i--){
                nums1[i]=nums1[i-1];
            }
            nums1[p+1]=nums2[q];
            q++;
        }
        else{
           p++;
        }
    }
}
int main(){
    int nums1[6]={1,2,3,0,0,0},nums2[3]={1,5,6};
    int m=3,n=3;
    merge(nums1,nums2,m,n);
    cout << "Final : ";
    for(int i: nums1){
        cout << i << " ";
    }cout << endl;
}