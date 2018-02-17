cmake_minimum_required(VERSION 3.9)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp Alumno.h Alumno.cpp Profesor.h Profesor.cpp Persona.h Persona.cpp Materia.h Materia.cpp Horario.h Horario.cpp FormatoHora.cpp FormatoHora.h)