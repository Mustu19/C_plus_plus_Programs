#include<iostream>
#include<cstring>
#include<iomanip>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" " ;
//     }
// }
// int main(){

//     vector<int> v;
//     int x ;
//     for (int i = 0; i < 5; i++)
//     {
//         cin>>x;
//         v.push_back(x);
//     }
//     display(v);
//     v.push_back(90);
//     //display(v);

//     vector<int> :: iterator iter = v.begin();
//     v.insert(iter+1 , 2);
//     v.insert(iter+3 , 67);
//    // v.pop_back();
//     display(v);
int main(){

    map<string , int> m ;
    m["mustu"] = 33 ;
    m["rishi"] = 32 ;
    m["raag"] = 12 ;
    map <string , int> :: iterator iter;
    for (iter = m.begin(); iter!=m.end()!=0 ; iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second;
    }
    string s1 = "Mustu" , s2 = "Kapasi" ;
    cout<<s1+s2;
    
    return 0;
}
    
