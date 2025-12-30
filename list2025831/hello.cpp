#include<iostream>
using namespace std;
typedef struct node
{
 int name;
 int sex;
}node1;
struct node o(int name1,int sex1)
{
node1*p=new node1;
p->name=name1;
p->sex=sex1;
cout<<p->name<<endl;
cout<<p->sex<<endl;
return *p;
};
void add()
{
node l;
l=o(25,45);
}
int main()
{
add();
}