/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"

struct CounterImplementation{
  enum Derection derection;
  int increment_value;
  int value;              //bool enfernt
};

struct CounterImplementation count1{UNDEFINED, 0,0};       //boll enfernt, derection auf UNDEFINED und die benamsung geändert
struct CounterImplementation count2{UNDEFINED, 0,0};
struct CounterImplementation count3{UNDEFINED, 0,0};     //bool entfernt, derection auf UNDEFINED und die benamsung geändert


Counter counter[COUNTER_COUNT]={&count1, &count2, &count3};  //benamsung der mitgabe geändert

Counter new_counter(Derection derection)
{
  for (int i = 0; i < COUNTER_COUNT; i++) {
    if (counter[i]->derection==UNDEFINED && counter[i]-> increment_value == 0) {  //if bedingung geändert und erweitert
      counter[i]->derection = derection;    //Operation geändert
      counter[i]->increment_value++;      //Operation hinzugefügt
      return counter[i];
    }
  }
  return 0;
}

void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++) {   //COUNTER_COUNT hinzugefügt
                                          //if bedingung entfernt
    counter[i]->derection = UNDEFINED;        //neue Operationen hinzugefügt
    counter[i]->value = 0;                    //-''-
    counter[i]->increment_value = 0;          //-''-
   }
}
enum Derection get_direction(Counter c)
{
  return c->derection;
}
void set_direction(Counter c, Derection derection)
{
  c->derection=derection;         //Kommentar entfernt
}
int get_increment_value(Counter c)
{
  return c->increment_value;
}
void set_increment_value(Counter c, int increment_value)
{
  if (increment_value>=0) {                     //if bedingung eingebaut
    c->increment_value=increment_value;
  }

}
int get_value(Counter c)
{
  return c->value;
}
void increment(Counter c)                           //Methode void increment(Conter c) implementiert
{
  if (c->derection!=UNDEFINED&&c->derection==UP) {
    c->value+=c->increment_value;
  }
  else if (c->derection==DOWN) {
    c->value-=c->increment_value;
  }
}
bool set_value(Counter c, int increment_value)      //Methode bool set_value(Counter c, int increment_value) implementiert
{
  if (c->derection==DOWN) {
    c->value=increment_value;
    return true;
  }
  else{
    return false;
  }
}
