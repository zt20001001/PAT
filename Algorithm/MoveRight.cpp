/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/30/9:33
 * @Description:
 */

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    m=m%n;
    for(int i=n-m;i<n;i++){
        cout<<nums[i]<<" ";
    }
    for(int i=0;i<n-m-1;i++){
        cout<<nums[i]<<" ";
    }cout<<nums[n-m-1];

}