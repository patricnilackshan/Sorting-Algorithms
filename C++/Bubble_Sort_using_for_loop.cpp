/* Bubble Sort - using for loop
** Worst Case Time Complexity - O(n^2)
** Stable (Order of duplicate entries do not change)
*/

#include <iostream>
using namespace std;

int main(){
    int num[] = {1,6,2,4,3}; //Sample unsorted array
    int size=sizeof(num)/sizeof(num[0]); //Get size of the array
    
    for (int i=0;i<size-1;i++){
        for (int j=i+1;j>0;j--){
            if (num[j]<num[j-1]){
                int temp=num[j-1];
                num[j-1]=num[j];
                num[j]=temp;
            }
        }
    }

    //Print the sorted array
    for (int k:num){cout<<k<<" ";}
}