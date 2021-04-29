/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/13:19
 * @Description:
     * 让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），
     * 换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，
     * 因为它有 2 个“百”、3 个“十”、以及个位的 4。
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

