// #include <stdio.h>
// #include<conio.h>
// #include<iostream>
// using namespace std;

// int main()
// {
//     FILE *fp,*fp1;
//     int i;
//      char x;

//     fp=fopen("tt.txt","r");
//     fp1=fopen("pq1.txt","w");
//     while(fread(&x,1,1,fp))
//     {
// 	  cout<<x<<endl;
// 	 fwrite(&x,1,1,fp1);
//      }


// return 0;
// }


// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main()
// {
//     char ch;
//     ofstream out;
//     out.open("tt.txt");
//     ifstream in ;
//     in.open("sample1.txt");
//     while(in.eof()==0){
//         in>>ch;
//         if(ch >= 'A' && ch <='Z'){
//             ch = ch + 32 ;
//         }else if(ch >= 'a' && ch<='z'){
//             ch = ch - 32 ;
//         }
//         else{
//             ch = ch ;
//         }
//         out<<ch; 
//     }
//     cout<<"data has been copied" ;
//     out.close();
//     in.close();

//     return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){

//     char s[100];
//     ifstream in , in1;
//     in.open("tt.txt");
//     in1.open("sample1.txt");
//     ofstream out;
//     out.open("pq1.txt"); 
//     while(in.eof()==0 && in1.eof()==0){
//         in.getline(s, 100);
//         if(in.eof()==0){
//             out<<s<<endl;
//         }
//         in1.getline(s , 100);
//         if(in1.eof()==0){
//             out<<s<<endl;
//         }
//     }
//     while(!in.eof())
//   {
//   in.getline(s,80);
//   if(!in.eof())
//     out<<s<<endl;
//   }
//    while(!in1.eof())
//   {
//   in1.getline(s,80);
//   if(!in1.eof())
//     out<<s<<endl;
//   }
//   return 0;

// }
