#include<iostream>
using namespace std;
struct tree
{

int sex; 
int data;
tree*left;
tree*right;
tree(int s,int t):data(s),sex(t),left(NULL),right(NULL){}

};
void frist(tree*p)
{
if(!p)
{
 return;
}
cout<<p->data<<endl;
cout<<p->sex<<endl;
frist(p->left);
frist(p->right);
}
void app()
{
 tree*p=new tree{20,30};
 p->left=new tree{21,40};
 p->right=new tree{24,50};
 p->left->left=new tree{26,60};
 p->left->right=new tree{27,70};
 p->right->left=new tree{28,80};
 p->right->right=new tree{90,100};
frist(p);
system("pause");

}
int main()
{
app();
}