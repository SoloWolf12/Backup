{- 1a -}
esCero :: Int -> Bool
esCero x = x == 0

{- 1b -}
esPositivo :: Int -> Bool
esPositivo x = x > 0

{- 1c -}
esVocal :: Char -> Bool
esVocal x = x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'

{- 1d -}
factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial (x-1)

{- 1e -}
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = (sumaLista (x:xs)) `div` (length (x:xs))

sumaLista :: [Int] -> Int
sumaLista [] = 0
sumaLista (x:xs) = x + sumaLista xs

{- 2a -}
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) | x == True = paratodo xs
                | otherwise = False

{- 2b -}
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

{- 2c -}
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

{- 3 -}
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece n (x:xs) | n == x = True
                   | otherwise = pertenece n xs

{- 4 -}
encuentra :: Int -> [(Int,String)] -> String
encuentra _ [] = ""
encuentra n ((x,y):xs) | n == x = y
                       | otherwise = encuentra n xs

{- 5a -}
paratodo' :: (Eq a) => [a] -> (a -> Bool) -> Bool
paratodo' [] _ = True
paratodo' (x:xs) t = (t x) && paratodo' xs t

{- 5b -}
existe' :: (Eq a) => [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) t = (t x) || existe' xs t

{- 5c -}
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) t = (t x) + sumatoria' xs t

{- 5d -}
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] _ = 1
productoria' (x:xs) t = (t x) * productoria' xs t

{- 6 -}
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs id

{- 7a -}
todosPares :: [Int] -> Bool
todosPares (l) = paratodo' (l) even 

{- 7b -}
esMult :: Int -> Int -> Bool
esMult n x | x `mod` n == 0 = True
           | otherwise = False

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n l = existe' l (esMult n)

{- 7c -}
cuadrado :: Int -> Int
cuadrado x = x * x

sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [0..n] cuadrado

{- 7d -}
soloPares :: [Int] -> [Int]
soloPares [] = []
soloPares (x:xs) | even x = x : soloPares xs
                 | otherwise = soloPares xs

multiplicaPares :: [Int] -> Int
multiplicaPares l = productoria' (soloPares l) id

{- 8 -}
{- Las funciones map y filter toman un funcion y una lista
y luego de aplicar la funcion devuelven una lista, 
en el caso de map aplica una funcion a los elementos de una lista,
 mientras que en el caso de filter devuelve los valores que complan con el predicado de la funcion dada-}
{- la expresion "map succ [1,-4,6,2,-8] es equivalente a "map (+1) [1,-4,6,2,-8]" que devuelve "[2,-3,7,3,-7]-}
{- "filter esPositivo [1,-4,6,2,-8]" es quivalente a "filter (>=0) [1,-4,6,2,-8]" que devuelve "[1,6,2]-}

{- 9a -}
duplica :: (Num a) => [a] -> [a]
duplica [] = []
duplica (x:xs) = x * 2 : duplica xs

{- 9b -}
duplicaVal :: (Num a) => [a] -> [a]
duplicaVal l = map (*2) l

{- 10a -}
soloPares' :: (Integral a) => [a] -> [a]
soloPares' [] = []
soloPares' (x:xs) | x `mod` 2 == 0 = x : soloPares' xs
                  | otherwise = soloPares' xs

{- 10b -}
soloPares'' :: (Integral a) => [a] -> [a]
soloPares'' l = filter even l

{- 10c -}
{- el ejercicio 7d puede mejorarse reemplazando la funcion "soloPares" por la funcion "filter even"-}
multiplicaPares' :: [Int] -> Int
multiplicaPares' l = productoria' (filter even l) id

{- 11a -}
sumarALista :: (Integral a) => a -> [a] -> [a]
sumarALista _ [] = []
sumarALista n (x:xs) = x + n : sumarALista n xs

encabezarS :: (Eq a) => a -> [a] -> [a]
encabezarS n [] = [n]
encabezarS n (x:xs) = n : x : xs

encabezar :: (Eq a) => a -> [[a]] -> [[a]]
encabezar _ [] = []
encabezar y (xs:xss) = (encabezarS y xs) : (encabezar y xss)

mayoresA :: (Ord a) => a -> [a] -> [a]
mayoresA _ [] = []
mayoresA n (x:xs) | x > n = x : mayoresA n xs
                  | otherwise = mayoresA n xs

{- 11b -}
sumarALista' :: (Integral a) => a -> [a] -> [a]
sumarALista' n l = map (+n) l

encabezar' :: (Eq a) => a -> [[a]] -> [[a]]
encabezar' x ls = map (x:) ls

mayoresA' :: (Ord a) => a -> [a] -> [a]
mayoresA' n l = filter (>n) l

{- 12 -}
comparar :: Int -> (Int,String) -> Bool
comparar n (x,_) = n == x

sepTuplas :: [(Int,String)] -> (Int,String)
sepTuplas [] = (0,"")
sepTuplas (x:_) = x

encuentra' :: Int -> [(Int,String)] -> String
encuentra' n l = snd (sepTuplas (filter (comparar n) l))

{- 13a -}
primIgualesA :: (Eq a) => a -> [a] -> [a]
primIgualesA _ [] = []
primIgualesA n (x:xs) | n == x = x : primIgualesA n xs
                      | otherwise = []

{- 13b -}
primIgualesA' :: (Eq a) => a -> [a] -> [a]
primIgualesA' n l = takeWhile (== n) l

{- 14a -}
primIguales :: (Eq a) => [a] -> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:y:xs) | x == y = x : primIguales (y:xs)
                     | otherwise = [x]

{- 14b -}
primIguales' :: (Eq a) => [a] -> [a]
primIguales' l = primIgualesA' (head l) l

{- 15a -}
mini :: (Ord a) => a -> a -> a
mini x y | x <= y = x
         | otherwise = y

minimo :: (Ord a) => [a] -> a
minimo [] = error "undefined"
minimo [a] = a
minimo (x:xs) = mini x (minimo xs)

{- 15b -}
minimo' :: (Ord a, Bounded a) => [a] -> a
minimo' [] = maxBound
minimo' [x] = x
minimo' (x:y:xs) | x < y = minimo' (x:xs)
                 | otherwise = minimo' (y:xs)

{- 1*a -}
--estan bien tipados, ya que "x" puede ser una tupla
--pero no podra accederse a su contenido
--el patron cubre todos los casos ya que la funcion solo pide una tupla y "x" puede ser una tupla

{- 1*b -}
--estan bien tipados, la diferencia entre esta definicion y la anterior es que
--se puede acceder al contenido de la tupla permitiendo mas funciones, como
--quedarse solo con el primer elemento o reemplazar el segundo por algun otro

{- 1*c -}
--no esta bien tipado ya que la definicion de la funcion pide que se le ingrese una lista
--y (a,b) no puede interpretarse como una lista en ningun caso
--no cubre todos los casos ya que no esta definido para una lista vacia

{- 1*d -}
--en este caso se corrige el error cometido en el ejercicio C, "x" debe ser una tupla
--pero no se podra acceder a su contenido, y "xs" representa las tumplas restantes en la lista
--el patron no esta definido para lista vacia pero puede no ser necesario dependiendo de que haga la funcion

{- 1*e -}
--el patron esta bien tipado, (x,y) es una tupla, que esta seguida de una lista compuesta por 
-- (a,b) y seguida de "xs" que seria  tambien una tupla, esto significa que dicha lista de tuplas
--tiene que tener obligadamente como minimo 2 elementos, sin embargo el patron no esta definido para
--una lista con una unica tupla en ella

{- 1*f -}
--el patron se encuentra bien tipeado pero solo funcionara con una lista de un unico elemento
--y el primer elemento de dicha tupla debera ser si o si un 0
--no cumple con todos los casos ya que la definicion dice que el primer elemento de la tupla puede ser
--cualquier Int pero el patron lo esta limitando a 0

{- 1*g -}
--el patron se encuentra bien tipado, esta vez no esta limitado a que la lista tenga un solo elemento
--pero el segundo elemento de las tuplas sera siempre 1, mientras que la definicion dice que podria ser
--cualquier cosa, por lo tanto no cubre todos los casos posibles

{- 1*h -}
--sucede lo mismo que en el ejercicio anterior solo que ahora el primer elemento de la tupla 
--esta siendo limitado a 1, cuando deberia poder ser cualquier numero Int

{- 1*i -}
--el patron se encuentra bien tipado, "a" vendria a ser una funcion que toma un Int y devuelve un Int,
--"b" es un Int, de tal manera que el patron cobre todos los casos posibles de la definicion

{- 1*j -}
--sucede de igual forma que en el ejercicio anterior con la diferencia de que "b" es reemplazado por 3
--de tal manera que el patron no cubre todos los casos posible

{- 1*k -}
--el patron esta mal tipado ya que la funcion pide una funcion y un Int, sin embargo el patron ofrece
--tres Int

{- 1*l -}
--el patron esta bien tipado, es muy similar al caso I, solo que esta vez no esta limitado a ser Int
--"a" seria un elemento cualquiera, mientras que "g" es una funcion que toma un elemento cualquiera y devuelve
--un elemento del mismo tipo, de tal manera que el patron cubre todos los casos

{- 2*a -}
--la funcion "fst" cumple con la definicion, ya que devuelve el primer elemento de una tupla sin importar cual sea
--no se puede dar una funcion alternativa ya que seria volver a crear "fst" con diferencias semanticas solamente

{- 2*b -}
--la funcion "snd" cumple con la definicion, devolviendo el segundo elemento de una tupla
--al igual que en el caso anterior no se podria dar otra funcion que sea igual de completa sin que deje de ser la misma