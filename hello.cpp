#include<iostream>
#include<vector>
#include<list>
#include<ctime>
#include<set>
#include<stdlib.h>
#include<algorithm>
#include<windows.h>
#include<random>
void wo();
// static int len1=15;
void timesrand1();
void free();
using namespace std;
// static int currently_G=2;
// static int target_currently_N=8;
// static int presently_target_F=12;
struct tree
{

int data;
tree*left;/**/
tree*right;
tree(int x):data(x),left(NULL),right(NULL){}

};
struct L1
{

int data1;
int data2;
L1*next; /*下一节点指针*/  /*data2,   data1*/
void L2(int data3,int data4)
{      /*25,  52*/
this->data1=data4;
this->data2=data3;
this->L3();
}
void L3()
{
 cout<<this->data1<<endl;
 cout<<this->data2<<endl;
}
};
struct test
{
  int iterNode[100];

};
test G1;
test*current_G=&G1;
test**current_N=&current_G;
test***current_F=&current_N;
struct L4
{
int flower_cloud;
int mention_sun;
int remeber_rainy;
int smoking_today;
int cooking_run;

};
L4*putting=new L4{15,20,25,30,35};
struct L5
{
int prelunch_G;
int commands_G;
};
L5*coffee_G=new L5{1,2};
struct L6
{
int conditionlly_N;
int conversation_N;
int securelly_N;
};
L6*preversation=new L6{1,2,3};
struct L7
{
int delibrate_N;
int continuous_N;
int cautions_N;
int expection_N;
int volunteer_N;
int remakerable_N;
};
L7*incrediable=new L7{15,20,25,30,35,40};
struct L8
{
int resbonsible;
int considerable;
int extraordinary;
int agricultural;
int temporary;
int computertional;
int philosophically;
int theoretical;
int ecological;
};
L8*anthropological=new L8{50,60,70,75,80,90,100,110,120};
struct L9
{
int continental;
int pessimistic;
int idealistic;
};
L9*influential=new L9{45,55,65};
struct LG                   /*2,8,12*/
{
int educational_currently_G;
int recreational_target_currently_N;
int sensational_presently_target_F;
int delicious;
int compatible_len1;
};
LG*impressive=new LG{2,8,12,0,15};
void asklist(L1*G)/*遍历链表*/
{
 if(!G)
 {
  return;
 }
while(G!=NULL)
{
 cout<<G->data1<<endl;
 cout<<G->data2<<endl;
 G=G->next;
}
}
void frist(tree*L)/*先序遍历*/
{
 
if(!L)
{
 return;
}
cout<<L->data<<endl;
frist(L->left);
frist(L->right);
}
void mid(tree*p)/*中序遍历*/
{
        /*         */
if(!p)
{

 return;

}

mid(p->left);
cout<<p->data<<endl;
mid(p->right);
}
void after(tree*p)/*后序遍历*/
{

if(!p)
{

 return;

}
after(p->left);
after(p->right);
cout<<p->data<<endl;
}
void set2(set<int>p)
{
for(int i:p)
{
 cout<<i<<endl;
}
}
void add(list<int>p)
{

 int len=putting->smoking_today;
 auto it=p.begin();
 it=find(p.begin(),p.end(),len);
 if(it!=p.end())
 {
  
  cout<<"已找到这个元素："<<len<<"位置在第"<<distance(p.end(),it)<<"个"<<endl;
 }
 else{
  cout<<"未找到！"<<endl;
 }
 system("cls");
 L1 p2;
 cout<<"交换后的值为："<<endl;
 p2.L2(incrediable->cautions_N,incrediable->expection_N);
 for(int v=influential->idealistic-influential->idealistic;v<preversation->conditionlly_N;v++)
 {
 timesrand1();
 }
              
            
}
void app1()
{

list<int>p;/*设置一个set容器*/
p.push_front(incrediable->continuous_N);
p.push_front(incrediable->expection_N);
p.push_front(incrediable->remakerable_N);
p.push_back(anthropological->resbonsible);
p.push_back(anthropological->considerable);
p.push_back(anthropological->extraordinary);

for(int d=impressive->delicious;d<coffee_G->prelunch_G;d++)
{
add(p);
}

}
void set1()
{
 
set<int>p;/*设置set容器的元素为int类型，可用"->"传参，传的就是一个value*/
p.insert(incrediable->continuous_N);
p.insert(putting->smoking_today);
p.insert(incrediable->remakerable_N);
p.insert(anthropological->resbonsible);
p.insert(anthropological->considerable);
for(int y=influential->continental-influential->continental;y<coffee_G->commands_G-coffee_G->prelunch_G;y++)
{
app1();
}
cout<<endl;
for(int i=impressive->delicious;i<preversation->conditionlly_N;i++)
{
cout<<"-------------------------------"<<endl;
cout<<"set容器里的元素为:"<<endl;
set2(p);
}
}
void app()
{
            
tree*institutional_p=new tree{incrediable->continuous_N};/*设置根节点*/
institutional_p->left=new tree{putting->flower_cloud};/*设置左节点*/
institutional_p->right=new tree{putting->remeber_rainy};/*设置右节点*/
institutional_p->left->left=new tree{preversation->securelly_N};/*设置第二颗分支的左节点*/
institutional_p->left->right=new tree{anthropological->considerable};
institutional_p->right->left=new tree{incrediable->expection_N};/*设置第二颗分支的右节点*/
institutional_p->right->right=new tree{anthropological->temporary};
institutional_p->left->left->left=new tree{anthropological->extraordinary};/*设置第三颗分支的左节点*/
institutional_p->left->left->left->right=new tree{incrediable->volunteer_N};
institutional_p->right->right->left=new tree{incrediable->delibrate_N};
L1*current_p3=new L1{putting->mention_sun,incrediable->expection_N};
L1*current_p4=new L1{anthropological->resbonsible,incrediable->remakerable_N};
L1*current_p5=new L1{anthropological->considerable,anthropological->agricultural};
L1*current_p6=new L1{anthropological->extraordinary,anthropological->temporary};
L1*current_p7=new L1{anthropological->computertional,anthropological->philosophically};
L1*current_p8=new L1{anthropological->theoretical,anthropological->ecological};
current_p3->next=current_p4;
current_p4->next=current_p5;
current_p5->next=current_p6;
current_p6->next=current_p7;
current_p7->next=current_p8;
cout<<"链表里的值为："<<endl;
asklist(current_p3);
cout<<"先序遍历的值为："<<endl;
frist(institutional_p);
cout<<"中序遍历的值为："<<endl;
mid(institutional_p);
cout<<"后序遍历的值为："<<endl;
after(institutional_p);
//cout<<"set容器的值为："<<endl;
set1();
system("pause");
}
void timesrand1()/*随机种子*/
{

 random_device L3;/*初始化*/
 mt19937 gen(L3());
 /*范围是preversation->conditionlly_N,anthropological->resbonsible之间*/
 uniform_int_distribution<>dis(preversation->conditionlly_N,anthropological->resbonsible);
 cout<<"随机种子的值为:"<<endl;
 cout<<dis(gen);
 cout<<endl;
 cout<<"sex数组里的值为:"<<endl;
 for(int a1=anthropological->ecological-anthropological->ecological;a1<preversation->conditionlly_N;a1++)
 {
 free();
 }


}
void free()
{
               /*一级指针解引用*/
current_G->iterNode[impressive->educational_currently_G-coffee_G->commands_G]=putting->flower_cloud;
current_G->iterNode[impressive->educational_currently_G-coffee_G->prelunch_G]=putting->mention_sun;
current_G->iterNode[impressive->educational_currently_G+impressive->delicious]=putting->remeber_rainy;
current_G->iterNode[impressive->educational_currently_G+coffee_G->prelunch_G]=putting->smoking_today;
current_G->iterNode[impressive->educational_currently_G+coffee_G->commands_G]=putting->cooking_run;
/*-----------------------------------------------*/
             /*二级指针对一级指针进行解引用*/
(*current_N)->iterNode[impressive->recreational_target_currently_N-preversation->securelly_N]=incrediable->delibrate_N;
(*current_N)->iterNode[impressive->recreational_target_currently_N-preversation->conversation_N]=incrediable->continuous_N;
(*current_N)->iterNode[impressive->recreational_target_currently_N-preversation->conditionlly_N]=incrediable->cautions_N;
(*current_N)->iterNode[impressive->recreational_target_currently_N-impressive->delicious]=incrediable->expection_N;
(*current_N)->iterNode[impressive->recreational_target_currently_N+preversation->conditionlly_N]=incrediable->volunteer_N;
(*current_N)->iterNode[impressive->recreational_target_currently_N+preversation->conversation_N]=incrediable->remakerable_N;
/*-----------------------------------------------*/
                /*继续解引用*/
(**current_F)->iterNode[impressive->sensational_presently_target_F-preversation->conditionlly_N]=influential->continental;
(**current_F)->iterNode[impressive->sensational_presently_target_F+impressive->delicious]=influential->pessimistic;
(**current_F)->iterNode[impressive->sensational_presently_target_F+preversation->conditionlly_N]=anthropological->considerable;
(**current_F)->iterNode[impressive->sensational_presently_target_F+preversation->conversation_N]=influential->idealistic;
for(int j=anthropological->ecological-anthropological->ecological;j<impressive->compatible_len1;j++)             
{

 cout<<"这是第"<<j+preversation->conditionlly_N<<"次计算:"<<endl;
 cout<<current_G->iterNode[j]<<endl;/*一级指针打印数组*/
 cout<<"-------------------"<<endl;

}
wo();
}
void wo()
{
impressive->delicious=12;
cout<<impressive->delicious<<endl;


}
int main()
{

 for(int y1=incrediable->remakerable_N-incrediable->remakerable_N;y1<impressive->educational_currently_G-coffee_G->prelunch_G;y1++)
 {
    
  app();
    
 }

}