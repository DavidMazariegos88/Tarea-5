#include <iostream>
using namespace std;

main() {
/*	int edad,*p_edad;
	p_edad =&edad;
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
*/	

	int total = 0;
	int notas[total];	
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
	
cout<<"-----------Mostrar notas------------"<<endl;
for (int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"): "<<notas[i]<<endl;
}
	
	system("pause");
}
