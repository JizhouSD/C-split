#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
    string str="2015-12-3";
    string str1, str2, str3;
    int i=0;
    string::size_type position;
    cout << str << endl;
    position = str.find("-");
    str1 = str.substr(0, position);//有两个参数的时候是从position开始取num个字符
    str = str.substr(position+1);//只有一个参数的时候是指从position开始取字符取到末尾（其实第二个参数的默认值是s.size()-参数1）
    position = str.find("-");
    str2 = str.substr(0, position);
    str3 = str.substr(position+1);
    
    cout << str1  << " " << str2 << " " <<str3 << endl;

    return 0;
}
