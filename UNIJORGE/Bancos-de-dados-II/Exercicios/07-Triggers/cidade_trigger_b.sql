CREATE TRIGGER cidade_trigger_bef_ins
BEFORE INSERT ON cidade
FOR EACH ROW
EXECUTE PROCEDURE cidade_log_func();

CREATE OR REPLACE FUNCTION cidade_log_func()
   RETURNS trigger AS $BODY$
BEGIN
   -- OLD / NEW 
   new.nome = UPPER(new.nome);
   RETURN new;
   
END;
$BODY$
LANGUAGE plpgsql VOLATILE
COST 100;