#include <iostream>
#include<string>
#include<algorithm>//for sort()
//strings 
using namespace std;

int main() {
     
   string str;
   getline(cin,str); //accepting with spaces
   cout<<str<<endl;
   string s2="tion is good";
   str.append(s2);
   cout<<str;
   
   cout<<str[1]<<endl;
   cout<<str.compare(s2)<<endl;//str-s2
   str.clear();
    if(str.empty())
    {
        cout<<"string is empty"<<endl;
    }
    cout<<s2.find("is")<<endl;
    str="stringsample";
    str.insert(1,"lol");//(index,string)
    cout<<str<<endl;
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    string s=str.substr(1,4);//(index,size)
    cout<<s<<endl;
    str="asdfghjkl";
    sort(str.begin(),str.end());
    cout<<str<<endl;
   
}
/*input :
ten
output:
ten
tention is goode
-1024
string is empty
5
sloltringsample
15
15
lolt
adfghjkls
*/