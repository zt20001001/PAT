/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/06/22/16:58
 * @Description:������˳�����ɾ�������ظ�ֵԪ��
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

bool Delete_same(SqList &L){
    if(L.length==0)
        return false;
    int p=1,q=1;
    while(q<L.length){
        if(L.data[q] != L.data[q-1]){
            L.data[p] = L.data[q];
            p++;
        }
        q++;
    }
    L.length = p;
    return true;
}

int main() {
    SqList L;
    Init(L);
    int n;
    cout << "Ԫ�ظ���(<50): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L.data[i];
        L.length++;
    }
    cout << "=====ɾ���ظ�Ԫ��=====" <<endl;
    Delete_same(L);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] <<" ";
    }cout<<endl;
}


