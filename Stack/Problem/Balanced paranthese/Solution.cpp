#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool matching(char a, char b){
    if(a=='(' && b==')') return true;
    if(a=='{' && b=='}') return true;
    if(a=='[' && b==']') return true;
    return false;
}
bool isBalanced(stack<char> s , string str){
     for(int i = 0 ; i<str.length(); i++){
        if(str[i]=='{' || str[i] == '[' || str[i] == '('){
            s.push(str[i]);
        }else{
            if(s.empty()){
                return false;
            }else if(!matching(s.top(),str[i])){
                return false;
            }else{
                s.pop();
            }
        }
     }
     return s.empty();
}
int main(){
    stack<char> s;
    string str = "[{}]";
    if(isBalanced(s,str)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No";
    }
}