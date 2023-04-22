#include <Arduino.h>

void setup() {

}

void loop() {  
    
    String nome;
    Serial.print("Digite o seu nome: ");
    while (!Serial.available());
    nome = Serial.readStringUntil('\n');
    nome.trim(); // Remove os caracteres de quebra de linha }


 // Condições if e if-else aninhadas
    if (idade >= 18) {
        if (temFilhos) {
            Serial.println("Você é maior de idade e tem filhos.");
        } else {
            Serial.println("Você é maior de idade, mas não tem filhos.");
        }
    } else {
        Serial.println("Você é menor de idade.");
    }



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
