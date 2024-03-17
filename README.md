# TP2

## Configuration
```console
mkdir build_debug
cd build_debug
cmake -DCMAKE_BUILD_TYPE=Debug -G "MinGW Makefiles" ..
cmake --build .
```

## Run
```console
ctest => one test successful
.\bin\Debug\TP2.exe => UI shows
```

## Instruction

### Visiteur

Les classes graphiques Rond, Rectangle, Ligne et Fleche permettent d'afficher graphiquement chaque element.

Note importante : Cet affichage est simule par une sortie console ici. Mais il s'agit normalement d'un affichage grahique où l'on ne souhaite pas voir apparaitre d'information de debug normallement.

On veut leur rajouter leurs des fonctionnalites de :
- Sortie debug : affichage en mode console des informations technique (valeur exact des différents champs).
- La serialisation sous forme de xml : retour d'un string contenant l'integralite des donnes permettant de potentiellement le re-creer.
Afin de ne pas multiplier les responsabilités de la classe, rajouter ces deux fonctionnalités via le pattern Visiteur.
