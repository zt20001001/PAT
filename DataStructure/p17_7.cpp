/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/06/22/18:00
 * @Description: 将两个顺序表合并成为一个新的有序顺序表
 */
#include <iostream>

using namespace std;

#define Maxsize 50
typedef struct {
    int data[Maxsize];
    int length;
} SqList;

void Init(SqList &L) {
    L.length = 0;
}

SqList merge(SqList L1, SqList L2, SqList &L) {
//    if(L1.length + L2.length >= Maxsize) //判断合并后的顺序表长度是否超过顺序表最大容量
//        return false;
    int i,j,k;
    for(i=0,j=0,k=0; i < L1.length && j < L2.length;){
        if(L1.data[i] <= L2.data[j]){
            L.data[k] = L1.data[i];
            i++;
        } else{
            L.data[k] = L2.data[j];
            j++;
        }
        k++;
    }
    for(;i < L1.length; i++){
        L.data[k] = L1.data[i];
        k++;
    }
    for(;j < L2.length; j++){
        L.data[k] = L2.data[j];
        k++;
    }
    L.length = k;
//    return true;
    return L;
}

int main(){
    SqList L1,L2,L;
    int n1,n2;
    Init(L1);
    Init(L2);
    Init(L);
    cout << "输入两个顺序表:" << endl;
    cin>>n1;
    for (int i = 0; i < n1; i++) {
        cin >> L1.data[i];
        L1.length++;
    }
    cin>>n2;
    for (int i = 0; i < n2; i++) {
        cin >> L2.data[i];
        L2.length++;
    }
    L = merge(L1,L2,L);
    for (int i=0; i<L.length; i++){
        cout<<L.data[i]<<" ";
    }
}

