Tema Principal: "Git"

Observação:
> O projeto teve como finalidade incitar a praxe do uso do git\github,
> realizando as principais funções do git.

Explicação:
> Primeiro criamos uma conexão ssh da seguinte forma;
> Uma chave ssh é gerada (possuem mais de um tipo como rsa ou ed25519 que pode ser definido na hora sando -t);
> O conteúdo da chave publica (key.pub) é copiado e enviado para o servidor remoto;
> Depois usamos a configuração -p para acessar o servidor estabelecido pela conexão;
> Dentro do servidor clonamos o repositório git usando o git clone;
> Dentro do repositório baixamos o arquivo aceito.txt da web usando o wget;
> Adicionamos o arquivo aos arquivos rastreados do git usando o git add;
> Criamos um snapshot do arquivo usando o git commit (se utilizado o -m "<commit>" o commit entra em formato simples);
> realizamos uma atualização do repositório usando o git push;