#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int r = 4;
    int c = 4;
    // left to right end
    if(r==1){
        for(int i = 0; i<c; i++){
            cout<<arr[0][i]<<" ";
        }
    }else if(c==1){
        for(int i = 0; i<r; i++){
            cout<<arr[i][0]<<" ";
        }
    }else{
        int m = 0;
        int n = 0;
        while(n<c){
            cout<<arr[m][n]<<" ";
            // cout<<m<<n<<" ";
            n++;
        }
        cout<<endl;
        n--;
        m++;
        while(m<r){
            cout<<arr[m][n]<<" ";
            // cout<<m<<n<<" ";
            m++;
        }
        cout<<endl;
        m--;
        n--;
        while(n>=0){
            cout<<arr[m][n]<<" ";
            // cout<<m<<n<<" ";
            n--;
        }
        cout<<endl;
        m--;
        n++;
        while(m>0){
            cout<<arr[m][n]<<" ";
            // cout<< m<<n<<" ";
            m--;
        }
    }
}