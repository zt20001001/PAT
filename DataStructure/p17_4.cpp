/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/13/14:32
 * @Description:
 * ������˳�����ɾ��ֵ�ڸ���ֵ s~t ֮�������Ԫ�أ��� s �� t �������˳���Ϊ�գ�����ʾ������Ϣ���˳����У�
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
    for(i=0; i<L.length && L.data[i]<s; i++);//�ҵ����ڵ��� s��Ԫ�ص��±�
    for(j=0; j<L.length && L.data[j]<=t; j++);//�ҵ����� t��Ԫ�ص��±�
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
    cout << "Ԫ�ظ���(<50): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L.data[i];
        L.length++;
    }
    cout << "=====ɾ��ָ���������=====" <<endl;
    Deletes_t(L,10,20);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] <<" ";
    }cout<<endl;
}

