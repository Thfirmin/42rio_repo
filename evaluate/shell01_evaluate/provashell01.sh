echo "touch ola.sh
mkdir fase1
touch fase1/ola2sh.sh
mkdir fase2
mkdir fase2/fase22
touch fase2/fase22/ola_sh.sh
touch shoshlsha_sh.sh" > prova.sh
mv prova.sh ex02
#rm -rf ex02/prova.sh
#rm -rf ola.sh shoshlsha_sh.sh
#rm -rf fase{1,2}
echo "touch a b c d e f g h i j
mkdir a1
touch a1/k
mkdir a2
mkdir a2/a3
touch a2/a3/l" > prova.sh
mv prova.sh ex03
#rm ex03/prova.sh
#rm -rf {a..j}
#rm -rf a{1,2}
#find . -type f \( -name "provashell01.sh" \) -delete -print
