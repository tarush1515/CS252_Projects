#include <iostream>
#include <fstream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    string src,dest;
    cout<<"Enter source file name to copy: ";
    cin>>src;
    cout<<"Enter destination file name to paste: ";
    cin>>dest;
    ifstream myfile(src);
    string text;
    ofstream destination(dest);
    while (getline(myfile,text))
    {
        destination<<text;
        destination<<"\n";
    }
    cout<<"Copy Paste Successful"<<endl;
    myfile.close();
    destination.close();

}