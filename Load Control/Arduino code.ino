int datafromUser=0;

void setup() {
  // put your setup code here, to run once:
  pinMode( 8 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 10 , OUTPUT );
  pinMode( 11 , OUTPUT );

  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    datafromUser=Serial.read();
  }

  if(datafromUser == '1')
  {
    digitalWrite( 8 , HIGH );
  }
  else if(datafromUser == '2')
  {
    digitalWrite( 8 , LOW);
  }

else if(datafromUser == '3')
  {
    digitalWrite( 9 , HIGH);
  }

else if(datafromUser == '4')
  {
    digitalWrite( 9 , LOW);
  }
// 10
else if(datafromUser == '5')
  {
    digitalWrite( 10 , HIGH);
  }

else if(datafromUser == '6')
  {
    digitalWrite( 10 , LOW);
  }
// 11

else if(datafromUser == '7')
  {
    digitalWrite( 11 , HIGH);
  }

else if(datafromUser == '8')
  {
    digitalWrite( 11 , LOW);
  }

else if(datafromUser == '9')
  {
    digitalWrite( 8 , HIGH);
    digitalWrite( 9 , HIGH);
    digitalWrite( 10 , HIGH);
    digitalWrite( 11 , HIGH);

  }
    



  else if(datafromUser == '0')
  {
    digitalWrite( 8 , LOW);
    digitalWrite( 9 , LOW);
    digitalWrite( 10 , LOW);
    digitalWrite( 11 , LOW);


    
  }




  
  
}
