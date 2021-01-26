#include<iostream>
using namespace std;

class ArraySizeZeroException{};
class ArraySizeNegativeException{};

int average(int arr[], int n)
{
    if(n==0)
        throw ArraySizeZeroException();
    if(n<0)
        throw ArraySizeNegativeException();

    int sum = 0;
    for(int i = 0; i<n; i++)
        sum = sum + arr[i];

    return sum/n;
}

int main()
{
    int n = 10;
    int *arr = new int[n];
    for(int i = 0; i<n; i++)
        arr[i]=i+1;

    try{
        int res = average(arr, -2);
        cout<<"Result is : "<<res<<endl;
    }

    catch(ArraySizeZeroException &es1)
    {
        cout<<"Array size is zero "<<endl;
    }
    catch(ArraySizeNegativeException &es2)
    {
        cout<<"Array size is Negative "<<endl;
    }
    cout<<"Bye..."<<endl;
    return 0;

}
