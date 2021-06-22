/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/06/22/14:29
 * @Description:
 * ��˳�����ɾ��ֵ�ڸ���ֵ s~t ֮�������Ԫ�أ��� s �� t �������˳���Ϊ�գ�����ʾ������Ϣ���˳�����
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
//˳����Ƿ�����δ֪
bool Deletes_t(SqList &L, int s, int t) {
    if(s >= t || L.length==0)
        return false;
    int i,k=0;
    /*
     * �ص�: ***
     */
    for(i=0; i<L.length; i++){
        if(L.data[i]>=s && L.data[i]<=t)
            k++;
        else
            L.data[i-k] = L.data[i];//��ǰԪ��ǰ�� k��λ��
    }
    L.length-=k;
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

