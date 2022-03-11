CREATE TABLE SERV_CELULAR
(NUMERO NUMBER(11),
NOME VARCHAR2(70),
NUM_CPF NUMBER(11),
DATA_COMPRA DATE,
CONSTRAINT SERV_CELULAR_PK PRIMARY KEY(NUMERO));

CREATE TABLE SERV_SERVICO
(CODIGO NUMBER(5),
DESCRICAO VARCHAR2(50),
VALOR NUMBER(10,2),
CONSTRAINT SERV_SERVICO_PK PRIMARY KEY(CODIGO));

CREATE TABLE SERV_AQUISICAO_SERVICO
(NUM_CELULAR NUMBER(11),
COD_SERVICO NUMBER(5),
DATA_INCLUSAO DATE,
HORA TIMESTAMP,
CONSTRAINT SERV_AQUISICAO_SERVICO_PK PRIMARY KEY(NUM_CELULAR, COD_SERVICO),
CONSTRAINT SERV_CELULAR_FK FOREIGN KEY(NUM_CELULAR) REFERENCES SERV_CELULAR,
CONSTRAINT SERV_SERVICO_FK FOREIGN KEY(COD_SERVICO) REFERENCES SERV_SERVICO);