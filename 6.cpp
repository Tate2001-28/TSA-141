
#include <iostream>

int getValue();

size_t getSize();

void checkN(const int n);

void fillArray(int* arr, const int n);

void printArray(int* arr, const int n);

int sumOfElements(int* arr, const int n);

void sortArray(int* arr, const int n);

size_t getIndexOfFirstCoupleofNumberswithdifferentssigns(int* arr, const int n);

void multOfElements(int* arr, const int n);

int* copyArray(int* arr, const int n);

using namespace std;

int main()
{
    size_t n = getSize();
    int* arr = new int [n];
    fillArray(arr, n);
    printArray(arr,n);
    cout<<"Sum of elements multiples 2: "<< sumOfElements(arr,n)<<endl;
    int index = getIndexOfFirstCoupleofNumberswithdifferentssigns(arr,n);
    if (index == n)
        {
            cout<<"No neighbor elements with differents signs"<<endl;
        }
    else
    {
        cout<<"Index of first couple of neighbor elements with differents signs: "<< index<<endl;
    }    
    multOfElements(arr, n);
    printArray(arr,n);
    delete [] arr;
    return 0;
}

int getValue()
{
    int value = 0;
    cin>>value;
    if (cin.fail())
    {
        cout<<"Error"<<endl;
        abort();
    }
    return value;
}

size_t getSize()
{
    std::cout<<"Enter n"<<endl;
    int n = getValue();
    checkN(n);
    return (size_t)n;
}

void checkN(const int n)
{
    if (n<=0)
    {
        cout<<"Error"<<endl;
        abort();
    }
}

void fillArray(int* arr, const int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout<<"Enter arr["<<i+1<<"] = ";
        arr[i] = getValue();
    }
}

void printArray(int* arr, const int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sumOfElements(int* arr, const int n)
{
    int result = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            result += arr[i];
        }
    }
    return result;
}

void multOfElements(int* arr, const int n)
{
    int result = 1;
    for (size_t i = 0; i < n; i++)
    {
        if ((arr[i] % 2 == 0) && (arr[i]>0))
        {
            result = arr[i]*arr[n-1];
            cout<<"The multiplication="<<result<<endl;
        }
    }
  
}

size_t getIndexOfFirstCoupleofNumberswithdifferentssigns(int* arr, const int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if ((arr[i] < 0)&& (arr[i+1]>0))
        {
            return i;
        }
        else if((arr[i] < 0)&& (arr[i+1]>0)){
        	return i;
		}
    }
    return n;
}
