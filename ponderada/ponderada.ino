#include <Arduino.h>

void setup() {

}

void loop() {  
    
    String nome;
    Serial.print("Digite o seu nome: ");
    while (!Serial.available());
    nome = Serial.readStringUntil('\n');
    nome.trim(); // Remove os caracteres de quebra de linha }






//Joao ultima parte
  void loop(){
    if (altura>= 1.80){
      Serial.println("Você é alto.");
    }
    else{
      Serial.println("Você não é tao alto");
    }
    Serial.println(nome);
    delay(5000); //5 segundos refaz o loop
  
  }