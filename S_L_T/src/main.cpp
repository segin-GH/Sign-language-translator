/*

    adxl335   Vcc
              x   ==>>> a6;
              y   ==>>> a5;
              z   *not using
              Gnd

    flex sensor 

              thumb ==>> a0
              index ==>> a1
              middle ==>> a2
              ring ==>> a3
              little ==>> a4


*/
# include <Arduino.h>
# include <string.h>

int thumbFinger = A0;
int indexFinger = A1;
int middleFinger = A2;
int ringFinger = A3;
int littleFinger = A4;

int adx = A6;
int ady = A5;


String tempWord;

void printOnce(String word)
{
  if (word != tempWord)
  {
    Serial.println(word);
    tempWord = word;
  }
}




void setup()
{
  Serial.begin(9600);
  pinMode(thumbFinger ,INPUT);
  pinMode(indexFinger ,INPUT);
  pinMode(middleFinger ,INPUT);
  pinMode(ringFinger ,INPUT);
  pinMode(littleFinger ,INPUT);

  pinMode(adx ,INPUT);
  pinMode(ady ,INPUT);

}

void loop()
{
  int thumbVal =  analogRead(thumbFinger);
  int indexVal =  analogRead(indexFinger);
  int middleVal =  analogRead(middleFinger);
  int ringVal =  analogRead(ringFinger);
  int littleVal  =  analogRead(littleFinger);
  int adyVal =  analogRead(ady);
  int adxVal =  analogRead(adx);

  if ( thumbVal >= 730 && thumbVal <= 750  && indexVal >= 780 && indexVal <= 800 && middleVal >= 770  && middleVal <= 795 && ringVal >= 710 && ringVal <= 770 && littleVal >= 710 && littleVal <= 750 && adyVal >= 320 && adyVal <= 345 && adxVal >= 385  && adxVal <= 400)
  {

    printOnce("A");
    //Serial.println(word = 'A');
  }

  if (thumbVal >= 720 && thumbVal <= 745 && indexVal >= 850 && indexVal <= 860 && middleVal >= 840 && middleFinger <= 860 && ringVal >= 825 && ringVal <= 845 && littleVal >= 815 && littleVal <= 835 && adyVal >= 325 && adyVal <= 345 && adxVal >= 380 && adxVal <= 400)
  {

    printOnce("B");
    // Serial.println(word = 'B');
  }

  if (thumbVal >= 730 && thumbVal <= 755 && indexVal >= 845 && indexVal <= 875 && middleVal >= 835 && middleVal <= 855 && ringVal >= 795 && ringVal <= 830 && littleVal >= 815  && littleVal <= 835 && adyVal >= 290 && adyVal <= 310 && adxVal >= 380 && adxVal <= 390)
  {

    printOnce("Hello");
    // Serial.println("Hello");
  }

  if (thumbVal >= 715 && thumbVal <= 750 && indexVal >= 835 && indexVal <= 860 && middleVal >= 830 && middleVal <= 850 && ringVal >= 800 && ringVal <= 830 && littleVal >= 820 && littleVal <= 840 && adyVal >= 390 && adyVal <= 410 && adxVal >= 340 && adxVal <= 360 )
  {
    printOnce("Thakyou");
    // Serial.println("ThankYou");
  }

  if (thumbVal >= 740 && thumbVal <= 760 && indexVal >= 800 && indexVal <= 840 && middleVal >= 815 && middleVal <= 830 && ringVal >= 750 && ringVal <= 780 && littleVal >= 790 && littleVal <= 810 && adyVal >= 320 && adyVal <= 340 &&  adxVal >=  380 && adyVal <= 400  )
  {
    printOnce("C");
    // Serial.println('C');
  }

  if (thumbVal >= 750 && thumbVal <= 800 && indexVal >= 780 && indexVal <= 820 && middleVal >= 780 &&  middleVal <= 810 &&  ringVal >= 680 && ringVal <= 740 && littleVal >= 710 && littleVal <= 740  && adyVal >= 390 && adyVal <= 410 && adxVal >= 320 && adxVal <= 340)
  {
    printOnce("HELP");
    // Serial.println("HELP!");
  }  
  

  delay(100);

//     Serial.print(" thumbFinger : ");
//     Serial.print(thumbVal);
//     Serial.print("\t indexFinger : ");
//     Serial.print(indexVal);
//     Serial.print("\t middleFinger : " );
//     Serial.print(middleVal);
//     Serial.print("\t ringFinger : " );
//     Serial.print(ringVal);
//     Serial.print("\t littleFinger : ");
//     Serial.print(littleVal );
//     Serial.print("\t ady : ");
//     Serial.print(adyVal);
//    Serial.print("\t adx : ");
//    Serial.println(adxVal);
// //  Serial.println(charr);
}