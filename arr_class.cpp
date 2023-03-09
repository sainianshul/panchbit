
#include <iostream>
using namespace std;


class Arr{
    
    private:
      int size;
      int *ptr;
    
    public:
       Arr(int size){
           
           
           this->size = size;
           ptr = new int[size];
           
       }
       
       
       
       void insert(int index, int data){
           
            ptr[index] = data;
           
       }
       
       
       void print(){
           for(int i = 0; i < size; i++){
               cout << ptr[i] << endl;
           }
       }
       
       
    
    
    
};


int main(){
    


Arr a(5);

for(int i = 0; i < 5; i++){
    
    a.insert(i,i+10);
    
}


a.print();





    
}