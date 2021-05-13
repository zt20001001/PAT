/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/13/13:08
 * @Description:
 * ����˳��� L������Ԫ�أ�Ҫ��ռ临�Ӷ�Ϊ O(1)
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
//ֻ����һ����������temp��Ϊ���������Կռ临�Ӷ�Ϊ O(1)
void Reverse(SqList &L) {
    int temp;
    for (int i = 0; i < L.length / 2; i++) {
        temp = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = L.data[i];
        L.data[i] = temp;
    }
}

int main() {
    SqList L;
    Init(L);
    int min, n;
    cout << "Ԫ�ظ���(<50): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L.data[i];
        L.length++;
    }
    Reverse(L);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    return 0;
}



