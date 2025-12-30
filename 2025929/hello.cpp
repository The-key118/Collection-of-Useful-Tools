#include<iostream>
#include<windows.h>
#include<thread>
using namespace std;
typedef int typedata;
typedef struct list/*定义一个链表*/
{
 int data1;
 struct list*next;/*定义一个结构体指针*/
}list1;
struct tree/*定义一个二叉树*/
{
int name;
tree*left;
tree*right;
tree(int x):name(x),left(NULL),right(NULL){}
};
void frist(tree*p)/*先序遍历*/
{
 if(!p)
 {
  return ;//一定要非空处理
 }
cout<<p->name<<endl;/*根节点*/
frist(p->left);/*左节点*/
frist(p->right);/*右节点*/

}
void secend(tree*p)/*中序遍历*/
{
if(!p)
{
 return;
}
secend(p->left);/*左节点*/
cout<<p->name<<endl;/*根节点*/
secend(p->right);/*右节点*/
}
void after(tree*p)/*后序遍历*/
{
if(!p)
{
 return;
}
after(p->left);
after(p->right);
cout<<p->name<<endl;
}
void inittree()/*初始化二叉树*/
{
tree*p=new tree(10);/*根节点*/
p->left=new tree(11);/*左节点*/
p->right=new tree(12);/*右节点*/
p->left->left=new tree(13);
p->left->right=new tree(14);
p->right->left=new tree(15);
p->right->right=new tree(16);
cout<<"先序遍历的结果为："<<endl;
frist(p);
cout<<"中序遍历的结果为："<<endl;
secend(p);
cout<<"后序遍历的结果为："<<endl;
after(p);
system("pause");
}
list1*init()/*链表初始化*/
{
 list1*p=new list;
 p->data1=0;
 p->next=NULL;
 return p;
}
int inserthead(list1*L,typedata data2)/*插入头结点*/
{
list1*p=new list1;
p->data1=data2;
p->next=L->next;
L->next=p;
return 1;
}
void asklist(list1*L)/*访问链表*/
{
list1*p=L->next;
while(p!=NULL)
{
 cout<<p->data1<<endl;
 p=p->next;
}
}
void app()/*主程序*/
{
list1*p=init();
inserthead(p,2);
inserthead(p,3);
inserthead(p,4);
cout<<"链表的元素为："<<endl;
asklist(p);
inittree();

}
int main()
{
 app();
}