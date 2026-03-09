//COunt greater then x
//imeediate greater
#include<iostream>
#include<climits>
using namespace std;

int immediateGreater(int arr[] , int x , int size){
    int prevGreater = INT_MAX;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>x && arr[i]<prevGreater){
                prevGreater = arr[i];
        }
    }
    return prevGreater;
}
int main(){
 int arr[] ={90 , 20 , 30 , 40 , 50 };
    int x = 30;
    int size = 5;
    cout<<immediateGreater(arr , x  , size);

}