void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
void motor(){
    if (Serial.available()){
    byte ByteSerial=Serial.read();
    if (ByteSerial='1'){
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
    }
    if (ByteSerial == '2'){
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
    }
    if (ByteSerial == '0') {
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:

 motor();
 delay(15); // Espera de 15ms, para permitir que o servo atinj
}

