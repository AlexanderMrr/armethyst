/* ----------------------------------------------------------------------------

    (EN) armethyst - A simple ARM Simulator written in C++ for Computer Architecture
    teaching purposes. Free software licensed under the MIT License (see license
    below).

    (PT) armethyst - Um simulador ARM simples escrito em C++ para o ensino de
    Arquitetura de Computadores. Software livre licenciado pela MIT License
    (veja a licen�a, em ingl�s, abaixo).

    (EN) MIT LICENSE:

    Copyright 2020 Andr� Vital Sa�de

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

   ----------------------------------------------------------------------------
*/

#include "Corei7Memory.h"

Corei7Memory::Corei7Memory(int size)
{
	mainMemory = new BasicMemory(size);
	initHierarchy();
}

Corei7Memory::~Corei7Memory()
{
	delete[] mainMemory;
}

/**
 * Inicializa a hierarquia de mem�ria. O ideal seria que este procedimento utilizasse um arquivo de configura��o,
 * que descreveria a organiza��o de toda a hierarquia de mem�ria. Mas, para facilitar, vamos fazer isso hard-coded,
 * ou seja, no c�digo mesmo!
 */
void Corei7Memory::initHierarchy() {
	// TODO
	// Instanciar as caches, observando a Se��o 2.5.4 do documento Intel� 64 and IA-32 Architectures Optimization
	// Reference Manual, Order Number: 248966-033, June 2016, disponibilizado, mas com algumas altera��es
	// apresentadas no enunciado do trabalho.
	//
	// Basicamente:
	// 		l1i: cache de 32KB, 4 vias, linhas de 64B (escrita n�o se aplica)
	// 		l1d: cache de 32KB, 8 vias, linhas de 64B, estrat�gia write-through
	// 		l2: cache de 256KB, 8 vias, linhas de 64B, estrat�gia writeback
}
/**
 * L� uma instru��o de 32 bits considerando um endere�amento em bytes.
 *
 * BasicMemory.cpp implementa a arquitetura de Von Neumman, com apenas uma
 * mem�ria, que armazena instru��es e dados.
 */
uint32_t Corei7Memory::readInstruction32(uint64_t address)
{
	return mainMemory->readInstruction32(address);
}

/**
 * Retorna o ponteiro para o in�cio da mem�ria.
 */
char *Corei7Memory::getData() {
	return mainMemory->getData();
}

/**
 * L� um dado de 32 bits considerando um endere�amento em bytes.
 */
uint32_t Corei7Memory::readData32(uint64_t address)
{
	return mainMemory->readData32(address);
}

/**
 * L� um dado de 64 bits considerando um endere�amento em bytes.
 */
uint64_t Corei7Memory::readData64(uint64_t address)
{
	return mainMemory->readData64(address);
}

/**
 * Escreve uma instru��o de 32 bits considerando um
 * endere�amento em bytes.
 */
void Corei7Memory::writeInstruction32(uint64_t address, uint32_t value)
{
	mainMemory->writeInstruction32(address,value);
}

/**
 * Escreve um dado (value) de 32 bits considerando um endere�amento em bytes.
 */
void Corei7Memory::writeData32(uint64_t address, uint32_t value)
{
	mainMemory->writeData32(address,value);
}

/**
 * Escreve um dado (value) de 64 bits considerando um endere�amento em bytes.
 */
void Corei7Memory::writeData64(uint64_t address, uint64_t value)
{
	mainMemory->writeData64(address,value);
}
