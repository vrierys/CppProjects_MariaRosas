#include <vector>/* 1) Declarar e inicializar los siguientes conjuntos de elementos haciendo uso del contenedor vector de la librería STL*/// v1: Vector de 5 elementos.std::vector<int>v1;//v2: Vector de 10 elementos de tipo entero inicializados en 0.std::vector<int>v2(10);//v3: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}std::vector<int>v3({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });//v4: {"Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia"}std::vector<std::string>v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });//v5: vector que contiene la misma información que v3std::vector<int>v5(v3.begin(), v3.end());//v6: vector que contiene la información de personas. Para cada persona se tiene el nombre, la fecha de nacimiento y su dni. Inicializarlo en el momento de la declaración con tres personas con datos inventados.std::vector<std::string>v6;