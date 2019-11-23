set grid ytics
set key left
set title "Analise de Algoritmos"
set xlabel "Eixo x"
set ylabel "Eixo y"
set nokey
set grid
set term post eps enhanced color
f(x)=a*(x**b)+c
fit f(x) "saida_vetor.txt" via a,b,c
set out 'variaveis_aleatorias.eps'
plot 'saida_vetor.txt',\
f(x)
#Fim
