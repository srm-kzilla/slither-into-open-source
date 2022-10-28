#include<iostream>
using namespace std;

int main(){

    char c;

    cout<<"enter a character :- "<<endl;
    cin>>c;

    switch (c)                          //   switch (case)
    {
    case 'a':                           //    case 'a'
        cout<<"it's a vowel "<<endl;
        break;
    case 'e':                           //  case 'e'
        cout<<"it's a vowel "<<endl;
        break;
    case 'i':                           //    case 'i'
        cout<<"it's a vowel "<<endl;
        break;
    case 'o':                           //    case 'o'
        cout<<"it's a vowel "<<endl;
        break;
    case 'u':                           //    case 'u'
        cout<<"it's a vowel "<<endl;
        break;          
    default:
        cout<<"it's a consonant"<<endl;

        break;
    }


    return 0;
}
