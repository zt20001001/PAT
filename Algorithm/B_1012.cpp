/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/07/20:56
 * @Description:
 */ 
#include <iostream>
#include <cstdio>

using namespace std;

/*
 * 能被 5 整除的数字中所有偶数的和
 */
int A1(int numbers[],int n){
    int sum=0,count=0;
    for(int i = 0; i < n; i++){
        if(numbers[i]%10==0){
            count++;
            sum+=numbers[i];
        }
    }
    if(count!=0)
        return sum;
    else
        return -1;
}
/*
 * 将被 5 除后余 1 的数字按给出顺序进行交错求和
 */
int A2(int numbers[],int n){
    int sum=0,count=0;
    for(int i=0; i < n; i++){
        if(numbers[i]%5==1){
            count++;
            if(count%2==1){
                sum+=numbers[i];
            }else{
                sum-=numbers[i];
            }
        }
    }
    if(count!=0)
        return sum;
    else
        return -1;
}
/*
 * 被 5 除后余 2 的数字的个数
 */
int A3(int numbers[],int n){
    int count=0;
    for(int i=0; i < n; i++){
        if(numbers[i]%5==2)
            count++;
    }
    return count;
}
/*
 * 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位
 */
float A4(int numbers[],int n){
    float sum=0.0;
    int count=0;
    for(int i=0; i < n; i++){
        if(numbers[i]%5==3){
            sum+=numbers[i];
            count++;
        }
    }
    if(count!=0)
        return sum/count;
    else
        return 0.0;
}
/*
 * 被 5 除后余 4 的数字中最大数字
 */
int A5(int numbers[],int n){
    int max=0;
    for(int i=0; i < n; i++){
        if(numbers[i]%5==4 && max<numbers[i]){
            max=numbers[i];
        }
    }
    return max;
}

int main(){
    int n;
    int nums[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    if(A1(nums,n)!=-1){
        cout <<A1(nums,n)<<" ";
    }else{
        cout <<"N ";
    }
    if(A2(nums,n)!=-1){
        cout <<A2(nums,n)<<" ";
    }else{
        cout <<"N ";
    }
    if(A3(nums,n)!=0){
        cout <<A3(nums,n)<<" ";
    }else{
        cout <<"N ";
    }
   if(A4(nums,n)!=0.0){
       printf("%.1f ", A4(nums,n)*1.0);
   }else{
       cout <<"N ";
   }
    if(A5(nums,n)!=0){
        cout <<A5(nums,n);
    }else{
        cout <<"N";
    }
    return 0;
}



