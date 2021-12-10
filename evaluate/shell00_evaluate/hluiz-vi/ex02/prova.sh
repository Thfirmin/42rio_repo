tar -xf exo2.tar
ls -l
echo 'drwx--xr-x  2 XX   XX      XX Jun  1 20:47 test0'
echo '-rwx--xr--  1 XX   XX       4 Jun  1 21:46 test1'
echo 'dr-x---r--  2 XX   XX      XX Jun  1 22:45 test2'
echo '-r-----r--  2 XX   XX       1 Jun  1 23:44 test3'
echo '-rw-r----x  1 XX   XX       2 Jun  1 23:43 test4'
echo '-r-----r--  2 XX   XX       1 Jun  1 23:44 test5'
echo 'lrwxr-xr-x  1 XX   XX       5 Jun  1 22:20 test6 -> test0'
#rm -rf test{0..6}
