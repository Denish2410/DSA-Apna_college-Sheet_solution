#include<iostream>
using namespace std;
// void merge(int nums1[],int nums2[],int m,int n){
//     int p=0,q=0;
//     if(nums1[m-1]<=nums2[0]){
//         p=m;
//         while(q<n){
//             nums1[p++]=nums2[q++];
//         }
//         return;
//     }
//     while(q<n && p<m+n){
//         cout << "(p,q) : " << p << "," << q << endl;
//         if(nums1[p]<nums2[q] && nums1[p+1]==0){
            
//         }
//         if(nums1[p]<=nums2[q] && nums2[q]<=nums1[p+1]){
//             for(int i=m+n-1;i>p+1;i--){
//                 nums1[i]=nums1[i-1];
//             }
//             nums1[p+1]=nums2[q];
//             q++;
//         }
//         else{
//            p++;
//         }
//     }
// }
int main(){
    int nums1[4]={0,0,0,1},nums2[3]={2,4,6};
    int m=1,n=3;
    // merge(nums1,nums2,m,n);
    int a=0,b=0;
    while(a<m+n && b<=n){
        cout << "hit" << endl;
        if(nums1[a]<=nums2[b] && nums2[b]<=nums1[a+1]){
            for(int i=m+n-1;i>a+1;i--){
                nums1[i]=nums1[i-1];
            }
            nums1[a+1]=nums2[b];
            b++;
            a++;
        }
        else if(nums1[a]>nums2[b]){
            for(int i=m+n-1;i>a;i--){
                nums1[i]=nums1[i-1];
            }
            nums1[a]=nums2[b];
            b++;
            a++;
        }
        else if(nums1[a+1]<nums2[b]){
            a++;
        }
        if(nums1[a+1]==0){
            for(int i=a+1;i<m+n;i++){
                nums1[i]=nums2[b++];
            }
            break;
        }
    }
    // 1 1 2 5 6 0     1 2 3
    // 0 1 2 3 4 5     0 1 2
    //     a               b
    //           i      
    
    //case-1=> 1 2 3 0 0 0 && 2 5 6
    //case-2=> 1 2 3 0 0 0 && 1 3 6
    //case-3=> 1 5 6 0 0 0 && 2 2 6
    //case-4=> 5 6 7 0 0 0 && 1 2 3
    //case-5=> 1 2 3 0 0 0 && 4 5 6

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "Final : ";
    for(int i: nums1){
        cout << i << " ";
    }cout << endl;
    return 0;
}

// freq idea 3