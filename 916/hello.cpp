#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include<set>
#include<deque>
using namespace std;
void vector1();
void deque2();
void set2();
struct tree
{
int name;
tree*left;
tree*right;
tree(int x):name(x),left(NULL),right(NULL){}

}; 
void set1(const set<int>&p)
{
auto it=p.begin();
int name=5;
it=find(p.begin(),p.end(),name);
if(it!=p.end())
{
 cout<<"这个数："<<name<<"已经找到,位置在第"<<distance(p.end(),it)<<"个"<<endl;
}
else{
 cout<<"未找到！"<<endl;
}
}
void dequ(const deque<int>&p)
{
auto it=p.begin();
int name=50;
it=find(p.begin(),p.end(),name);
if(it!=p.end())
{
cout<<"deque已找到这个数："<<name<<"位置在第"<<distance(p.begin(),it)+1<<"个"<<endl;
}
else{
 cout<<"未找到！"<<endl;
}
set2();
}
void vec(const vector<int>&p)
{

auto it=p.end();/*用back输出就是12345*/
int name=5;/*用front输出就是54321*/
it=find(p.begin(),p.end(),name);
if(it!=p.begin())
{
 cout<<"vec已找到这个数："<<name<<"位置在第"<<distance(p.begin(),it)+1<<"个"<<endl;
}
else{
 cout<<"未找到！"<<endl;
}
deque2();
}
void lis(const list<int>&p)
{
auto it=p.begin();
int name=5;
it=find(p.begin(),p.end(),name);
if(it!=p.end())
{
 cout<<"list已找到这个数："<<name<<"位置在第"<<distance(p.end(),it)<<"个"<<endl;
}
else
{
 cout<<"未找到！"<<endl;
}
vector1();
}
typedef struct node/*父类结构体?*/
{
int name;
int sex;
}node1;
struct node p(int name,int sex)/*子类结构体*/
{
node1*p1=new node1;
p1->name=sex;
p1->sex=name;
cout<<p1->name<<endl;
cout<<p1->sex<<endl;
return *p1;

};
void list1()
{
 list<int>p;
p.push_front(1);
p.push_front(2);
p.push_front(3);
p.push_front(4);
p.push_front(5);
p.push_front(6);
lis(p);

}
void vector1()
{
vector<int>p2;
p2.push_back(1);
p2.push_back(2);
p2.push_back(3);
p2.push_back(4);
p2.push_back(5);
vec(p2);

}
void deque2()
{
deque<int>p4;
p4.push_front(10);
p4.push_front(20);
p4.push_front(30);
p4.push_front(40);
p4.push_front(50);
dequ(p4);

}
void set2()
{
set<int>p5;
p5.insert(1);
p5.insert(2);
p5.insert(3);
p5.insert(4);
p5.insert(5);
set1(p5);


}
void aqq()
{
node o;
o=p(25,26);
list1();

}
void frist(tree*p)/*先序遍历*/
{
if(!p)
{
 return ;
}
cout<<p->name<<endl;
frist(p->left);
frist(p->right);

}
void middle(tree*p)/*中序遍历*/
{
if(!p)
{
 return;
}
middle(p->left);
cout<<p->name<<endl;
middle(p->right);
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
void go(tree*p)
{
frist(p);
middle(p);
after(p);
delete p;
system("cls");
aqq();
}
void app()
{
tree*p=new tree(10);/*根节点*/
p->left=new tree(11);/*左节点*/
p->right=new tree(12);/*右节点*/
p->left->left=new tree(13);
p->left->right=new tree(14);
p->right->left=new tree(15);
p->right->right=new tree(16);
p->left->left->left=new tree(17);
p->left->left->right=new tree(18);
p->left->right->left=new tree(19);
p->right->left->left=new tree(20);
p->right->left->right=new tree(21);
p->right->right->left=new tree(22);
p->right->right->right=new tree(23);
p->left->left->left->left=new tree(24);
p->left->left->left->right=new tree(25);
p->left->left->right->left=new tree(26);
p->left->left->right->right=new tree(27);
p->left->right->left->right=new tree(28);
p->left->right->left->left=new tree(29);
p->right->left->left->left=new tree(30);
p->right->left->left->right=new tree(31);
p->right->left->right->right=new tree(32);
p->right->left->right->left=new tree(33);
p->right->right->left->left=new tree(34);
p->right->right->left->right=new tree(35);
p->right->right->right->right=new tree(36);
p->left->left->left->left->left=new tree(37);
p->left->left->left->left->right=new tree(38);
p->left->left->left->right->left=new tree(39);
p->left->left->left->right->right=new tree(40);
p->left->left->right->left->left=new tree(41);
p->left->left->right->left->right=new tree(42);
p->left->left->right->right->left=new tree(43);
p->left->left->right->right->right=new tree(44);
p->left->right->left->right->left=new tree(45);
p->left->right->left->right->right=new tree(46);
p->left->right->left->left->left=new tree(47);
p->left->right->left->left->right=new tree(48);
p->right->left->left->left->left=new tree(49);
p->right->left->left->left->right=new tree(50);
p->right->left->left->right->left=new tree(51);
p->right->left->left->right->right=new tree(52);
p->right->left->right->right->left=new tree(53);
go(p);

}
int main()
{
app();
system("pause");

}