
unsigned long t1, t2;
int I;
int V ;
int R, r;
int  PWM , PWM1 , y1;
int  y = y1 - 42;
//char S  = ' ';
int q10=0,q1=0,q2=0,q3=1,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0;
void setup() {
  TCCR0B = TCCR0B & B11111000 | B00000001; // for PWM frequency of 62500.00 Hz
  pinMode(5, OUTPUT); //pinMode(A2, INPUT_PULLUP);
  pinMode(6, OUTPUT); pinMode(A1, INPUT);pinMode(A2, INPUT);
  pinMode(A3, INPUT); pinMode(13, OUTPUT);pinMode(7, OUTPUT); 
  Serial.begin(9600);
  Serial.setTimeout(100);
}
void loop() { 
 int B = analogRead(A2);    float a = B*0.0048;// y = (255./1023) * B ;  // 
 int C = analogRead(A1); float x = C * 0.0049 ;      y1 = (255. / 1023) * C;  //y = y1 - 42;
 //float x = x1 +0; 
//  Serial.println(a);
Serial.println(x);
 //delay(100);
 if(x<=2){
  digitalWrite(7,1);
 }if(x>2){  digitalWrite(7,0);}
 if (Serial.available() > 0) {
    String data = Serial.readString ();
    int S = data.toInt();

    if (S==0){
     q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=1;
    }
      if (S==1){
     q1=1;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==2){
    q1=0;q2=1;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==3){
      q1=0;q2=0;q3=1;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==4){
      q1=0;q2=0;q3=0;q4=1;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==5){
      q1=0;q2=0;q3=0;q4=0;q5=1;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==6){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=1;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==7){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=1;q8=0;q9=0;q10=0;
    }
        if (S==8){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=1;q9=0;q10=0;
    }
        if (S==9){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=1;q10=0;
    }
 }
    
     if (q9==1) {
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.01 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.01 && x<=2.02 ){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.02 && x<=2.03 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.03 && x<=2.04 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.04 && x<=2.05 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.05 && x<=2.06 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.06 && x<=2.07 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.07 && x<=2.08 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.08 && x<=2.09 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.09 && x<=2.10 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.10 && x<=2.11 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.11 && x<=2.12 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.12 && x<=2.13 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.13 && x<=2.14 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.14 && x<=2.15 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.15 && x<=2.16 ){ PWM1 = y1*1.16; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.16 && x<=2.17 ){ PWM1 = y1*1.17; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.17 && x<=2.18 ){ PWM1 = y1*1.18; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.18 && x<=2.19 ){ PWM1 = y1*1.19; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.19 && x<=2.20 ){ PWM1 = y1*1.20; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.20 && x<=2.21 ){ PWM1 = y1*1.21; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.21 && x<=2.22 ){ PWM1 = y1*1.22; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.22 && x<=2.23 ){ PWM1 = y1*1.23; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.23 && x<=2.24 ){ PWM1 = y1*1.24; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.24 && x<=2.25 ){ PWM1 = y1*1.25; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.25 && x<=2.26 ){ PWM1 = y1*1.26; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.26 && x<=2.27 ){ PWM1 = y1*1.27; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.27 && x<=3.45 ){ PWM1 = y1*1.28; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.45 && x<=4.32 ){analogWrite(5,185);analogWrite(6,227);}
        if (x>4.32 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    
     if (q8==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.02 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.02 && x<=2.04 ){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.04 && x<=2.06 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.06 && x<=2.08 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.08 && x<=2.10 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.10 && x<=2.12 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.12 && x<=2.14 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.14 && x<=2.16 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.16 && x<=2.18 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.18 && x<=2.20 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.20 && x<=2.22 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.22 && x<=2.24 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.24 && x<=2.26 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.26 && x<=2.28 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.28 && x<=2.30 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.30 && x<=2.32 ){ PWM1 = y1*1.16; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.32 && x<=2.34 ){ PWM1 = y1*1.17; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.34 && x<=2.36 ){ PWM1 = y1*1.18; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.36 && x<=2.38 ){ PWM1 = y1*1.19; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.38 && x<=2.40 ){ PWM1 = y1*1.20; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.40 && x<=2.42 ){ PWM1 = y1*1.21; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.42 && x<=2.44 ){ PWM1 = y1*1.22; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.44 && x<=2.46 ){ PWM1 = y1*1.23; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.46 && x<=3.52 ){ PWM1 = y1*1.24; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.52 && x<=4.15 ){analogWrite(5,181);analogWrite(6,223);}
        if (x>4.15 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    
     if (q7==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.02 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.02 && x<=2.04 ){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.04 && x<=2.06 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.06 && x<=2.08 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.08 && x<=2.10 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.10 && x<=2.12 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.12 && x<=2.14 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.14 && x<=2.16 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.16 && x<=2.18 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.18 && x<=2.20 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.20 && x<=2.22 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.22 && x<=2.24 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.24 && x<=2.26 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.26 && x<=2.28 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.28 && x<=2.30 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.30 && x<=2.32 ){ PWM1 = y1*1.16; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.32 && x<=2.34 ){ PWM1 = y1*1.17; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.34 && x<=2.36 ){ PWM1 = y1*1.18; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.36 && x<=2.38 ){ PWM1 = y1*1.19; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.38 && x<=3.65 ){ PWM1 = y1*1.20; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.65 && x<=4.40 ){analogWrite(5,184);analogWrite(6,226);}
        if (x>4.40 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    
     if (q6==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.05 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.05 && x<=2.10){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.10 && x<=2.15 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.15 && x<=2.20 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.20 && x<=2.25 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.25 && x<=2.30 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.30 && x<=2.35 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.35 && x<=2.40 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.40 && x<=2.45 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.45 && x<=2.50 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.50 && x<=2.55 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.55 && x<=2.60 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.60 && x<=2.65 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.65 && x<=2.70 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.70 && x<=2.75 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.75 && x<=2.80 ){ PWM1 = y1*1.16; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.80 && x<=2.85 ){ PWM1 = y1*1.17; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.85 && x<=2.90 ){ PWM1 = y1*1.18; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.90 && x<=3.65 ){ PWM1 = y1*1.19; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.65 && x<=4.40 ){analogWrite(5,184);analogWrite(6,226);}
        if (x>4.40 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    
    if (q5==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.1 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.2 && x<=2.3){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.3 && x<=2.37 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.37 && x<=2.44 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.44 && x<=2.51 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.51 && x<=2.58 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.58 && x<=2.65 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.65 && x<=2.72 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.72 && x<=2.79 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.79 && x<=2.86 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.86 && x<=2.93 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.93 && x<=3 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3 && x<=3.07 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.07 && x<=3.14 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.14 && x<=3.21 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.21&& x<=3.28 ){ PWM1 = y1*1.16; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.28 && x<=3.70 ){ PWM1 = y1*1.17; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.705 && x<=4.40 ){analogWrite(5,184);analogWrite(6,226);}
        if (x>4.40 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    
     
     if (q4==1){
        PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.1 )    {PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.1 && x<=2.2){ PWM1 = y1*1.02; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.2 && x<=2.3 ){ PWM1 = y1*1.03; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.3 && x<=2.4 ){ PWM1 = y1*1.04; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.4 && x<=2.5 ){ PWM1 = y1*1.05; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.5 && x<=2.6 ){ PWM1 = y1*1.06; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.6 && x<=2.7 ){ PWM1 = y1*1.07; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.7 && x<=2.8 ){ PWM1 = y1*1.08; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.8 && x<=2.9 ){ PWM1 = y1*1.09; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.9 && x<=3 ){ PWM1 = y1*1.10; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3 && x<=3.1 ){ PWM1 = y1*1.11; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.1 && x<=3.2 ){ PWM1 = y1*1.12; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.2 && x<=3.3 ){ PWM1 = y1*1.13; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.3 && x<=3.4 ){ PWM1 = y1*1.14; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.4 && x<=3.84 ){ PWM1 = y1*1.15; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.84 && x<=4.35 ){analogWrite(5,186);analogWrite(6,228);}
        if (x>4.35 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}

       if (q3==1){
              PWM=PWM1-42;
               PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
      
      
    
     if (q2==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.1 )    {PWM1 = y1*0.99; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.1 && x<=2.2){ PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.2 && x<=2.3 ){ PWM1 = y1*0.97; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.3 && x<=2.4 ){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.4 && x<=2.5 ){ PWM1 = y1*0.95; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.5 && x<=2.6 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.6 && x<=2.7 ){ PWM1 = y1*0.93; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.7 && x<=2.8 ){ PWM1 = y1*0.92; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.8 && x<=2.9 ){ PWM1 = y1*0.93; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.9 && x<=3 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3 && x<=3.1 ){ PWM1 = y1*0.95; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.1 && x<=3.2 ){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.2 && x<=3.3 ){ PWM1 = y1*0.97; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.3 && x<=3.4 ){ PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.4 && x<=3.9 ){ PWM1 = y1*0.99; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x>3.9 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
        
    if (q1==1){
               PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.1 )    {PWM1 = y1*0.99; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.2 && x<=2.3){ PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.3 && x<=2.37 ){ PWM1 = y1*0.97; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.37 && x<=2.44 ){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.44 && x<=2.51 ){ PWM1 = y1*0.95; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.51 && x<=2.58 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.58 && x<=2.65 ){ PWM1 = y1*0.93; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.65 && x<=2.72 ){ PWM1 = y1*0.92; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.72 && x<=2.79 ){ PWM1 = y1*0.91; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.79 && x<=2.86 ){ PWM1 = y1*0.90; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.86 && x<=2.93 ){ PWM1 = y1*0.91; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.93 && x<=3 ){ PWM1 = y1*0.92; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3 && x<=3.07 ){ PWM1 = y1*0.93; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.07 && x<=3.14 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.14 && x<=3.21 ){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.21&& x<=3.28 ){ PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.28 && x<=3.9 ){ PWM1 = y1*0.99; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x>3.9 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}}
    


   if (q3==1){
              PWM=PWM1-42;
               PWM1 = y1*1.01; analogWrite(5,PWM);analogWrite(6,PWM1);}
      
      
   if (q10==1){
          PWM=PWM1-42;
        if (x<=2 ) { y = y1-42;analogWrite(6,y1);analogWrite(5,y);}
        if (x >2 && x<=2.05 )    {PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.05 && x<=2.10){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.10 && x<=2.15 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.15 && x<=2.20 ){ PWM1 = y1*0.92; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.20 && x<=2.25 ){ PWM1 = y1*0.90; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.25 && x<=2.30 ){ PWM1 = y1*0.89; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.30 && x<=2.35 ){ PWM1 = y1*0.88; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.35 && x<=2.40 ){ PWM1 = y1*0.87; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.40 && x<=2.45 ){ PWM1 = y1*0.86; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.45 && x<=2.50 ){ PWM1 = y1*0.85; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.50 && x<=2.55 ){ PWM1 = y1*0.86; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.55 && x<=2.60 ){ PWM1 = y1*0.87; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.60 && x<=2.65 ){ PWM1 = y1*0.88; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.65 && x<=2.70 ){ PWM1 = y1*0.89; analogWrite(5,PWM);analogWrite(6,PWM1);} 
        if (x >2.70 && x<=2.75 ){ PWM1 = y1*0.90; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.75 && x<=2.80 ){ PWM1 = y1*0.91; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.80 && x<=2.85 ){ PWM1 = y1*0.92; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.85 && x<=2.90 ){ PWM1 = y1*0.93; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.90 && x<=2.95 ){ PWM1 = y1*0.94; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >2.95 && x<=3 ){ PWM1 = y1*0.95; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3 && x<=3.05 ){ PWM1 = y1*0.96; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.05 && x<=3.1 ){ PWM1 = y1*0.97; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.1 && x<=3.15 ){ PWM1 = y1*0.98; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x >3.15 && x<=3.90 ){ PWM1 = y1*0.99; analogWrite(5,PWM);analogWrite(6,PWM1);}
        if (x>3.90 ){  PWM1 = y1*1; analogWrite(5,PWM);analogWrite(6,PWM1);}
        }
 // Serial.println(PWM); Serial.println(PWM1);
  }
