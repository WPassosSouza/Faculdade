#!/bin/bash

echo "==================================================================="
echo "Iniciando a Instalação do Visual Code"
echo "Iniciando o WGET (Baixando o Pacote do Instalador)"
sudo wget "https://go.microsoft.com/fwlink/?LinkID=760868" -O vscode.deb
echo " Validando o Pacote (Instalando o VSCODE)"
sudo dpkg -i vscode.deb
echo "Corrigindo algum pacote do Instalador"
sudo apt install -f
sudo dpkg --configure -a
echo "FIM!!!"
echo"====================================================================="