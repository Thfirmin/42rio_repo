#!/bin/sh
#
# Exercicio 04: GiT commit
# Programa shell que retorne os id dos 5 √∫ltimos commit do seu reposit√io
#

gitCommitLogs=$(/usr/bin/git log -5 --pretty=%H)  		# Obter os logs de commit do git-log limitados a 5 registros mostrando o hash completo
echo "${gitCommitLogs}"						# Imprimir os dados na tela
