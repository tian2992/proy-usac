LOAD DATA
INFILE 'c:\departamentos.txt'
DISCARDMAX 999
append
CONTINUEIF THIS (1) = '*'
INTO TABLE depto 
FIELDS TERMINATED BY ','
OPTIONALLY ENCLOSED BY '"'
(
codigo    INTEGER EXTERNAL ,
nombre    CHAR ,
tipo INTEGER EXTERNAL )