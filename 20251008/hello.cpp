#include<iostream>
using namespace std;
struct tree
{
double name;/*建立一个结点*/
tree*left;/*建立左子树*/
tree*right;/*建立右子树*/
int lefttag;/*表示左子树的前驱或后继*/
int righttag;/*表示右子树的前驱或后继*/
tree(double x):name(x),left(NULL),right(NULL),lefttag(0),righttag(0){}/*初始化*/

};
tree*up=NULL;/*保存上一个访问的结点*/
void mid(tree*p)/*线索中序遍历二叉树*/
{

 if(!p)
 {
  return;
 }
 mid(p->left);/*遍历左子树*/
 if(!p->left)/*左指针为空，建立前驱线索*/
 {
  p->left=up;
  p->lefttag=1;
 }
 if(up!=NULL&&up->right==NULL)
 {
  up->right=p;
  up->righttag=1;
 }
 up=p;
 mid(p->right);/*遍历右子树*/
}
tree*fristnode(tree*p)/*找到线索中序二叉树的第一个结点*/
{
while(p!=NULL&&p->lefttag==0)
p=p->left;
return p;/*返回开始遍历第一个结点*/
}
tree*nextnode(tree*p)/*找到线索中序二叉树的下一个结点*/
{
if(p->righttag==0)
 {
  return fristnode(p->right);
 }
else
 {
  return p->right;
 }
}
void normalmidask(tree*p)/*普通二叉树中序遍历*/
{
if(!p)
{
 return;
}
normalmidask(p->left);
cout<<p->name<<endl;
normalmidask(p->right);

}
void askmid(tree*L)
{
for(tree*p=fristnode(L);p!=NULL;p=nextnode(p))
{
 cout<<p->name<<endl;
}
}
void app()
{
tree*p=new tree(10.2);
p->left=new tree(11.3);
p->right=new tree(12.4);
p->left->left=new tree(13.5);
p->left->right=new tree(14.6);
p->right->left=new tree(16.7);
p->right->right=new tree(17.8);
cout<<"普通中序遍历的结果为："<<endl;
normalmidask(p);
mid(p);
cout<<"中序线索化后的结果为："<<endl;
askmid(p);
system("pause");
}
int main()
{
app();
}