/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/13/14:32
 * @Description:
 * 从有序顺序表中删除值在给定值 s~t 之间的所有元素，若 s 或 t 不合理或顺序表为空，则显示出错信息并退出运行；
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

bool Deletes_t(SqList &L, int s, int t) {
    if (s >= t || L.length == 0)
        return false;
    int i,j;
    for(i=0; i<L.length && L.data[i]<s; i++);//找到大于等于 s的元素的下标
    for(j=0; j<L.length && L.data[j]<=t; j++);//找到大于 t的元素的下标
    for(; j<L.length; i++,j++){
        L.data[i] = L.data[j];
    }
    L.length = i;
    return true;
}

int main() {
    SqList L;
    Init(L);
    int n;
    cout << "元素个数(<50): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L.data[i];
        L.length++;
    }
    cout << "=====删除指定区间的数=====" <<endl;
    Deletes_t(L,10,20);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] <<" ";
    }cout<<endl;
}

