#include<iostream>
#include<math.h>
 
using namespace std;
 
float text[3][1], key[3][3], inv_key[3][3], c[3][3];
  
void inverse() {
	int i, j, k;
	float p, q;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++) {
			if(i == j)
				inv_key[i][j]=1;
			else
				inv_key[i][j]=0;
		}
		
	for(k = 0; k < 3; k++) {
		for(i = 0; i < 3; i++) {
			p = c[i][k];
			q = c[k][k];
				
			for(j = 0; j < 3; j++) {
				if(i != k) {
					c[i][j] = c[i][j]*q - p*c[k][j];
					inv_key[i][j] = inv_key[i][j]*q - p*inv_key[k][j];
				}
			}
		}
	}
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			inv_key[i][j] = inv_key[i][j] / c[i][i];
	
	cout<<"\nInverse of Key Matrix is:\n";
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++)
			cout<<inv_key[i][j]<<" ";		
		cout<<"\n";
	}
}

void Hill() {
	int i, j, k;
	float encrypt[3][1];
	for(i = 0; i < 3; i++)
		for(j = 0; j < 1; j++)
			for(k = 0; k < 3; k++)
				encrypt[i][j] = encrypt[i][j] + key[i][k] * text[k][j];	
	cout<<"Encrypted string is: ";
	for(i = 0; i < 3; i++)
		cout<<(char)(fmod(encrypt[i][0], 26) + 97);
}

void decryption(float encrypt[3][1];) {
	int i, j, k;
	float decrypt[3][1];	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 1; j++)
			for(k = 0; k < 3; k++)
				decrypt[i][j] = decrypt[i][j] + inv_key[i][k] * encrypt[k][j];	
	cout<<"\nDecrypted string is: ";
	for(i = 0; i < 3; i++)
		cout<<(char)(fmod(decrypt[i][0], 26) + 97);
	
	cout<<"\n";
}

int main() {
	int i, j, n;
	cout<<"Enter 3x3 matrix for key (It should be inversible):\n";
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++) 
		{
			cin>>key[i][j];
			c[i][j] = key[i][j];
		}
	inverse();
	int choice = 1;
	while(choice)
	{
		char Plain_text[3];
		cout<<"\nEnter a 3 letter string: ";
		cin>>Plain_text;
		for(i = 0; i < 3; i++)
			text[i][0] = Plain_text[i] - 97;
		Hill();
		cout<<"Enter the choice(0/1)? :";
		cin>>choice;
	}
	
}
 

 



/*
void encrypt()
              {
                     int i,j,l,m;
                     for(l=0;l<msg.size();)
                     {
                           m = l;
                           for(i=0;i<3;i++)
                           {
                                  enc[l] = (key[i][0]*(msg[m]-'a' + 1) + key[i][1]*(msg[m+1]-'a' + 1) +key[i][2]*(msg[m+2]-'a' + 1))%26 + 'a'-1;
                                  cout<<(char)enc[l];
                                  l++;
                           }     
                     }
              }
              */
