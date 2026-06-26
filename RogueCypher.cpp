#include <iostream>

int main(){
	std::string phrase; 
	std::cout << "Enter a phrase: ";
	std::getline(std::cin, phrase);
	
	int phrase_len = phrase.length();
	
	for(int i = 0; i < phrase_len; i++){
		if(phrase[i] >= 'a' && phrase[i] <= 'z'){
			if(phrase[i]+3 > 'z'){
				phrase[i]+=3;
				phrase[i]-=26;
				
			} else {
			phrase[i]+=3;
		    }
		}
	}
	std::cout << "Encrypted Phrase: " << phrase;
}
  