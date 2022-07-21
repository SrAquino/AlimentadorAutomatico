void setup() {
  //Inicia o serial monitor
  Serial.begin(115200);

  //Pinos da relé
  pinMode(13,OUTPUT);
}

//Globais
  //Alimentar a cada quanto tempo (em horas)
  int horadeComer = 8;
  int quantidadeRacao = 10;//Tempo que o motor fica ativado jogando ração
  int horaAtual = 0;//Marca o passar do tempo
  int velocidadedoTempo = 1000;// 1000 = 1seg (velocidade simulada da hora)

void loop() {
  delay(velocidadedoTempo);
  horaAtual++;
  //Serial.print("hora: "+horaAtual);

  if(horaAtual == horadeComer){
    digitalWrite(13,HIGH);
    delay(quantidadeRacao*1000);
    digitalWrite(13,LOW);
  }

  if(horaAtual == 24){
    horaAtual = 0;
  }
  

}
