#include<iostream>
#include<Arduino.h>
#include<FastLED.h>
using namespace std;
const int num1=1;
const int pin1=48;
struct tree
{
int num;
int pin;
CRGB*leds;
};
tree*p1=new tree{1,48,NULL};
void init(tree*p)
{
p->leds=new CRGB[p->num];
pinMode(p->pin,OUTPUT);
FastLED.addLeds<WS2812,pin1,GRB>(p->leds,p->num);

}
void runled(tree*p)
{
CRGB leds1[]={CRGB::Red,CRGB::Blue,CRGB::Purple,CRGB::Green,CRGB::Pink,CRGB::Orange,
CRGB::Yellow,CRGB::Brown,CRGB::Cyan,CRGB::Lavender,CRGB::Magenta };
int len=sizeof(leds1)/sizeof(leds1[0]);
for(int i=0;i<len;i++)
{
 p->leds[0]=leds1[i];
 FastLED.show();
 delay(300);
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
for(int i=0;;i++)
{
 loop();
}
}