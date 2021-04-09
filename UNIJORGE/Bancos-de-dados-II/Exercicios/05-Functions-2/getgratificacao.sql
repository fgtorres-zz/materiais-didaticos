CREATE OR REPLACE FUNCTION getgratificacao(codigoemp INTEGER)
RETURNS TEXT AS $$
DECLARE cargahorariatotal INTEGER;
BEGIN

    -- CALCULAR A CARGA HORARIA TOTAL
        SELECT SUM(a.qtdhoras) FROM alocacao as a WHERE a.codemp = $1 INTO cargahorariatotal; 

    -- CHECAR A CARGA HORARIA PARA CALCULAR A BONIFICACAO
        IF cargahorariatotal >= 100 THEN
            RETURN '30%';
        ELSE
            RETURN '10%';
        END IF;

END;
$$  LANGUAGE plpgsql

