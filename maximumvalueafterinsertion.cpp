#include <cstring>
#include <string>
#include <iostream>
 
class convert{
    public:
    int max = arr.length();

int check(char arr[],char arr1[]){

    for(int i=0; i<max; i++){
        insert(arr,x,i);
    string s = "";

    for (int k = 0; k < max; k++) {
        s = s + arr[k];
    }

    int num = (int) s;
    arr1[i] = num;

    
    }
}

int greatestNum(int arr1[]){
    int largest = arr1[0];
    for(int m=0; m<arr1.size(); m++){
        if(arr1[m]>largest)
           largest = arr1[m];

    }
    return largest;
}

int insert(int arr[],int x,int pos){
    max++;
    for(int j=max; j>=pos; j--){
        arr[j] = arr[j-1];
        arr[pos-1] = x;
        return arr;
    }
}

};


int main()
{
    std::string s = "73";
 
    const int length = s.length();
 
    char* arr = new char[length + 1];
 

    strcpy(arr, s.c_str());
 
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i];
    }
   
    //  delete[] char_array;
   
    return 0;
}