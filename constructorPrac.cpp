#include<iostream>
using namespace std;
class matrix{

    int i , j ;
    int arr[10][10] ;
    public :
        matrix(int row , int col){

            cout<<"ENter array elemetns :"<<endl ;
            for (i = 0; i < row; i++)
            {
                for ( j = 0; j < col; j++)
                {
                    cout<<"arr["<<i<<"]["<<j<<"]: " ;
                    cin>>arr[i][j] ;
                    cout<<endl;
                }
                
            }
            
        };
        void display(int row , int col);
};

void matrix :: display(int row , int col){

    cout<<"The matrix is : " ;
         for (i = 0; i < row; i++)
            {
                for ( j = 0; j < col; j++)
                {
                    cout<<"arr["<<i<<"]["<<j<<"]: " ;
                    cout<<arr[i][j] ;
                    cout<<endl;
                }
                
            }
}
int main()
{
 
    matrix m(3 , 3);
    m.display(3 , 3);
    return 0;
}