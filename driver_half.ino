#include "Ultrasonic.h"

// нужно добавить код сюда
int state = 1; // ставьте 0 если хотите управлять машинкой с телефона

Ultrasonic ultrasonic(12, 13); 

void setup(){
  Serial.begin(9600);
  // нужно добавить код сюда
}

void loop(){
  
  
  if (Serial.available()){
    int val;
    val = Serial.read();
    if(val == 'R'){
      Serial.println("Run the machine");
      state = 1;
    }else if(val == 'S'){
      state = 0;
    }
  }
  
  if(state == 1){
    float dist_cm = ultrasonic.Ranging(CM);
    
    if(){
  // нужно добавить код сюда
      
    }else{
  // нужно добавить код сюда
      
      delay(500); 
    }
    delay(100); 
  }
}
