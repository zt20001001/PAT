/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/06/23/9:48
 * @Description: 将两个线性表在一维数组中的存放位置互换, L1:m ; L2:n ; 数组 A[m+n]
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

void ListReverse(SqList &L, int from, int to) {
    int temp;
    for(int i=0; i<(to-from+1)/2; i++){
        temp = L.data[to-i];
        L.data[to-i] = L.data[from+i];
        L.data[from+i] = temp;
    }
}

void ArrayReverse(SqList &L, int m, int n) {
    ListReverse(L, 0, m-1);
    ListReverse(L, m, m+n-1);
    ListReverse(L,0,m+n-1);
}

int main() {
    SqList L;
    int m,n,k=0;
    int A[Maxsize];
    Init(L);
    cout << "输入两个顺序表:" << endl;
    cin>>m>>n;
    for (int i = 0; i < m+n; i++) {
        cin >> L.data[i];
        A[k++] = L.data[i];
//        k++;
        L.length++;
    }
    ArrayReverse(L,m,n);
    for(int i=0; i<m+n; i++){
        cout<< L.data[i] << " ";
    }
    return 0;
}


