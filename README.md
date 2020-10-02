Este é um repositório para dar um exemplo concreto de uso Google Test numa implementação da função fatorial. Primeiro instale a biblioteca clonando o [repositório](https://github.com/google/googletest) e rodando os seguintes comandos:

```bash
googletest$ mkdir build
googletest$ cd build
googletest/build$ cd build
googletest/build$ cmake ..
googletest/build$ make
googletest/build$ sudo make install
```

Agora compile e rode os testes

```bash
hello_googletest$ make
hello_googletest$ ./tests
```

Por último leia o [primer](https://github.com/google/googletest/blob/master/googletest/docs/primer.md) e os arquivos `tests.cpp` e o `Makefile` para entender o que está acontecendo.
