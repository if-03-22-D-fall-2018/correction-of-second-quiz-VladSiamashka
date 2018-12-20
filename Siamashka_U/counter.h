/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H

#define COUNTER_COUNT 3   //Value of COUNTER_COUNT geändert

typedef struct CounterImplementation* Counter;

enum Derection{
  UP,DOWN,UNDEFINED
};

Counter new_counter(Derection derection);
void init();
enum Derection get_direction(Counter c);
void set_direction(Counter c, Derection derection);
int get_increment_value(Counter c);
void set_increment_value(Counter C, int increment_value);
int get_value(Counter c);
void increment(Counter c);
bool set_value(Counter c, int increment_value);

#endif
