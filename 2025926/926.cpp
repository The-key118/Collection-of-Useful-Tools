#include<iostream>
using namespace std;
typedef int typedata;
typedef struct list
{
int data;
struct list*next;

}list1;
static list1*initlist()/*初始化链表*/
{
 list1*p=new list1;
 p->data=0;
 p->next=NULL;
 return p;
}
static int insertlist(list1*L,typedata data)/*插入链表*/
{
list1*p=new list1;
p->data=data;
p->next=L->next;
L->next=p;
return 1;
}
void asklist(list1*L)
{
list1*p=L->next;
if(!L||!p)
{
 cout<<"asklist语句里出现空指针！"<<endl;
 return;
}
while(p!=NULL)
{
 cout<<p->data<<endl;
 p=p->next;
}

}
void app()
{
static list1*p=initlist();
insertlist(p,10);
insertlist(p,20);
insertlist(p,30);
cout<<"链表的元素为："<<endl;
asklist(p);
system("pause");
}
int main()
{
app();
}
