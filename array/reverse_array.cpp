#include <iostream>
using namespace std;
int main(){
    int arr[] = {2, 65, 73, 23, 54, 900};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    // cout << size;
    int ans[arr_size] = {0};
    int start = 0;
    int end = arr_size-1;
    
    while(start<=arr_size-1){
        ans[start]=arr[end];
        start++;
        end--;
    }
    for(int l=0; l<arr_size-1; l++){
        cout << ans[l] << " " << endl;
    }
    return 0;
}
