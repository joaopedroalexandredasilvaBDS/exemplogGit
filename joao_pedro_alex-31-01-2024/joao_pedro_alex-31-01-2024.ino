//declaração de variavel para numeros decimais
float sal_atual, novo_sal;

void setup() {
  // Configuração inicial do sistema
  // Será executada apenas no inicio

  sal_atual = 1200;

  //Verificando o valor do salário com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //inicio
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual * 1.1;
  } else {
    novo_sal = 0;
  }
  //Iniciando a comunicação com o Munitor Serial
  Serial.begin(9600);
}

void loop() {
  //Serial.println("Hoje é o ultimo dia de janeiro!!!");
  if (novo_sal == 0) {
    Serial.println("Digite um salario valido");
  } else {
    Serial.print("Novo Salario:");
    Serial.print(novo_sal);
    Serial.println("------------------------");
  }

  delay(1000);
}