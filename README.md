Para instalar o Google Test clone o [repositório](https://github.com/google/googletest) e rode os seguintes comandos:

```bash
googletest$ mkdir build
googletest$ cd build
googletest/build$ cd build
googletest/build$ cmake ..
googletest/build$ make
googletest/build$ sudo make install
```

Para compilar e rodar os testes faça

```bash
hello_googletest$ make
hello_googletest$ ./tests
```

Para entender o que está acontecendo dê uma olhada no `Makefile`, no `tests.cpp` e no [primer](https://github.com/google/googletest/blob/master/googletest/docs/primer.md).
