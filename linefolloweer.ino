// (m=motor)
int m1=3;
int m2=5;
int m3=6;
int m4=9;
int ir1=10;
int ir2=11;
int ir3=12;
int ir4=13;
int L1;
int L2;
int R1;
int R2;
int pwm=140;

void setup() {
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ir3,INPUT);
pinMode(ir4,INPUT);
}

void loop() {
L1=digitalRead(ir1);
L2=digitalRead(ir2);
R1=digitalRead(ir3);
R2=digitalRead(ir4);
if (L1==1&&L2==1&&R1==1&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
else if (L1==1&&L2==1&&R1==1&&R2==0){
  analogWrite(m1,pwm);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,0); 
}
else if (L1==1&&L2==1&&R1==0&&R2==1){
  analogWrite(m1,pwm);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,0); 
}
else if (L1==1&&L2==1&&R1==0&&R2==0){
  analogWrite(m1,pwm);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,0); 
}
else if (L1==1&&L2==0&&R1==1&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,pwm); 
}
else if (L1==1&&L2==0&&R1==1&&R2==0){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
else if (L1==1&&L2==0&&R1==0&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
else if (L1==1&&L2==0&&R1==0&&R2==0){
  analogWrite(m1,pwm);
  analogWrite(m2,0);
  analogWrite(m3,pwm);
  analogWrite(m4,0); 
}
else if (L1==0&&L2==1&&R1==1&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,pwm); 
}
else if (L1==0&&L2==1&&R1==1&&R2==0){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
else if (L1==0&&L2==1&&R1==0&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
else if (L1==0&&L2==1&&R1==0&&R2==0){
  analogWrite(m1,pwm);
  analogWrite(m2,0);
  analogWrite(m3,pwm);
  analogWrite(m4,0); 
}
else if (L1==0&&L2==0&&R1==1&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,pwm); 
}
else if (L1==0&&L2==0&&R1==1&&R2==0){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,0);
  analogWrite(m4,pwm); 
}
else if (L1==0&&L2==0&&R1==0&&R2==1){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,0);
  analogWrite(m4,pwm); 
}
else if (L1==0&&L2==0&&R1==0&&R2==0){
  analogWrite(m1,0);
  analogWrite(m2,pwm);
  analogWrite(m3,pwm);
  analogWrite(m4,0);
}
}
