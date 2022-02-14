#!/bin/sh
touch ex{00..08}/teste.sh
chmod +x ex{00.08}/teste.sh
echo "#!/bin/sh
cat -e z" > ex00/teste.sh
echo "#!/bin/sh
tar -xf testShell00.tar
ls -l testShell00
rm -rf testShell00" > ex01/teste.sh
echo "#!/bin/sh
tar -xf exo2.tar
ls -dl test{0..6}
rm -rf test{0..6}" > ex02/teste.sh
echo "#!/bin/sh
touch {0,2,4,6,8}
mkdir {1,3,5,7,9}
touch -t 01101010 0 && touch -at 01011010 0
touch -t 01091010 1 && touch -at 01021010 1
touch -t 01081010 2 && touch -at 01031010 2
touch -t 01071010 3 && touch -at 01041010 3
touch -t 01061010 4 && touch -at 01051010 4
touch -t 01051010 5 && touch -at 01061010 5
touch -t 01041010 6 && touch -at 01071010 6
touch -t 01031010 7 && touch -at 01081010 7
touch -t 01021010 8 && touch -at 01091010 8
touch -t 01011010 9 && touch -at 01101010 9
/bin/sh midLS
rm -rf {0..9}" > ex03/teste.sh
echo "#!/bin/sh
echo "1" > teste.txt
git add teste.txt
git commit -m "commit1"
echo "2" > teste.txt
git add teste.txt
git commit -m "commit2"
echo "3" > teste.txt
git add teste.txt
git commit -m "commit3"
echo "4" > teste.txt
git add teste.txt
git commit -m "commit4"
echo "5" > teste.txt
git add teste.txt
git commit -m "commit5"
echo "6" > teste.txt
git add teste.txt
git commit -m "commit6"
/bin/sh git_commit.sh
git reset --hard HEAD~6
rm -rf teste.txt" > ex04/teste.sh
echo "#!/bin/sh
echo -e ".Dswork \nMyDream \n monday.txt" > .gitignore
touch .Dswork monday.txt teste
/bin/sh git_ignore.sh
rm -rf .gitignore .Dswork monday.txt teste" > ex05/teste.sh
echo "#!/bin/sh
cat b" > ex06/teste.sh
echo "#!/bin/sh
touch "~nao" "#nao" "nao#" "~sim" "~sim~" "#sim#"
mkdir "~fase~" "#fase#" fase
cd "~fase~" && touch "~nao" "#nao" "nao#" "~sim" "~sim~" "#sim#"
cd ../ && cd fase
touch "~nao" "#nao" "nao#" "~sim" "~sim~" "#sim#"
cd ..
/bin/sh clean
ls */*
mv clean ../ && rm -rf *
mv ../clean ./" > ex07/teste.sh
echo "#!/bin/sh
echo "1234567890123456789012345678901234567890142" > 42f
file -m ft_magic 42f
rm -rf 42f" > ex08/teste.sh
#rm -rf ex{00..08}/teste.sh
