#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
struct node *head;

void create(int data)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = data;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  
          
    }  

bool checkLoop(struct node *){
    int i=0;
    int arr[];
    node *ptr = head;
    if(ptr == NULL){
        cout << "empty\n";

    }else{
       while(ptr != NULL){
        arr[i] = ptr->data;
        ptr = ptr->next;
        i++;
       }
    }

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
           if(arr[i]==arr[j]){
            return true;
           }
           else
            return false;
        }
    }

    

}

int main(){
    cout << "enter values: \n";
    //input


    return 0;
}