 void ordenar_numeros(int arreglo[], int lon){ 
        int Temp; 
         for(int i=0;i<lon;i++) 
                for(int j=0;j<lon-1;j++) 
                    if(arreglo[j]<arreglo[j+1]){// cambia "<" a ">" para cambiar la manera de ordenar 
                        Temp=arreglo[j]; 
                        arreglo[j]=arreglo[j+1]; 
                        arreglo[j+1]=Temp;} 

                 for(int i=0;i<lon;i++) 
                    cout<<arreglo[i]<<endl; 
                        } 
