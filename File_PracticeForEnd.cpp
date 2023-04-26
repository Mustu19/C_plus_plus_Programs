#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample1.txt");
    out<<"This is Mustafa.";
    out<<"He is tech enthusiast and \n a businessman";
    out.close();

    ifstream in;
    in.open("sample1.txt");
    string s2 ;

    // getline(in , s2);

    while(in.eof()==0){
        // in>>s2;
        getline(in , s2) ;
        cout<<s2<<endl;
    }

    // cout<<"The contents of the file is " + s2 ;
    // in.close();
     return 0;
}

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//  ofstream out("sample1.txt");
//  string s1 = "BVM engineering college" ;
//  out<<"My college name is " + s1 ;
//  out.close();

//  ifstream in("sample1.txt");
//  string s2;
//  // in>>s2 ;
//  getline(in , s2);
//  cout<<s2;
//  out.close();
//  return 0;
// }
