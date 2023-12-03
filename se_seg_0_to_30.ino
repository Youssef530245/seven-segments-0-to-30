int pinA = 13;
int pinB = 12;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 8;
int pinG = 7;

int pina = 6;
int pinb = 5;
int pinc = 4;
int pind = 3;
int pine = 2;
int pinf = 1;
int ping = 0;

int t = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);

     //the second segment

  pinMode(pina, OUTPUT);
  pinMode(pinb, OUTPUT);
  pinMode(pinc, OUTPUT);
  pinMode(pind, OUTPUT);
  pinMode(pine, OUTPUT);
  pinMode(pinf, OUTPUT);
  pinMode(ping, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  //0
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);
  
  //0
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,0);
  digitalWrite(ping,1);
  delay(t);

  //1
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
  delay(t);


  //2
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,1);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);


  //3
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);


  //4
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);


  //5
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

  //6
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

  //7
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
  delay(t);

  //8
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

  //9
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

/////////////////////////////////////////////////y

  //10
  //0
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);

  //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);
  delay(t);

/////////////////////////////////////////////////y

  //11

  //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);


  //1
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);

  delay(t);

/////////////////////////////////////////////////y
  //12

  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);

  //2
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,1);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);

/////////////////////////////////////////////////y

  //13

  //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);


  //3
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);

/////////////////////////////////////////////////y

  //14
  //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);
  

  //4
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

  /////////////////////////////////////////////////y
  
  //15

   //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);

  //5
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

/////////////////////////////////////////////////y

//16

//1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);
  

   //6
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

///////////////////////////////////////////////y

  //17

  //1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);



  //7
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
  delay(t);
 
///////////////////////////////////////////////y
//18
//1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);


  //8
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

///////////////////////////////////////////////y
//19
//1
  digitalWrite(pina,1);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,1);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,1);
  //9
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);


  ///////////////////////////////////////////////y

  //20
  //0
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);
  
  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
  delay(t);

    ///////////////////////////////////////////////y
  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
  

   //1
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
  delay(t);


  ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
  
   //2
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,1);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);



  ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
  

   //3
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
  delay(t);


  ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
  
  //4
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);




  ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);

   //5
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);
  

  ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);
 

  
  //6
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

  ///////////////////////////////////////////////y
   //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);


  //7
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
  delay(t);


    ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);

  //8
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);

    ///////////////////////////////////////////////y

  //2
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,1);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);

  //9
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
  delay(t);


  ///////////////////////////////////////////////y
  //30
  //3
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,0);
  digitalWrite(pine,1);
  digitalWrite(pinf,1);
  digitalWrite(ping,0);

  //0
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);
  delay(t);
  
    ///////////////////////////////////////////////y
    //00
   //0
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);
  

  //0
  digitalWrite(pina,0);
  digitalWrite(pinb,0);
  digitalWrite(pinc,0);
  digitalWrite(pind,0);
  digitalWrite(pine,0);
  digitalWrite(pinf,0);
  digitalWrite(ping,1);
  delay(t);

      //////////////// the end from 0 to 30 that's enough ///////////////////////////////





}
