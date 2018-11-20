#include <stdio.h>
#include "car.h"

#define CARS 6

struct CarImplementation{
   enum CarType type;
   enum Color color;
   float fill_level;
   float acceleration_rate;
   float speed;
};

static CarImplementation* aixam1 = {AIXAM, RED, 16, 0, 0};
static CarImplementation* multipla1= {FIAT_MULTIPLA, GREEN , 65, 0, 0};
static CarImplementation* multipla2 = {FIAT_MULTIPLA, BLUE , 65, 0, 0};
static CarImplementation* multipla3 = {FIAT_MULTIPLA, ORANGE , 65, 0, 0};
static CarImplementation* jeep1 = {JEEP, SILVER, 80, 0, 0};
static CarImplementation* jeep2 = {JEEP, BLACK, 80, 0, 0};


static Car carpark [] = {&aixam1,&multipla1,multipla2,multipla3,jeep1,jeep2};

void init(){

}

Car get_car (enum CarType type)
{
  for (int i = 0; i < CARS; i++)
  {
     return carpark[i];
  }
 }
}

CarType get_type (Car car){

  return AIXAM;
}
Color get_color (Car car){
  return BLACK;
}
float get_fill_level( Car car){
  return 0;

}
float get_acceleration_rate ( Car car){
  return 0;
}
void set_acceleration_rate(Car car, float speed){

}
int get_speed(Car car){
    return 0;
}
void accelerate (Car car){

}
int round(float speed){
    return 0;
}
