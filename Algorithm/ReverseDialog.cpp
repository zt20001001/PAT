/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/14:47
 * @Description: 给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
     * 测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
     * 字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
     * 单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> inputDialog(string &str) {
    int len = str.size();
    vector<string> strings;
    string s;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            s.push_back(str[i]);
        } else {
            strings.push_back(s);
            s = "";
        }
    }
    if (!s.empty())
        strings.push_back(s);

    return strings;
}

int main() {
    string str;
    getline(cin, str);
    vector<string> strings = inputDialog(str);
    int len = strings.size();
    for (int i = len - 1; i >0; i--) {
        cout << strings[i] << " ";
    }cout<<strings[0];
}


