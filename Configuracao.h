
//Numero de corpos com gravidade no cen�rio
const static int Numero_De_Corpos = 50;

//Distribui��o dos corpos aleat�rio. 1 > ou < -1 = Tamanho do cen�rio. 0 = Centro
const static double Distribuicao_Dos_Corpos = 0.1;

//Massa/Peso dos corpos
const static int Massa_Maxima_Dos_Corpos = 10;
const static int Massa_Minima_Dos_Corpos = 5;

//1 = 60 ticks por segundo, 0.5 = 30 ticks por segundo
const static double Time_Warp_Inicial = 1; //M�nimo: 0.05

//Multiplicador da velocidade X e Y da camera
const static double Velocidade_Da_Camera = 10; //Padr�o: 10

//"Luzes" faz um efeito de luz de cores aleat�rias nos corpos.
//"Luzes_E_Sombras" efeito de luz com as sombras de acordo com as posi��es das paredes
//Escolha somente 1! :) Caso contr�rio o codigo s� vai considerar Luzes_E_Sombras
const bool Luzes = false;
const bool Luzes_E_Sombras = true;

//Mover os objetos com o mouse, segurando o bot�o esquerdo do mouse
const bool Controles_Do_Mouse = true;
