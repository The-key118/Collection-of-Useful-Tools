#include<iostream>
using namespace std;
typedef int typedata;
typedef struct node
{
typedata data;
struct node*next;

}node1;
node1*initlist()/*链表初始化*/
{
 node1*p=new node1;/*定义一个头结点p*/
 p->data=0;
 p->next=NULL;/*置空*/
 return p;

}
node1*after(node1*L)
{

 node1*p=L;
 while(p->next!=NULL)
 {
  p=p->next;
 }
return p;
}
node1*insertback(node1*L,typedata e)/*尾插法*/
{
node1*p=new node1;
p->data=e;
L->next=p;
p->next=NULL;
return p;
}
int inserthead(node1*L,typedata e)/*头插法*/
{
node1*p=new node1;
p->data=e;
p->next=L->next;
L->next=p;
return 1;
}
int whereinsertlist(node1*L,int name,typedata e)/*在指定位置插入元素*/
{/*name为指定元素的第几个*/
 /*e为插入的元素*/

 node1*p=L;
 int i=0;
 while(i<name-1)/*因为我是要在指定位置插入元素，故需要找到上一个元素的指针*/
 {/*我要让上一个元素的指针指向我要插入元素的位置*/
  p=p->next;
  i++;
  if(!p)/*因为指向最后一个元素肯定会出现空指针，故要进行非空处理*/
  {
   return 0;
  }
 }
 node1*q=new node1;/*创建一个新的结点q*/
q->data=e;/*把要插入的元素赋值给新节点*/
q->next=p->next;/*把新的下一个结点指向原来的新节点上面的节点下面的那个*/
/*
例如：有一个链表：1->2->3->4->5
我需要在2和3之间插入一个元素，需要插入的元素为10
我要把2的下一个结点3赋值给10的下一个结点为3

*/
p->next=q;/*然后2指向10*/
return 1;
}
void asklist(node1*L)/*遍历链表*/
{
node1*p=L->next;
while(p!=NULL)
{
 cout<<p->data<<endl;/*从第一个元素一直输出到最后一个为止*/
 p=p->next;/*指向下一个节点*/
 
}

}
void add()/*主程序*/
{
 node1*list=initlist();
 node1*list1=after(list);
 int putin=15;
cout<<"头结点的链表元素为："<<endl;
 inserthead(list,10);/*在头结点插入元素*/
 inserthead(list,20);
 inserthead(list,30);
 asklist(list);
 cout<<"尾插法的链表元素为："<<endl;
 list1=insertback(list1,10);/*在尾节点插入元素*/
list1=insertback(list1,20);
list1=insertback(list1,30);
asklist(list);
cout<<putin<<"在指定位置插入的元素为："<<endl;
whereinsertlist(list,2,putin);/*在指定位置插入元素*/
asklist(list);
system("pause");

 
}
int main()
{
 add();
}