#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

TEST(funciones, numeroIMC) {
	ASSERT_THAT(calcularIMC(57,0), 23.1);
}

// TEST(funciones, numeroresolvente)
// {
// 	ASSERT_THAT(calcularIMC(1,2,1), -1);
// }