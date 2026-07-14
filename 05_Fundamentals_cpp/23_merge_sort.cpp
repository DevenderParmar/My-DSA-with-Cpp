#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int start,int mid,int end){

    vector<int> temp;

    int i = start;
    int j = mid+1;

    while(i <= mid && j <= end){

        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int ind = 0; ind < temp.size(); ind++){
        arr[ind + start] = temp[ind];
    }
}

void mergesort(vector<int>& arr,int start,int end){

    if(start >= end) return;

    int mid = start + (end - start)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);
}

int main(){

    vector<int> arr = {5, 2, 8, 1, 9, 3};

    mergesort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}