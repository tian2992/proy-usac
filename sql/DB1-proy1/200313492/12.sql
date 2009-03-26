/**CONSULTA 12*/
/*
DAR EL NOMBRE DE LOS ESTUDIANTES QUE MAS VECES HAN LLEVADO ALGUN CURSO

Obtenemos todos los estudiantes  tal que tenga el mayor numero de veces repetido algun crurso
*/
SELECT CODIGO,E1.CARNET,E1.PRIMER_NOMBRE||' '||E1.PRIMER_APELLIDO,MAX(VECES)
FROM ESTUDIANTE E1,(
	SELECT CARNET"CARNET1",CODIGO,COUNT(CODIGO)"VECES"
	FROM ASIGNACION
	GROUP BY CARNET,CODIGO
)
WHERE E1.CARNET = CARNET1
GROUP BY CODIGO,E1.CARNET,E1.PRIMER_NOMBRE,E1.PRIMER_APELLIDO;
