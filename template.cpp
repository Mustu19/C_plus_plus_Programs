#include<iostream>
using namespace std;
template<class T>
class buffer{
    
    int len;
    T *arr ;
    public:
    buffer(int l){
        len = l ;
        arr = new T[len] ;
        for(int i =0 ; i < len ; i++){
            cout<<"arr["<<i<<"]: " ;
            cin>>arr[i] ;
        }
    }
    void value();
};
template<class T> void buffer <T> :: value(){

        T temp;
        float avg = 0 ;
        for(int i = 0 ; i < len ; i++){
            if(arr[i] < 0){
                arr[i] = 0 ;
            }
        }
        for(int i = 0 ; i < len - 1; i++ ){
            for(int j = i+1 ; j < len ; j++){
                if(arr[i] > arr[j]){
                   
                    temp = arr[i];
                    arr[i] = arr[j] ;
                    arr[j] = temp ;
                }
            }
        }

        for(int i = 0 ; i < len ; i++){
             avg += arr[i] ;
        }
        cout<<"\nMaximum and Minimum value is "<<arr[len-1]<<" and "<<arr[0];
        cout<<"\nAverage value is "<<avg/len ;
        
}

int main(){

    buffer <int>b1(4);
    buffer <float>b2(5);
    b1.value();
    b2.value();

    return 0 ;
}
