#include <iostream>
#include <random>

using namespace std;

int main() {
	random_device dev;
	mt19937 rng(dev());

	string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string digits = "0123456789";
	string special_chars = "!$%&'()*+,-./:;<=>?@[\]^_{|}~";
	string alphabet = letters + digits + special_chars;
	string password;
	int password_length;

	uniform_int_distribution < mt19937::result_type> dist6(0, alphabet.length());

	cout << "Enter the length of the password: ";
	cin >> password_length;

	for (int x = 0; x <= password_length; x++) {
		password += alphabet[dist6(rng)];
	}

	cout << password;
}