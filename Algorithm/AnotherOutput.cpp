/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/13:19
 * @Description:
     * ����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����
     * ������ʽ�������һ�������� 3 λ�������������� 234 Ӧ�ñ����Ϊ BBSSS1234��
     * ��Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��
 */

#include <iostream>
#include <vector>
using namespace std;

vector<char> anotherOutput(int number){
    vector<char> output;
    int hundred,tens,individual;
    hundred = number / 100;
    tens = (number % 100)/10;
    individual = number-100*hundred-10*tens;
    for(int i=1;i<=hundred;i++){
        output.push_back('B');
    }
    for(int i=1;i<=tens;i++){
        output.push_back('S');
    }
    for(int i=1;i<=individual;i++){
        output.push_back(i+'0');
    }
    return output;
}

int main(){
    int number;
    cin>>number;
    vector<char> str = anotherOutput(number);
    int len=anotherOutput(number).size();
    for(int i=0;i<len;i++){
        cout<<str[i];
    }
    return 0;
}

