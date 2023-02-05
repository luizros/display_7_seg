#define BOTAO 2
#define A_seg 3
#define B_seg 4
#define C_seg 5
#define D_seg 6
#define E_seg 7
#define F_seg 8
#define G_seg 9

int i, k;

int displaySeteSeg[10][8] = { 
 //A B C D E F G
 { 1,1,1,1,1,1,0 },  //DIGITO 0
 { 0,1,1,0,0,0,0 },  //DIGITO 1
 { 1,1,0,1,1,0,1 },  //DIGITO 2
 { 1,1,1,1,0,0,1 },  //DIGITO 3
 { 0,1,1,0,0,1,1 },  //DIGITO 4
 { 1,0,1,1,0,1,1 },  //DIGITO 5
 { 1,0,1,1,1,1,1 },  //DIGITO 6
 { 1,1,1,0,0,0,0 },  //DIGITO 7
 { 1,1,1,1,1,1,1 },  //DIGITO 8
 { 1,1,1,1,0,1,1 }   //DIGITO 9
 
};
  
void setup(){
 
  //Definindo pinos como saída
  pinMode(A_seg, OUTPUT);
  pinMode(B_seg, OUTPUT);
  pinMode(C_seg, OUTPUT);
  pinMode(D_seg, OUTPUT);
  pinMode(E_seg, OUTPUT);
  pinMode(F_seg, OUTPUT);
  pinMode(G_seg, OUTPUT);
  pinMode(BOTAO, INPUT);
}
 
void loop() {
  // Ler o pin
  if(digitalRead(BOTAO)){ 
  // Espera o botao parar de ser pressionado
  while(digitalRead(BOTAO)!=0){}
  // Inicia o contador
  i++;
    for(k = (A_seg); k <=(G_seg+2); k++){
    digitalWrite(k, displaySeteSeg[i][k-A_seg]);
    }
  // deboucing
  delay(200);
  if(i==9){
    i=-1;
  }
  }
}

 
