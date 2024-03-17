# Temperature Converter

My C++ program provides a user-friendly interface to convert temperatures between Celsius, Fahrenheit, and Kelvin.

## Features
- Converts Celsius to Fahrenheit
- Converts Fahrenheit to Celsius
- Converts Celsius to Kelvin
- Converts Kelvin to Celsius
- Converts Fahrenheit to Kelvin
- Converts Kelvin to Fahrenheit

## Usage

### Prerequisites

Make sure you have a C++ compiler installed on your system. For macOS, Xcode Command Line Tools include the necessary compiler. For Windows, you can use MinGW or Visual Studio.

### Running on macOS

1. Clone the repository to your local machine:
```git
git clone https://github.com/polikhronidi/CelsiusFahrenheitConverter.git
```
2. Navigate to the directory containing the source code:
```bash
cd temp-converter
```
3. Compile the program using a C++ compiler. You can use the `g++` command:
```bash
g++ temp_conversion.cpp -o temp_converter
```
4. Run the executable:
```bash
./temp_converter
```
5. Follow the on-screen instructions to perform temperature conversions.

### Running on Windows
1. Clone the repository to your local machine:
```git
git clone https://github.com/polikhronidi/CelsiusFahrenheitConverter.git
```
2. Navigate to the directory containing the source code:
```cmd
cd temp-converter
```
3. Compile the program using a C++ compiler. If you're using MinGW, you can run:
```c++
g++ temp_conversion.cpp -o temp_converter
```
If you're using Visual Studio, you can create a new project and add the `temp_conversion.cpp` file to it.
4. Run the executable:
```cmd
temp_converter.exe
```
Choose an option:

1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
5. Fahrenheit to Kelvin
6. Kelvin to Fahrenheit
7. Exit

Example:

To convert Celsius to Fahrenheit:
1
Enter temperature in Celsius: 25
Temperature in Fahrenheit: 77.00

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
