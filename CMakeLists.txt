cmake_minimum_required(VERSION 3.23)
project(Algorithme_et_Prog_en_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(TP)
include_directories(Structure)

add_executable(Algorithme_et_Prog_en_C
    .idea/Algorithme-et-Prog-en-C.iml
    .idea/modules.xml
    .idea/vcs.xml
    .idea/workspace.xml
    TP/TP1.c
        TP/TP2.c
        TP/TP3.c
        TP/TP4.c
        TP/TP5.c
        TP/TP_Bonus.c TP
        Structure/Exercice1.c
        Structure/Exercice2.c
        Structure/Exercice3.c
        Structure/Exercice4.c
        Controle/exercice1.c
        Controle/exercice2.c
        Controle/exercice3.c)
