//****************Code Developed by Muneeb RDE BrainSwarm****************//
#define frontright_IR A0
#define front_IR A1
#define frontleft_IR 2
#define left_IR A3
#define right_IR A7
#define top_Led 13

  int  frontright_IR_read;
  int  front_IR_read;
  int  frontleft_IR_read;
  int  left_IR_read;
  int  right_IR_read;

int threshold=990;


void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);// Giving the baud rate for the communication,Rx-Tx UART Communication
pinMode(frontright_IR ,INPUT);
pinMode(front_IR,INPUT);
pinMode(frontleft_IR ,INPUT);
pinMode(left_IR ,INPUT);
pinMode(right_IR ,INPUT);
pinMode(top_Led ,OUTPUT);
}

void loop() 
{
int  val=analogRead(A1);
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
  int  frontright_IR_read=analogRead(frontright_IR);
  int  front_IR_read=analogRead(front_IR);
  int  frontleft_IR_read=analogRead(frontleft_IR);
  int  left_IR_read=analogRead(left_IR);
  int  right_IR_read=analogRead(right_IR);

//IR sensor detecting any obstacle and generates an alert by blinking the Led
 
Serial.print("frontright_IR: ");
Serial.print(frontright_IR_read);
Serial.print("\t");
Serial.print("front_IR: ");
Serial.print(front_IR_read);
Serial.print("\t");
Serial.print("frontleft_IR: ");
Serial.print(frontleft_IR_read);
Serial.print("\t");
Serial.print("left_IR: ");
Serial.print(left_IR_read);
Serial.print("\t");
Serial.print("right_IR: ");
Serial.println(right_IR_read);
delay(200);}
}
