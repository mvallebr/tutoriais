
## Projeto 1 - instalar virtual env e uma biblioteca

* Objetivo: criar um virtual env e instalar a biblioteca moviepy nele
* Criterio de aceitacao: o projeto estarah completo quando for possivel executar o python no prompt de comando e entrar `from moviepy.editor import *` sem dar erro

### Passos

As perguntas ou passos a seguir devem ser respondidas / executados em ordem.

* Descobrir para que serve o comando pip
* Descobrir como funcionam virtualenvs e para que servem. http://docs.python-guide.org/en/latest/dev/virtualenvs/
* Por que usar virtual envs? Eh possivel usar pip sem usar virtual env?
* Instalar virtualenv no computador
* Criar um virtual env, ativa-lo e instalar a biblioteca moviepy nele http://zulko.github.io/moviepy/install.html


## Projeto 2 - Aprender a usar o arg parse

* Objetivo: Aprender a usar a lib built-in arg parse
* Criterio de aceitacao: deve ser possivel rodar um script python na linha de comando passando argumentos e chamando funcoes diferentes de acordo com os argumentos passados

### Passos

As perguntas ou passos a seguir devem ser respondidas / executados em ordem.

* Ler https://docs.python.org/3/library/argparse.html
* Criar um script com funcao main
* criar uma funcao chamada `parse_args()` que receba os argumentos de linha de comando: arquivo_video, arquivo_legenda, arquivo_saida e retorne uma variavel com os valores dos argumentos
* criar uma funcao `add_subtitles` com os mesmos 3 argumentos
* chamar a funcao `parse_args()` e entao chamar a funcao `add_subtitles()` passando os argumentos retornados pela primeira funcao
* Caso os argumentos nao tenham sido informados, uma mensagem de erro deve ser exibida para o usuario
* Caso os argumentos tenham sido informados corretamente, o scrit deve imprimir "Adding subtitles {} to video {}. Outputing to: {}"
* Adicionar uma verificacao adicional - caso os argumentos tenham sido informados mas o arquivo de entrada nao exista, imprimir uma mensagem de erro. Para saber se os arquivos existem, verifique essa lib built-in: https://docs.python.org/2/library/os.path.html - procure no google pra ver como usa

## Projeto 3 - Adicionar legendas em um video usando python

* Objetivo: aprender a usar a lib moviepy completando o programa do projeto 2
* Criterio de aceitacao: deve ser possivel rodar um script python na linha de comando passando o nome do arquivo de video como argumento, um arquivo de legendas e transforma-lo em um video com legendas.

### Passos

As perguntas ou passos a seguir devem ser respondidas / executados em ordem.

* Fazer download do video http://www.sample-videos.com/video/mp4/480/big_buck_bunny_480p_1mb.mp4 para a pasta do projeto - sera usado nos testes
* Ler http://zulko.github.io/moviepy/getting_started/quick_presentation.html
* Criar um arquivo SRT simples que adicione algumas legendas ao filme acima - um arquivo .SRT pode ser criado no notepad++ ou mesmo no pycharm, o formato eh bem simples: https://matroska.org/technical/specs/subtitles/srt.html
* Instalar pysrt com pip para que seu programa consiga ler legendas SRT - https://pypi.python.org/pypi/pysrt
* Queremos implementar a funcao `add_subtitles`. Para isso, o primeiro passo eh criar uma funcao `read_srt` que leia o arquivo SRT e armazene as legendas em variaveis na memoria. Definir a assinatura dessa funcao.
* Implementar a funcao `read_srt` usando a lib pysrt
* Implementar a funcao `add_subtitles` usando a funcao criada e a lib moviePy
* Testar o programa de no arquivo de video acima com a legenda criada acima

## Projeto 4 - Adicionando testes para a programa criado

* Objetivo: aprender a usar testes unitarios em python
* Criterio de aceitacao: Devem existir testes unitarios para as funcoes `read_srt` e `add_subtitles`

### Passos

As perguntas ou passos a seguir devem ser respondidas / executados em ordem.

* Ler a secao "Basic Example" - https://docs.python.org/2/library/unittest.html#basic-example
* Criar um arquivo test_[nome do seu programa].py na pasta do projeto
* Adicionar uma classe de teste com os metodos `setUp` e `teadDown` sem nenhum metodo de teste. Nesses 2 metodos, adicionar um print em cada com o nome do metodo.
* Executar os testes - https://docs.python.org/2/library/unittest.html#command-line-interface - nenhum metodo serah executado, jah que nao temos testes ainda
* Adicionar um metodo de teste para a funcao read_srt 
* Executar os testes e ter certeza que o teste adicionado estah passando
* Adicionar um metodo de teste para a funcao add_subtitles
* Executar os testes e ter certeza que todos estao passando


## Projeto 5 - Usando logging

* Objetivo: aprender a usar geracao de logs com python
* Criterio de aceitacao: Todos os prints devem ter sido substituidos por logs e deve existir mais de um nivel de log no programa

### Passos

As perguntas ou passos a seguir devem ser respondidas / executados em ordem.

* Ler https://docs.python.org/2/howto/logging.html#logging-basic-tutorial
* Substituir todos os prints to programa por logging.info
* Executar o programa e verificar que as mensagens ainda sao impressas
* Adicionar algumas mensagens com `logging.debug`
* Executar o programa e verificar que as mensagens de INFO sao impressas, mas as de DEBUG nao
* Adicionar um argumento de linha de comando `log_level` ou `-l` que pode ser `ERROR`, `INFO` ou `DEBUG`
* Se um argumento com valor diferente for dado, o programa deve imprimir um erro
* Adicionar um argumento de linha de comando `log_file` opcional - ele pode ser especificado ou nao
* Adicione uma funcao `configure_logging` que recebe o nivel de log e o nome de arquivo. O nome de arquivo pode ser None. Chamar essa funcao a partir dos argumentos dados
* Implementar a funcao `configure_logging`. Essa funcao deve configurar o logging com o nivel fornecido. Se nao for fornecido um arquivo, deve ser impresso log na saida padrao (na tela). Se for fornecido um arquivo, o log deve ser impresso TAMBEM para um arquvivo.














