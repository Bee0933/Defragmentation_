#include <iostream>
#include <vector>

#define Drop std::cout << std::endl;

class Nodes
{
private:
    char sector;
    char* tmp; 
    unsigned int track = 0;


public:

    Nodes() 
    {
        std::cout << "[activated]" << std::endl;
    }

    Nodes(char x)
    {
       
        sector = x;
        std::cout << "[initialized]" << std::endl;

    }

    ~Nodes() //d-ctor virtual task tracker
    {
        std::cout << "inactive" << std::endl;
        delete temp;  
    }

    void copy_vertex(std::vector<Nodes> &apple) 
    {
        tmp = new char[apple.size()];
        for(size_t i = 0; i < apple.size(); i++)
        {
           tmp[i] = apple[i].sector;
           
        }
    }

    void recover_virtual_defragment(std::vector<Nodes> &apple) const 
    {
        Drop;

        for(size_t i = 0; i < apple.size(); i++)
        {
            std::cout << tmp[i] << "|" ;
        }


    }
};


int main()
{
    std::vector<Nodes> v;

    Nodes No;
    Nodes No1('H');
    Nodes No2('A');
    Nodes No3('R');
    Nodes No4('D');
    Nodes No5('F');
    Nodes No6('I');
    Nodes No7('L');
    Nodes No8('E');


    v.push_back(No1);
    v.push_back(No2);
    v.push_back(No3);
    v.push_back(No4);
    v.push_back(No5);
    v.push_back(No6);
    v.push_back(No7);
    v.push_back(No8);

    No.copy_vertex(v);
    No.recover_virtual_defragment(v);


  std::cin.get();
}
