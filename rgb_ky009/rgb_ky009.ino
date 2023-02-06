int redpin = 12;  //D6
int greenpin = 14; //D5
int bluepin = 13; //D7

void setup (){ 
  // Initialisierung Ausgangspins für die LEDs 
  pinMode (redpin, OUTPUT);  
  pinMode (greenpin, OUTPUT); 
  pinMode (bluepin, OUTPUT);  
} 

void loop (){ //Hauptprogrammschleife 
  //digitalWrite (redpin, HIGH); 
  digitalWrite (greenpin, HIGH); 
  //digitalWrite (bluepin, HIGH); 
  //delay (3000); 
} 
