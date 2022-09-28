#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

TEST(funciones, numeroIMC) {
	ASSERT_FLOAT_EQ(calcularIMC(57,1.63), 23.1);
	ASSERT_FLOAT_EQ(calcularIMC(0,0.0), -1);
	ASSERT_FLOAT_EQ(calcularIMC(65,0.0), -1);
	ASSERT_FLOAT_EQ(calcularIMC(0,1.76), -1);
}

// No sabemos como testear una funcion que es void porque
//por la pag de gtesting, nos decía como testear los string, 
//sin embargo como no devuelve un strg desconocemos. Esperamos que nos puedas ayudar

