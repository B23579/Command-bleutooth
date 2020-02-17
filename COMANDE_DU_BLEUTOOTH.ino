#include <SoftwareSerial.h>
#define RX 4
#define TX  2
 SoftwareSerial BT(RX,TX);
void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(RX,INPUT);
  pinMode(TX,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  char mot[20];
  int i=0;
  int dispo;
  dispo=BT.available();
  if(dispo>0){
    while(dispo>0&&i<10){
      mot[i]=BT.read();
      delay(10);
      dispo=BT.available();
      i++;
      
    }
    Serial.println(mot);
    BT.write(mot);
  // put your main code here, to run repeatedly:

} 
}
