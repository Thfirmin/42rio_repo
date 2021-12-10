#!/bin/sh
#
# Exercicio 05: gitignore
# Shell script curto que retornará a lista de arquivos existentes ignorados
# pelo seu repositório git atualmente presentes no seu repositório local 
#

gitRootDir=$(git rev-parse --show-toplevel)								# obten�ao do caminho raiz do projeto atual
listIgnoredFiles=$(find $gitRootDir -type f | git check-ignore --stdin)	# verificacao se sao arquivos ignorados e formatacao do nome
echo "${listIgnoredFiles}"												# imprime lista de arquivos ignorados
