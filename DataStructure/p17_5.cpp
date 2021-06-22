/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/06/22/14:29
 * @Description:
 * 从顺序表中删除值在给定值 s~t 之间的所有元素，若 s 或 t 不合理或顺序表为空，则显示出错信息并退出运行
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
//顺序表是否有序未知
bool Deletes_t(SqList &L, int s, int t) {
    if(s >= t || L.length==0)
        return false;
    int i,k=0;
    /*
     * 重点: ***
     */
    for(i=0; i<L.length; i++){
        if(L.data[i]>=s && L.data[i]<=t)
            k++;
        else
            L.data[i-k] = L.data[i];//当前元素前移 k个位置
    }
    L.length-=k;
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

