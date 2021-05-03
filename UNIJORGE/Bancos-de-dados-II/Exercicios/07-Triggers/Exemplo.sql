﻿CREATE TRIGGER cidade_trigger_b
BEFORE INSERT ON cidade
FOR EACH ROW
EXECUTE PROCEDURE cidade_log_func();

CREATE OR REPLACE FUNCTION cidade_log_func()
  RETURNS trigger AS $BODY$
BEGIN
    NEW.nome = UPPER(NEW.nome);	
    RETURN NEW;

END;
$BODY$
  LANGUAGE plpgsql VOLATILE
  COST 100;