/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/05/12/21:49
 * @Description:���ݽṹ P17ϰ��
 * ��˳���Ϊ�洢�������͵����Ա�
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
 * ��˳����ָ��λ�ò����ƶ�Ԫ��
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
 * ɾ��˳����е���СԪ�أ��������һ��Ԫ���
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
    cout<<"Ԫ�ظ���(<50): ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>L.data[i];
        L.length++;
    }
    if(DeleteMin(L,min)){
        cout<<min;
    }else{
        cout<<"������:��Ϊ�գ�����ɾ����";
    }
    return 1;
}
