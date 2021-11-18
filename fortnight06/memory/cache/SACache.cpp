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

#include "SACache.h"

using namespace std;


SACache::SACache(int size, int lineSize, int associativity) : Cache::Cache(size,lineSize,associativity) {

	// TODO
	// 1. Validar os argumentos:
	//		associativity, lineSize e size s�o potencia de 2?
	//		size = m�ltiplo de lineSize * associativity?
	bool validArgs = false;
	if (!validArgs) {
		throw "Bad FACache initialization. Invalid arguments.";
	}

	// TODO
	// 2. Calcular e inicializar atributo numSets
	// 3. Calcular e inicializar atributo numLines
	// 4. Alocar numSets FACache(size,lineSize) e colocar em um vetor
}

SACache::~SACache() {
	// TODO
	// 1. Fazer 'delete' para toda a mem�ria alocada	
}


//~ //Implementar uma fun��o ou m�todo
//~ //SACache createSACache(int c, int a, int l);
//~ //onde SACache � o tipo de dado (struct ou classe) que representa uma cache associativa por conjuntos com capacidade total de c bytes, associatividade a e l bytes por linha. � obrigat�rio que c, a e l sejam inteiros pot�ncias de 2 e que c seja um m�ltiplo de a*l (testar a corretude da entrada e informar o erro, caso exista, � condi��o b�nus).
//~ //Cada conjunto da SACache deve ser uma TACache e, portanto, createSACache deve chamar createTACache.
//~ //Implementar tamb�m as seguintes fun��es ou m�todos de acesso a informa��es sobre o SACache:
//~ int getSACacheCapacity(SACache sac);
//~ int getSACacheLineSize(SACache sac);
//~ que retornam, respectivamente, a capacidade e o tamanho da linha da cache associativa por conjuntos sac.
//~ Implementar a seguinte fun��o ou m�todo de acesso a dados da cache:
	//~ bool getSACacheData(SACache sac, int address, int * value);
//~ que busca o valor do endere�o address na cache associativa por conjuntos sac. O valor � retornado no par�metro de sa�da value e o m�todo ou fun��o retorna true, se o endere�o foi encontrado na cache (hit) ou false, sen�o (miss). A verifica��o dos bits de lookup do endere�o address para extrair o n�mero do conjunto deve ser feita com o uso de operadores l�gicos.
//~ Implementar a seguinte fun��o ou m�todo de acesso a dados da cache:
	//~ void setSACacheLine(SACache tac, int address, int *line);
//~ que escreve toda a linha line, que cont�m o endere�o address, na cache associativa por conjuntos sac, usando setTACacheLine da TACache.
//~ Implementar a seguinte fun��o ou m�todo de acesso a dados da cache:
	//~ bool setSACacheData(SACache sac, int address, int value);
//~ que grava o valor value, do endere�o address, na cache associativa por conjuntos sac, utilizando setTACacheData da TACache, e com o mesmo padr�o de retorno de setTACacheData.
//~ Implementar a fun��o
//~ SACache duplicateSACache(SACache sac);

