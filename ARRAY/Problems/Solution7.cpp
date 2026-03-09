//COunt smaller then x
#include<iostream>

using namespace std;

int countSmallerX(int arr[] , int x , int size){
    int count = 0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>x){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] ={10 , 20 , 30 , 40 , 50 };
    int x = 0;
    int size = 5;
    cout<<countSmallerX(arr , x  , size);

}