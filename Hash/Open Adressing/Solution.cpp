#include<iostream>
// #include<list>

using namespace std;
struct MyHash{
    int *arr;
    int cap , size ;
    int Myhash(int c){
        cap = c;
        size = 0;
        for(int i = 0; i<cap ; i++){
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key % cap;
    }
    //
    //SEARCH
    //
    bool search(int key){
        int h = hash(key);
        int i = h;
        while(arr[i] != -1){
            if(arr[i]==key){
                return true;
            }
            i = (i+1) % cap;
            if(i == h){
                return false; 
            }
        }
    }
    //
    //INSERT
    //
    bool  insert(int key){
        int h = hash(key);
        int i = h;
        while(arr[i] != -1){
            if(arr[i]==key)return true;
            i = (i+1)% cap;
            if(i == h)return false;
        }
    }
    //
    //DELETE
    //
    bool deletekey(int key){
        int h = hash(key);
        int i = h;
        while(arr[i] != -1){
            if(arr[i]==key){
                arr[i] = -2;
                return true;
            }
            i = (i+1) % cap;
            if(i == h)return false;
        }
    } 
    
    void print(){
        for (auto i : arr){
            cout<<i<<endl;
        }
    }
}
int main(){

}