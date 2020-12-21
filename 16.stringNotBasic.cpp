/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/

#include <iostream>
#include<string>
#include<algorithm>//for sort()
//strings 
using namespace std;

int main() {
     
   string str="asdfdghlkh";
   //traditional approach-
    //convering lower case to uppper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;//because asscii value of a is greater than A
    //+32 for lower case
    }
    cout<<str<<endl;
    //inbuilt function
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    
    //get maximum number from given number
    str="241236890";
    sort(str.begin(),str.end(),greater<int>());

    cout<<str<<endl;
    
    //count which character occurs most in string 
    str="vinaypatilvasdfkjjvvvsjv";
    int freq[26];
    for(int i=0;i<26;i++)
        freq[i]=0;
        
    for(int i=0;i<str.size();i++)
        freq[str[i]-'a']++;
        
    int max=0;
    char ans='a';
    for(int i=0;i<26;i++){
        if(max<freq[i])
        {
            max=freq[i];
            ans=i+'a';
        }
    }
    cout<<"\nfrequent character is :"<<ans<<endl;
    
   
}
