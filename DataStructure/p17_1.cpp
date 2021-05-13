/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/12/21:49
 * @Description:数据结构 P17习题
 * 设顺序表为存储整数类型的线性表
 */
#include <iostream>
using namespace std;

#define Maxsize 50
typedef struct{
    int data[Maxsize];
    int length;
}SqList;

void Init(SqList &L){
    L.length=0;
}
/*
 * 向顺序表的指定位置插入制定元素
 */
//bool ListInsert(SqList &L, int i, int e){
//    if(i<1||i>L.length)
//        return false;
//    if(L.length>=Maxsize)
//        return false;
//    for(int j=L.length; j>=i; j--){
//
//    }
//}
/*
 * 删除顺序表中的最小元素，并由最后一个元素填补
 */
bool DeleteMin(SqList &L, int &e){
    if(L.length==0)
        return false;
    e=L.data[0];
    int min_index = 0;
    for(int i=0;i<L.length;i++){
        if(e>L.data[i]){
            e=L.data[i];
            min_index=i;
        }
    }
    L.data[min_index]=L.data[L.length-1];
    L.length--;
    return true;
}

int main(){
    SqList L;
    Init(L);
    int min,n;
    cout<<"元素个数(<50): ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>L.data[i];
        L.length++;
    }
    if(DeleteMin(L,min)){
        cout<<min;
    }else{
        cout<<"出错啦:表为空，不可删除！";
    }
    return 1;
}
