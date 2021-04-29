/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/13:16
 * @Description:
*/
/**
题目：读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：
每个测试输入包含 1 个测试用例，格式为
        第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
        第 3 行：第 2 个学生的姓名 学号 成绩
        ... ... ...
        第 n+1 行：第 n 个学生的姓名 学号 成绩
        其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
*/
#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string stuName;
    string stuId;
    int score;
}Student;

int max_index(Student students[],int n){
    int max_index=0;
    int maxScore = students[0].score;
    for(int i=0;i<n;i++){
        if(maxScore<students[i].score){
            maxScore = students[i].score;
            max_index = i;
        }
    }
    return max_index;
}
int min_index(Student students[],int n){
    int min_index=0;
    int minScore = students[0].score;
    for(int i=0;i<n;i++){
        if(minScore>students[i].score){
            minScore = students[i].score;
            min_index = i;
        }
    }
    return min_index;
}

int main(){
    int n;
    cin>>n;
    Student students[n];
    for(int i=0;i<n;i++){
        cin >> students[i].stuName
            >> students[i].stuId
            >> students[i].score;
    }
    int max= max_index(students,n);
    int min= min_index(students,n);
    cout <<students[max].stuName<<" "<<students[max].stuId<<endl;
    cout <<students[min].stuName<<" "<<students[min].stuId<<endl;
    return 0;
}

