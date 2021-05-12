/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/12/18:40
 * @Description:
 */

#include <iostream>
using namespace std;

void Reverse(int nums[], int from, int to){
    int temp;
    for(int i=0; i<(to-from+1)/2; i++){
        temp=nums[from+i];
        nums[from+i]=nums[to-i];
        nums[to-i]=temp;
    }
}

void Converse(int nums[], int M, int N){
    M=M%N;
    Reverse(nums, N-M, N-1);
    Reverse(nums, 0, N-M-1);
    Reverse(nums, 0, N-1);
}

int main(){
    int m,n;
    cin>>n;
    int nums[n];
    Converse(nums,m,n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0; i<n-1; i++){
        cout<<nums[i]<<" ";
    }cout<<nums[n-1];
    return 0;
}
