#include<iostream>
#include<Arduino.h>
#include<FastLED.h>
#include<stdio.h>
using namespace std;
const int pin1=48;/*灯的引脚数*/
const int num1=1;/*一盏灯*/
struct tree/*定义一个结构体*/
{

int pin;/*记录引脚*/
int num;/*记录led灯的数量*/
CRGB*leds;

};
tree*p1=new tree{pin1,num1,NULL};/*给结构体赋值*/
void init(tree*p)
{
 
/*类似于int*p=new int[1]*/
p->leds=new CRGB[p->num];/*leds为CRGB类型，因为new的两边要类型一样*/
pinMode(p->pin,OUTPUT);/*设置48号为输出*/
FastLED.addLeds<WS2812,pin1,GRB>(p->leds,p->num);/*初始化灯带和引脚*/

}
void runled(tree*p)/*运行led灯*/
{
CRGB led[]={

 CRGB::Red,CRGB::Yellow,CRGB::Blue,CRGB::Orange,
 CRGB::Pink,CRGB::Brown,CRGB::Purple,CRGB::Green,CRGB::Silver,
CRGB::Gold,CRGB::DarkGreen,CRGB::Olive,CRGB::Indigo,CRGB::PeachPuff,
CRGB::Turquoise
/*给led灯的颜色赋值*/
};
int size1=sizeof(led)/sizeof(led[0]);
int i=0;
while(i<size1)
{
 p->leds[0]=led[i];
 FastLED.show();/*展示*/
 delay(380);/*延迟*/
i++;
}
}
void setup()
{
init(p1);

}
void loop()
{
runled(p1);
}
int main()
{
setup();
while(int i=1)
{
 loop();
}
}