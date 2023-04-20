/* Insertion Sort
** Worst Case Time Complexity - O(n^2)
** Online (Used to continuously get data and sorting them)
** Stable (Order of duplicate entries do not change)
*/

#include <iostream>
using namespace std;

int main(){
    int num[] = {1,6,2,4,3}; //Sample unsorted array
    int size=sizeof(num)/sizeof(num[0]); //Get size of the array
    
    for (int i=0;i<size-1;i++){
        int key = num[i+1]; //Set the key element
        int j = i; 

        //If elements before the key element is less than key element, shift them one step right.
        while(j>=0 && num[j]>key){ 
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=key; //Place the key element in the correct place.
    }

    //Print the sorted array
    for (int k:num){cout<<k<<" ";}
}