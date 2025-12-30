#include<iostream>
using namespace std;
typedef int date;
const int maxsixe=100;
typedef struct 
{
date sex[maxsixe];
int len;

}sqlist;
void initlist(sqlist*p)
{
if(!p)
{
 return;
}
p->len=0;

}
int insertback(sqlist*p,int name,date e)
{
if(p->len>=maxsixe)
{
cout<<"Á´±íÒÑÂú"<<endl;
return 0;
}


 for(int i=p->len-1;i>=name-1;i--)
  {
   p->sex[i+1]=p->sex[i];
  }
p->sex[name-1]=e;
p->len++;


return 1;
}
void asklist(sqlist*p)
{
for(int i=0;i<p->len;i++)
{
 cout<<p->sex[i]<<endl;
}
}
void app()
{
sqlist*p=new sqlist;
initlist(p);
insertback(p,1,10);
asklist(p);
system("pause");
}
int main()
{
app();
}