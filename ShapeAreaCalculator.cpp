#include <iostream> // required for input/output operations like 'std::cout' and 'std::cin'
#include <string> // required for string manipulation used for 'std::string' variables

/*
 * Course: ECNG 1009
 * Assignment: Shape Area Calculator
 * Date: June 26, 2025
 * Author: megan2807
 *
 * This program calculates the area of various geometric shapes based on user input.
 * The user is prompted to select a shape (square, rectangle, circle, or triangle)
 * and then provide the necessary dimensions (e.g., length, width, radius, base, height).
 * The calculated area is then displayed to the console.
 *
 * IMPORTANT: This code is my original work for academic purposes.
 * It is licensed under the MIT License (see LICENSE file in the repository).
 * Unauthorized use or submission as one's own work without proper attribution
 * for academic credit is a violation of academic integrity policies.
 *
 * Full source code and licensing details available at:
 * https://github.com/megan2807/ShapeAreaCalculator
 */

 /*
  * The main entry point of the program.
  *
  * This function handles user interaction for selecting a shape, collecting
  * the necessary dimensions, calculating the area, and displaying the result.
  * It uses an if-else if-else structure to handle different shape calculations.
  */


int main() {

	// Declare variables to store user input and calculated areas.

	std::string shape; // To store the name of the shape selected by the user.
	int sqLength; // To store the side length of a square.
	int sqArea; // To store the calculated area of a square.

	int recLength; // To store the length of a rectangle.
	int recWidth; // To store the width of a rectangle.
	int recArea; // To store the calculated area of a rectangle.

	int cirRadius; // To store the radius of a circle.
	float cirArea; // To store the calculated area of a circle
	const float pi = 3.142; // Declaring pi as a constant float to ensure precision for circle calculations.

	int triBase; // To store the base of a triangle.
	int triHeight; // To store the height of a triangle.
	float triArea; // To store the calculated area of a triangle

	// Prompt the user to select a shape.
	std::cout << "Please select a shape (square, rectangle, circle, triangle): ";
	std::cin >> shape; // Read the user's shape selection.

	// --- Shape Area Calculation Logic ---
	// Use an if-else if-else if-else structure to process the user's shape choice.
	// This ensures only one block of code is executed based on the first matching condition.

	if (shape == "square") {

		// If the user selected 'square'.
		std::cout << "What is the length of one side in meters? ";
		std::cin >> sqLength; // Read the side length.

		sqArea = sqLength * sqLength; // Calculate the area of the square.
		std::cout << "The area of your shape is: " << sqArea << " square meters" << std::endl;
	}



	 else if (shape == "rectangle") {

		// If the user selected 'rectangle'.
			std::cout << "What is the length in meters? ";
			std::cin >> recLength; // Read the length.

			std::cout << "What is the width in meters? ";
			std::cin >> recWidth; // Read the width.

			recArea = recLength * recWidth; // Calculate the area of the rectangle.
			std::cout << "The area of your shape is: " << recArea << "square meters" << std::endl;
		}

	 else if (shape == "circle") {

		// If the user selected 'circle'.
		 std::cout << "What is the radius in meters? ";
		 std::cin >> cirRadius; // Read the radius.


		 cirArea = (pi) * (cirRadius) *(cirRadius); // Calculate the area of the circle 
		 std::cout << "The area of your shape is: " << cirArea << "square meters" << std::endl;
	 }

	 else if (shape == "triangle") {

		// If the user selected 'triangle'.
		 std::cout << "What is the height in meters? ";
		 std::cin >> triHeight; // Read the height.

		 std::cout << "What is the base in meters? ";
		 std::cin >> triBase; // Read the base.

		 triArea = (0.5) * (triBase) * (triHeight) ; // Calculate the area of the triangle
		 std::cout << "The area of your shape is: " << triArea << "square meters" << std::endl;
	 }

	 else {
		// If the user's input does not match any of the recognized shapes.
		 std::cout << "Please select a shape from the options provided :(" << std::endl;
	 }

	return 0; // Indicate that the program executed successfully.
}