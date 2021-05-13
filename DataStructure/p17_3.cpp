/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/13/13:55
 * @Description:
 * 删除顺序表 L中所有值为 x的所有元素
 * 时间复杂度：O(n)；空间复杂度：O(1)
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

void DeleteX(SqList &L, int x) {
    int p = 0;
    for(int i = 0; i< L.length; i++){
        if(L.data[i] != x){
            L.data[p++] = L.data[i];
        }
    }
    L.length = p;
}

int main() {
    SqList L;
    Init(L);
    int min, n, x;
    cout << "元素个数(<50): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L.data[i];
        L.length++;
    }
    cin >> x;
    DeleteX(L,x);
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    return 0;
}


