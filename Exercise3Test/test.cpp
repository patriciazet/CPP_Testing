#include "pch.h"

#include"../Exercise3/Triangle.h"

TEST(TriangleAreaTest, getArea_ValidTriangle_Calculated) 
{
	Triangle triangle(3, 4, 5); // tworze obiekt trojkat z poprawnymi danymi
	EXPECT_DOUBLE_EQ(triangle.getArea(), 6);
  
}

TEST(TriangleAreaTest, getArea_InvalidTriangle_Calculated)
{
	Triangle triangle(1, 2, 4); // tworze obiekt trojkat z niepoprawnymi danymi
	EXPECT_DOUBLE_EQ(triangle.getArea(), 0);

}

TEST(TrianglePerimeterTest, getPerimeter_ValidTriangle_Calculated)
{
	Triangle triangle(3, 4, 5); 
	EXPECT_DOUBLE_EQ(triangle.getPerimeter(), 12);

}

TEST(TrianglePerimeterTest, getPerimeter_InvalidTriangle_Calculated)
{
	Triangle triangle(1, 2, 3);
	EXPECT_DOUBLE_EQ(triangle.getPerimeter(), 0);
}

TEST(TriangleValidationTest, isValid_ValidTriangle_ReturnsTrue)
{
	Triangle triangle(3, 4, 5);
	EXPECT_TRUE(triangle.isValid());
}

TEST(TriangleValidationTest, isValid_InvalidTriangle_ReturnsFalse)
{
	Triangle triangle(1, 2, 3);
	EXPECT_FALSE(triangle.isValid());
}