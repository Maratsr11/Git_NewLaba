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


}
void Cout_function(vector<string>& my_vector)
=======
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
    for(size_t i=0;i<my_vector.size();++i)
    {
        cout<<my_vector[i]<< endl;
    }
}
void WriteIn_function(vector<string>& my_vector)
{
    ofstream out;
    out.open("WRITE.txt");
    if(out.is_open())
    {
        for(size_t i=0;i<my_vector.size();++i)
        {
            out<<my_vector[i]<<endl;
        }
    }
    out.close();
}


int main()
{
    vector<string> my_vector;

    void Read_function();
    void Cout_function(my_vector);
    void WriteIn_function(my_vector);

    Read_function(my_vector);
    Cout_function();
    WriteIn_function();

}
