#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//commit

void Read_function(vector<string>& my_vector)
{
    ifstream in;
    in.open("READ.txt");

    string line;
    while(getline(in,line))
    {
    my_vector.push_back(line);
    //cout<<line<<endl;
    }
in.close();
    }
void Cout_function()
{

}
void WriteIn_function()
{

}


int main()
{
    vector<string> my_vector;
    Read_function(my_vector);
    Cout_function();
    WriteIn_function();
}
