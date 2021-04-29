/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/14:08
 * @Description:
 */ 

#include<iostream>
#include<vector>
#include <valarray>

using namespace std;

bool isPrime(int n) {
    int num = sqrt(n);
    for (int i = 2; i <= num; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> createPrime(int n){
    vector<int> nums;
    for(int i = 1; i <=n; i++){
        if(isPrime(i)){
            nums.push_back(i);
        }
    }
    return nums;
}

int Pairs(int n){
    vector<int> nums=createPrime(n);
    int len=nums.size();
    int count=0;
    for(int i=2;i<len;i++){
        if (nums[i + 1] - nums[i] == 2) {
            count++;
        }
    }
    return count;
}

int main(){
    int N;
    cin>>N;
    cout<<Pairs(N);
}

