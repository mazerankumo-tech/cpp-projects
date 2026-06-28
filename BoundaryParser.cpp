#include<iostream>
#include<sstream>
#include<string>

int main(){
	std::string messy_inp = "    Student Grade: 95            ";
	int m_len = messy_inp.length()-1;
	while(m_len >= 0 && messy_inp[m_len] == ' '){
		m_len--;
	}
	std::string trimmed = messy_inp.substr(0, m_len + 1);
	std::stringstream ss(trimmed);
	
	std::string label_1, label_2;
	int num;
	
	ss >> label_1 >> label_2 >> num;
	std::cout << "Label_1: " << label_1 << "\nLabel_2: " << label_2 << "\nNum: " << num;
}