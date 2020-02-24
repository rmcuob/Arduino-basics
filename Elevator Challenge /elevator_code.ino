int button1 = 3;
int button2 = 4;
int button3 = 5;
int led1 = 10;
int led2 = 11;
int led3 = 12;
int buzzpin = 8;
void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  digitalWrite(led1, HIGH); //start at floor 1
  Serial.begin(9600);
}

void loop(){

  // check if button 2 is pressed
  if(digitalRead(button2)==1){ 
    //action will be based on which led was on
    if(digitalRead(led1)==HIGH){
    	digitalWrite(led1, LOW);
      	delay(2000);
      	digitalWrite(led2, HIGH);
        buzzer();
    }else if(digitalRead(led3)==HIGH){
      	digitalWrite(led3, LOW);
      	delay(2000);
      	digitalWrite(led2, HIGH);
        buzzer();
    }
  }
  // check if button 1 is pressed
  else if(digitalRead(button1)==1){
  	if(digitalRead(led2)==HIGH){
    	digitalWrite(led2, LOW);
      	delay(2000);
      	digitalWrite(led1, HIGH);
    }else if(digitalRead(led3)==HIGH){
      	digitalWrite(led3, LOW);
      	delay(2000);
      	digitalWrite(led2, HIGH);
        delay(2000);
        digitalWrite(led2, LOW);
        delay(2000);
      	digitalWrite(led1, HIGH);
    }
  }
  //check if button 3 is pressed
  else if(digitalRead(button3)==1){
  	if(digitalRead(led2)==HIGH){
    	digitalWrite(led2, LOW);
      	delay(2000);
      	digitalWrite(led3, HIGH);
  	}else if(digitalRead(led1)==HIGH){
      	digitalWrite(led1, LOW);
      	delay(2000);
      	digitalWrite(led2, HIGH);
        delay(2000);
        digitalWrite(led2, LOW);
        delay(2000);
      	digitalWrite(led3, HIGH);
    }
    
  }
}

void buzzer(){
 tone(buzzpin,261,1000); //pin, freq, duration(in milliseconds)
 delay(1000);
 tone(buzzpin,330,1000);
  
}