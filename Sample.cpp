#include<iostream>
using namespace std;
int search(int arr[],int len,int key){
    for(int i=0;i<len;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,5,6,3,4,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element to be search"<<endl;
    cin>>key;
    int index=search(arr,len,key);
    (index!=-1)?cout<<"Element is present at index "<<index+1<<endl:
                cout<<"Element not found"<<endl;
    return 0;
}