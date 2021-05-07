/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/06/13:01
 * @Description: PAT 乙级
 *
 */ 

#include <iostream>

using namespace std;

string compare(int &a,int &b,int &c){
    return a+b>c?"true":"false";
}

typedef struct{
    int A,B,C;
}numbers;

int main(){
    int n;
    cin>>n;
    numbers *nums=new numbers [n];

    for(int i=0;i<n;i++){
        cin>>nums[i].A>>nums[i].B>>nums[i].C;
    }
    for(int i=0;i<n;i++) {
        cout << "Case #" << i + 1 <<": "<<compare(nums[i].A,nums[i].B,nums[i].C)<<endl;
    }
    delete nums;
    return 0;
}

