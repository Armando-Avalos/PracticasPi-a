
 void main() {
int j = 0;
int i = 0;
TRISC = 0;
TRISB = 0b10000000;


while(PORTB.F7 == 0){


      PORTC.F0=0;
      PORTC.F1=0;
      PORTC.F2=1;

      PORTB.F0=1;
      PORTB.F1=0;
      PORTB.F2=0;
      DELAY_MS (6000);

      for (i = 0; i < 2; i++){



      PORTC.F0=0;
      PORTC.F1=0;
      PORTC.F2=0;

      PORTB.F0=1;
      PORTB.F1=0;
      PORTB.F2=0;

      DELAY_MS (500);

      PORTC.F0=0;
      PORTC.F1=0;
      PORTC.F2=1;

      PORTB.F0=1;
      PORTB.F1=0;
      PORTB.F2=0;
      DELAY_MS (500);
}



      PORTC.F0=0;
      PORTC.F1=1;
      PORTC.F2=0;

      PORTB.F0=1;
      PORTB.F1=0;
      PORTB.F2=0;
      DELAY_MS (2000);
////////////////////////////////////////////////////////////////////////////////



      PORTC.F0 = 1;
      PORTC.F1 = 0;
      PORTC.F2 = 0;

      PORTB.F0 = 0;
      PORTB.F1 = 0;
      PORTB.F2 = 1;
      DELAY_MS (6000);
      for (j = 0; j < 2; j++){


          PORTC.F0 = 1;
          PORTC.F1 = 0;
          PORTC.F2 = 0;

          PORTB.F0 = 0;
          PORTB.F1 = 0;
          PORTB.F2 = 0;

          DELAY_MS (500);
          PORTC.F0 = 1;
          PORTC.F1 = 0;
          PORTC.F2 = 0;

          PORTB.F0 = 0;
          PORTB.F1 = 0;
          PORTB.F2 = 1;
          DELAY_MS (500);
      }

      PORTC.F0 = 1;
      PORTC.F1 = 0;
      PORTC.F2 = 0;

      PORTB.F0 = 0;
      PORTB.F1 = 1;
      PORTB.F2 = 0;
      DELAY_MS (2000);

}
while(PORTB.F7 == 1){
          PORTC.F0 = 0;
          PORTC.F1 = 0;
          PORTC.F2 = 0;

          PORTB.F0 = 0;
          PORTB.F1 = 0;
          PORTB.F2 = 0;

          DELAY_MS (500);
          PORTC.F0 = 1;
          PORTC.F1 = 0;
          PORTC.F2 = 0;

          PORTB.F0 = 0;
          PORTB.F1 = 1;
          PORTB.F2 = 0 |;
          DELAY_MS (500);
}
}