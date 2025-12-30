#include<iostream>
using namespace std;
struct tree
{
int name;
tree*left;
tree*right;
tree(int x):name(x),left(NULL),right(NULL){}
};
void mid(tree*p)
{
if(!p)
{
 return;
}
cout<<p->name<<endl;
mid(p->left);
mid(p->right);
}
void app()
{
 tree*p=new tree(10);
 p->left=new tree(11);
 p->right=new tree(12);
 mid(p);
system("pause");
}
int main()
{
app();
}