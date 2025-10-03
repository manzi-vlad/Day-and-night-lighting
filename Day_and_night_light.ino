int LDRpin=A1;
int led=4;
int LDRval;

void setup() {
  // put your setup code here, to run once:
  pinMode(LDRpin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LDRval=analogRead(LDRpin);
Serial.print("LDRval: ");
Serial.println(LDRval);

if (LDRval<500){
  digitalWrite(led,HIGH);
  }

  else{
    digitalWrite(led,LOW);
    }
    delay(500);
}
