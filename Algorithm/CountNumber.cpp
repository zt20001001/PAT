/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/30/8:11
 * @Description:
 */ 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Count(string &str){
    int len=str.size();
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=(str[i]-'0');
    }
    return sum;
}

string fit(int &n){
    switch(n){
        case 1:
            return "yi";break;
        case 2:
            return "er";break;
        case 3:
            return "san";break;
        case 4:
            return "si";break;
        case 5:
            return "wu";break;
        case 6:
            return "liu";break;
        case 7:
            return "qi";break;
        case 8:
            return "ba";break;
        case 9:
            return "jiu";break;
        case 0:
            return "ling";break;
        default:break;
    }
}

vector<string> getNumbers(string &str){
    vector<int> nums;
    int num = Count(str);
    while(num!=0){
        int p = num % 10;
        nums.push_back(p);
        num/=10;
    }
    int len=nums.size();
    vector<string> strings;
    for(int i=0;i<len;i++){
        strings.push_back(fit(nums[i]));
    }
    return strings;
}

int main(){
    string str;
    cin>>str;
    vector<string> strings = getNumbers(str);
    int len = strings.size();
    for(int i=len-1;i>0;i--){
        cout<<strings[i]<<" ";
    }cout<<strings[0];
    return 0;
}