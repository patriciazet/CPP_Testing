#include "pch.h"
#include "../Exercise10_BarcodeScanner/BarcodeScanner.h"
#include "../Exercise10_BarcodeScanner/Product.h"

class BarcodeScannerFixture : public ::testing::Test
{
protected:
	BarcodeScanner scanner;
};

TEST(ProductConstructorTest, Constuctor_PriceOrBarcodeLowerThan0_ThrowsInvalidArgumentException)
{
	EXPECT_THROW(Product("milk", -6, 567890), std::invalid_argument);
	EXPECT_THROW(Product("yoghurt", 8, -456321), std::invalid_argument);
	EXPECT_THROW(Product("chcolatebar", -3, -786431), std::invalid_argument);
	EXPECT_THROW(Product("tomato", 0, 654321), std::invalid_argument);
	EXPECT_THROW(Product("onion", 2, 0), std::invalid_argument);
}

TEST_F(BarcodeScannerFixture, AddProduct_PutsProductsInVector_VectorOfProductsIsFilled)
{
	EXPECT_EQ(0, scanner.getSizeOfVector());
	scanner.addProduct(Product("chocolate", 2, 45321));
	EXPECT_EQ(1, scanner.getSizeOfVector());
}

TEST_F(BarcodeScannerFixture, AddProduct_GivenBarcodeAlreadyExistsInSystem_ThrowsInvalidArgumentException)
{
	scanner.addProduct(Product("yoghurt", 2, 456789));
	EXPECT_THROW(scanner.addProduct(Product("milk", 4, 4536789)), std::invalid_argument);
}

TEST_F(BarcodeScannerFixture, GetNameAndPrice_IfCorrectDataForGivenBarcode_ReturnsNameAndPrice)
{
	scanner.addProduct(Product("butter", 2, 456789));
	scanner.addProduct(Product("milk", 3, 4536789));
	EXPECT_EQ("butter, 4", scanner.getNameAndPrice(45543));
}

TEST_F(BarcodeScannerFixture, GetNameAndPrice_GivenBarcodeIsNotFound_ThrowsInvalidArgumentException)
{
	scanner.addProduct(Product("butter", 2, 567890));
	scanner.addProduct(Product("chocolatebar", 3, 678904));
	EXPECT_THROW(scanner.getNameAndPrice(9999), std::invalid_argument);
}