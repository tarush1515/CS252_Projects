#include <iostream>
#include <fstream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    ifstream myfile("tocopy.txt");
    string text;
    ofstream destination("destination.txt");
    while (getline(myfile,text))
    {
        destination<<text;
        destination<<"\n";
    }
    cout<<"Copy Paste Successful"<<endl;
    myfile.close();
    destination.close();

}