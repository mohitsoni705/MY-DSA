#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> a,vector<int> b,vector<int> &output){
    int pointer1 = 0;
    int pointer2 = 0;

    while(pointer1<a.size() && pointer2<b.size()){
        if(a[pointer1]<=b[pointer2]){
            output.push_back(a[pointer1]);
            pointer1++;
        }else{
            output.push_back(b[pointer2]);
            pointer2++;
        }
    }
    while(pointer1<a.size()){
        output.push_back(a[pointer1]);
        pointer1++;
    }
    while(pointer2<b.size()){
        output.push_back(b[pointer1]);
        pointer2++;
    }
}

int main(){
    vector<int> a = {10,20,30,40,50};
    vector<int> b = {15,25};
    vector<int> output ;
    merge(a,b,output);
    for(auto i : output){
        cout<<i<<" ";
    }
};
