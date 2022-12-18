// C++ code
//

int ledPin[17] = {13,12,11,10,9,8,7,6,5,4,3,2,1,0,14,15,16};

int b[7][17] = {{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0},
{0,0,1,0,0,0,1,1,0,0,1,0,0,0,1,0,1},
{0,0,1,0,0,1,0,1,0,0,1, 0, 0, 0,1, 0, 1},
{0,0,0,1,0,0,0,0,0,0,0,1,0,1,0,0,1},
{0,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,1},
{1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},
};

// Creating array of inputs indices (0,3,7,38,61,80)
 
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  for(int i = 0; i <= 6; i++){
    for(int j=0; j<=16; j++){
      if(b[i][j] == 1){
        digitalWrite(ledPin[j], HIGH);
      };
    } 
    
    delay(1000);
    for(int j=0; j<=16; j++){
        digitalWrite(ledPin[j], LOW);
    }
    delay(200);
  }
}
