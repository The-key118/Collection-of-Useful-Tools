#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<deque>
using namespace std;
struct tree
{
int name;
tree*right;
tree*left;
tree(int x):name(x),right(NULL),left(NULL){}
};
void asktree(tree*p)
{
 if(!p)
 {
  return;
 }
cout<<p->name<<endl;
asktree(p->left);
asktree(p->right);
}
void inserttree()
{
 tree*p=new tree(10);
 p->left=new tree(11);
 p->right=new tree(12);
 p->left->left=new tree(13);
 p->left->right=new tree(14);
 p->right->left=new tree(15);
 p->right->right=new tree(16);
asktree(p);
system("pause");
}
void vec(vector<int>&p)
{
int name=3;
auto it=p.begin();
it=find(p.begin(),p.end(),name);
if(it!=p.end())
{
 cout<<"已找到这个数："<<name<<"位置在第"<<distance(p.begin(),it)+1<<"个"<<endl;
}
else
{
 cout<<"未找到！"<<endl;
}
inserttree();
}
void app()
{
 vector<int>p;
 p.push_back(1);
 p.push_back(2);
 p.push_back(3);
 p.push_back(4);
 p.push_back(5);
 vec(p);

}
int main()
{
app();
}