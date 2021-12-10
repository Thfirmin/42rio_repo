echo "tar -xf testShell00.tar
ls -l
#rm -rf testShell00
echo '-r--r-xr-x 1 XX   XX      40 Jun  1 23:42 testShell00'" > prova.sh
mv prova.sh ex01
echo "tar -xf exo2.tar
ls -l
echo 'drwx--xr-x  2 XX   XX      XX Jun  1 20:47 test0'
echo '-rwx--xr--  1 XX   XX       4 Jun  1 21:46 test1'
echo 'dr-x---r--  2 XX   XX      XX Jun  1 22:45 test2'
echo '-r-----r--  2 XX   XX       1 Jun  1 23:44 test3'
echo '-rw-r----x  1 XX   XX       2 Jun  1 23:43 test4'
echo '-r-----r--  2 XX   XX       1 Jun  1 23:44 test5'
echo 'lrwxr-xr-x  1 XX   XX       5 Jun  1 22:20 test6 -> test0'
#rm -rf test{0..6}" > prova.sh
mv prova.sh ex02
echo "touch aparece{1,3,5}
touch .naoaparece{1,3}
mkdir aparece{2,4,6}
mkdir .naoaparece{2,4}
touch -a aparece1
touch -at 10011010 .naoaparece1
touch -at 10021010 aparece2
touch -at 10031010 .naoaparece2
touch -at 10041010 aparece3
touch -at 10051010 .naoaparece3
touch -at 10061010 aparece4
touch -at 10071010 .naoaparece4
touch -at 10081010 aparece5
touch -at 10091010 aparece6
#rm -rf aparece{1..6}
#rm -rf .naoaparece{1..4}" > prova.sh
mv prova.sh ex03
echo "touch .DS_Store
touch mywork.c
touch test
#rm -rf .gitiginore .DS_Store mywork.c test" > prova.sh
mv prova.sh ex05
echo "mkdir hi 'hi2~'
touch apagar~ '#apagar#'
touch teste2
touch hi/apagar2~
touch hi/'#apagar2#'
touch hi/hi2
touch hi2~/oi
touch hi2~/~app~" > prova.sh
mv prova.sh ex07
echo "echo "aaaaa" > test
echo "1234567890123456789012345678901234567890142" > file_42
echo "空空空空空" > bytfile" > prova.sh
mv prova.sh ex08
