set terminal pdf enhanced
set output "Gráficos.pdf"


#------Sen(3x)
set xrange[-5:5]
set yrange[-1.5:1.5]
set title "Sen(3x)"
set xlabel "Intervalo de x: [-3.14,3.14]"
plot "pontossin3x.dat" lt 4
reset

set xrange[-0.3:0.3]
set yrange[-0.5:0.5]
set title "Transformada de Sen(5x)"
plot "akbksin3x.dat" lt 3
reset


#----Sen(5x)
set xrange[-5:5]
set yrange[-1.5:1.5]
set title "Sen(5x)"
set xlabel "Intervalo de x: [-3.14,3.14]"
plot "pontossin5x.dat" lt 4
reset

set xrange[-0.3:0.3]
set yrange[-0.5:0.5]
set title "Transformada de Sen(5x)"
plot "akbksin5x.dat" lt 3
reset


#-------Sen(5x)+Sen(3x)
set xrange[-5:5]
set yrange[-2:2]
set title "Sen(3x)+Sen(5x)"
set xlabel "Intervalo de x: [-3.14,3.14]"
plot "pontossin3x+sin5x.dat" lt 4
reset

set xrange[-0.5:0.5]
set yrange[-0.5:0.5]
set title "Transformada de Sen(3x)+Sen(5x)"
plot "akbksin3x+sin5x.dat" lt 3
reset


#-------Sen(5x)*Sen(3x)
set xrange[-5:5]
set yrange[-2:2]
set title "Sen(3x)*Sen(5x)"
set xlabel "Intervalo de x: [-3.14,3.14]"
plot "pontossin3xsin5x.dat" lt 4
reset

set xrange[-0.5:0.5]
set yrange[-0.5:0.5]
set title "Transformada de Sen(3x)*Sen(5x)"
plot "akbksin3xsin5x.dat" lt 3
reset

# ------------------------------------------------------------------------------------------------------------------------------------------


#------------Gráfico dos números aleatórios gerados
set xrange[-4:4]
set yrange[-2:2]
set title "Números aleatórios gerados"
set xlabel "Intervalo de x: [-3.14,3.14]"
set ylabel "Intervalo de y: [-1,1]"
plot "pontosnx.dat" lt 4
reset

set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
set title "Transformada da série gerada"
plot "akbknx.dat" lt 3
reset


#------------Sen(5x) + n(x)
set xrange[-4:4]
set yrange[-2:2]
set title "Gráfico de f(x) = sen(5x) + N(x)"
plot "pontossin5x+nx.dat" lt 4
reset

set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
set title "Transformada"
plot "akbksin5x+nx.dat" lt 3
reset


#------------Sen(5x)* n(x)
set xrange[-4:4]
set yrange[-2:2]
set title "Gráfico de f(x) = sen(5x)*N(x)"
plot "pontossin5xnx.dat" lt 4
reset

set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
set title "Transformada"
plot "akbksin5xnx.dat" lt 3
reset


# ------------------------------------------------------------------------------------------------------------------------------------------

#------------------Gráfico do piano.txt
set xrange[-1000:1000]
set yrange[-2000:2000]
set title "Dados piano.txt"
plot "piano1024.txt" lt 4
reset

set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
set title "Transformada"
plot "akbkpiano.txt" lt 3
reset



set output

