#include<avr/io.h>
#include<util/delay.h>
#define SET_BIT(port,val) port|=(1<<val)
#define CLR_BIT(port,val) port&=~(1<<val)


int main(){


SET_BIT(DDRD,PD1);
SET_BIT(DDRD,PD2);
SET_BIT(DDRD,PD3);
SET_BIT(DDRD,PD4);
SET_BIT(DDRC,PC3);
CLR_BIT(DDRB,PB6);
SET_BIT(PORTB,PB6);
CLR_BIT(DDRB,PB7);
SET_BIT(PORTB,PB7);
CLR_BIT(DDRD,PD5);
SET_BIT(PORTD,PD5);
CLR_BIT(DDRD,PD6);
SET_BIT(PORTD,PD6);


SET_BIT(DDRB,PB5);
SET_BIT(DDRB,PB4);
SET_BIT(DDRB,PB3);
SET_BIT(DDRB,PB2);


uint8_t var1 = 0;
uint8_t var2 = 0;


while(1){

 if(PINB&(1<<PB6)){
  if(var1 == 0)
    {
    SET_BIT(PORTD,PD4);
    SET_BIT(PORTD,PD3);
    CLR_BIT(PORTD,PD2);
    CLR_BIT(PORTD,PD1); // 12
    var1 = 1;
    _delay_ms(100);

    }

  else if(var1 == 1){
    CLR_BIT(PORTD,PD4);
    SET_BIT(PORTD,PD3);               //
    SET_BIT(PORTD,PD2);
    CLR_BIT(PORTD,PD1);  // 6
    var1 = 2;
    _delay_ms(100);

}

else if(var1 ==2){
    CLR_BIT(PORTD,PD4);
    CLR_BIT(PORTD,PD3);
    SET_BIT(PORTD,PD2);
    SET_BIT(PORTD,PD1);
    var1=3;

    _delay_ms(100);

 }

else if(var1==3){
    SET_BIT(PORTD,PD4);
    CLR_BIT(PORTD,PD3);
    CLR_BIT(PORTD,PD2);
    SET_BIT(PORTD,PD1);  // 9
    var1=0;

    _delay_ms(100);
}
 }

  if(PINB&(1<<PB7))
    {

  if(var1 == 0)
    {
    SET_BIT(PORTD,PD4);
    SET_BIT(PORTD,PD3);
    CLR_BIT(PORTD,PD2);
    CLR_BIT(PORTD,PD1); // 12
    var1 = 3;
    _delay_ms(100);

    }

  else if(var1 == 1){
    CLR_BIT(PORTD,PD4);
    SET_BIT(PORTD,PD3);               //
    SET_BIT(PORTD,PD2);
    CLR_BIT(PORTD,PD1);  // 6
    var1 = 0;
    _delay_ms(100);

}

else if(var1 ==2){
    CLR_BIT(PORTD,PD4);
    CLR_BIT(PORTD,PD3);
    SET_BIT(PORTD,PD2);
    SET_BIT(PORTD,PD1);
    var1=1;

    _delay_ms(100);

 }

else if(var1==3){
    SET_BIT(PORTD,PD4);
    CLR_BIT(PORTD,PD3);
    CLR_BIT(PORTD,PD2);
    SET_BIT(PORTD,PD1);  // 9
    var1=2;

    _delay_ms(100);
}
 }


if(PIND&(1<<PD5)){
        SET_BIT(PORTC,PC3);
  if(var2 == 0)
    {
    SET_BIT(PORTB,PB5);
    SET_BIT(PORTB,PB4);
    CLR_BIT(PORTB,PB3);
    CLR_BIT(PORTB,PB2); // 12
    var2 = 1;
    _delay_ms(100);

    }

  else if(var2 == 1){
    CLR_BIT(PORTB,PB5);
    SET_BIT(PORTB,PB4);               //
    SET_BIT(PORTB,PB3);
    CLR_BIT(PORTB,PB2);  // 6
    var2 = 2;
    _delay_ms(100);

}

else if(var2 ==2){
    CLR_BIT(PORTB,PB5);
    CLR_BIT(PORTB,PB4);
    SET_BIT(PORTB,PB3);
    SET_BIT(PORTB,PB2);
    var2=3;

    _delay_ms(100);

 }

else if(var2==3){
    SET_BIT(PORTB,PB5);
    CLR_BIT(PORTB,PB4);
    CLR_BIT(PORTB,PB3);
    SET_BIT(PORTB,PB2);  // 9
    var2=0;

    _delay_ms(100);
}
 }

 if(PIND&(1<<PD6))
    {
        SET_BIT(PORTC,PC3);
  if(var2 == 0)
    {
    SET_BIT(PORTB,PB5);
    SET_BIT(PORTB,PB4);
    CLR_BIT(PORTB,PB3);
    CLR_BIT(PORTB,PB2); // 12
    var2 = 3;
    _delay_ms(100);

    }

  else if(var2 == 1){
    CLR_BIT(PORTB,PB5);
    SET_BIT(PORTB,PB4);               //
    SET_BIT(PORTB,PB3);
    CLR_BIT(PORTB,PB2);  // 6
    var2 = 0;
    _delay_ms(100);

}

else if(var2 ==2){
    CLR_BIT(PORTB,PB5);
    CLR_BIT(PORTB,PB4);
    SET_BIT(PORTB,PB3);
    SET_BIT(PORTB,PB2);
    var2=1;

    _delay_ms(100);

 }

else if(var2==3){
    SET_BIT(PORTB,PB5);
    CLR_BIT(PORTB,PB4);
    CLR_BIT(PORTB,PB3);
    SET_BIT(PORTB,PB2);  // 9
    var2=2;

    _delay_ms(100);
}
 }
}
return 0;
}

