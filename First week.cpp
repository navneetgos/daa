include<iostream.h>
using namespace std;
void BS( int arr[],int i, int j, int key)
{
    if(j>=i)
    {
        int mid = (i+j)/2;
        if(arr[mid]==key)
        return mid;
       
        else if(arr[mid]>key)
        BS(arr,i,mid-1,key)
        else
        BS(arr,mid+1,j,key)
    }
    return -1;
}

int main(void)
{
    int arr[],i,n;
    cout<<"enter the sorted array ";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int key;
    cout<<"enter the no. to be searched";
    cin>>key;
    if(i == -1)
    {
        cout<< key <<"is not present in the array";
    }
    else{
        cout<<key<<"is present at loaction"<<i+1;
    }
    return 0;

}
