#include <iostream>

using namespace std;

struct struct_of_roman
{
	char rom_numbers;
	int numbers;
};

int main() {
	const struct_of_roman value_table[] = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	};

	string s = "MCMXCIV";
	int sum = 0;
	for (int i = 0; i <= s.size(); i++) {
		for (int k = 0; k < 7; k++) {
			if (s[i] == value_table[0].rom_numbers && s[i + 1] == value_table[1].rom_numbers) {
				sum += 4; i++;  break;
			}
			else if (s[i] == value_table[0].rom_numbers && s[i + 1] == value_table[2].rom_numbers) {
				sum += 9; i++;  break;
			}
		
			else if (s[i] == value_table[2].rom_numbers && s[i + 1] == value_table[3].rom_numbers) {
				sum += 40; i++;  break;
			}

			else if (s[i] == value_table[2].rom_numbers && s[i + 1] == value_table[4].rom_numbers) {
					sum += 90; i++;  break;
			}

			else if (s[i] == value_table[4].rom_numbers && s[i + 1] == value_table[5].rom_numbers) {
					sum += 400; i++;  break;
			}
			else if (s[i] == value_table[4].rom_numbers && s[i + 1] == value_table[6].rom_numbers) {
					sum += 900; i++;  break;
			}

			else if (s[i] == value_table[k].rom_numbers) {
				sum += value_table[k].numbers;
			}
		}
	}
	cout << sum;
}