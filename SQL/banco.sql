CREATE TABLE cep (
	cep CHAR(8) PRIMARY KEY,
	nm_rua VARCHAR(50) NOT NULL,
	nm_cidade VARCHAR(30) NOT NULL
);

CREATE TABLE clientes (
	cd_cliente INT PRIMARY KEY,
	nm_cliente VARCHAR(30) NOT NULL,
	nr_residencia VARCHAR(6) NOT NULL,
	complemento  VARCHAR(6),
	sexo CHAR(1),
	cpf CHAR(11) UNIQUE NOT NULL,
	cep CHAR(8),
	FOREIGN KEY (cep) REFERENCES cep (cep)
);

CREATE TABLE telefone (
	nr_telefone CHAR(8) PRIMARY KEY,
	cd_cliente INT,
	CONSTRAINT cd_cliente FOREIGN KEY (cd_cliente) REFERENCES clientes (cd_cliente)
);

CREATE TABLE vendedor (
	cd_vendedor INT PRIMARY KEY,
	nm_vendedor VARCHAR(30) NOT NULL
);

CREATE TABLE produto (
	cd_produto INT PRIMARY KEY,
	nm_produto VARCHAR(30) NOT NULL,
	vl_unitario NUMERIC(7,2) NOT NULL,
	qtd_estoque INT NOT NULL
);

CREATE TABLE pedido (
	nr_pedido INT PRIMARY KEY,
	dt_pedido DATE NOT NULL,
	tot_pedido NUMERIC(7,2) NOT NULL,
	cd_cliente INT,
	cd_vendedor INT,
	FOREIGN KEY (cd_cliente) REFERENCES clientes (cd_cliente),
	FOREIGN KEY (cd_vendedor) REFERENCES vendedor (cd_vendedor)
);

CREATE TABLE pedido_produto (
	nr_pedido INT,
	cd_produto INT,
	tot_produto INT NOT NULL,
	qtd_pedida INT NOT NULL,
	CONSTRAINT nr_pedido FOREIGN KEY (nr_pedido) REFERENCES pedido (nr_pedido),
	CONSTRAINT cd_produto FOREIGN KEY (cd_produto) REFERENCES produto (cd_produto)
);

insert into cep (cep, nm_rua, nm_cidade) values ('96015560', 'Rua Gonçalves Chaves', 'Pelotas');
insert into cep (cep, nm_rua, nm_cidade) values ('95010100','Rua das Flores','Porto Alegre');
insert into cep (cep, nm_rua, nm_cidade) values ('96015360','Praça Vinte de Setembro','Pelotas');
insert into cep (cep, nm_rua, nm_cidade) values ('96015670','Rua Major Cícero','Pelotas');
insert into cep (cep, nm_rua, nm_cidade) values ('96020780','Rua Padre Felício','Pelotas');

ALTER TABLE clientes ADD COLUMN profissao VARCHAR (30);

insert into clientes (nm_cliente, cd_cliente, sexo, nr_residencia, complemento, cep, cpf, profissao) values ('João da Silva', 10, 'M', 2345, 201, '96015360','64466986020', 'Professor');
insert into clientes (nm_cliente, cd_cliente, sexo, nr_residencia, complemento, cep, cpf, profissao) values ('Pedro Vasconcelos', 20, 'M', 56, null, '96020780','62066456789', 'Empresário');
insert into clientes (nm_cliente, cd_cliente, sexo, nr_residencia, complemento, cep, cpf, profissao) values ('Ana Clara Barroso', 30, 'M', 56, null, '96020780','23456786020', 'Dentista');
insert into clientes (nm_cliente, cd_cliente, sexo, nr_residencia, complemento, cep, cpf, profissao) values ('Paula Silveira',40,'F',25,null,'95010100','62044567820', 'Médica');
insert into clientes (nm_cliente, cd_cliente, sexo, nr_residencia, complemento, cep, cpf, profissao) values ('Afonso Mendes',50,'M',2123, 304, '95010100','62044567821', 'Analista de Sistemas');

insert into telefone (cd_cliente, nr_telefone) values (10, '32256789');
insert into telefone (cd_cliente, nr_telefone) values (20, '34535566');
insert into telefone (cd_cliente, nr_telefone) values (20, '91232132');
insert into telefone (cd_cliente, nr_telefone) values (40, '34225678');
insert into telefone (cd_cliente, nr_telefone) values (50, '99821111');

insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (1, 'Lápis', 1.5, 100);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (2,'Borracha',1.00, 80);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (3,'Caderno',15.00, 200);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (4,'Caneta',3.00, 120); 
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (5,'apontador',15.00, 45);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (6,'régua',2.00, 33);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (7,'marcador de texto',5.00, 70);
insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (8,'clips',6.00, 180);

ALTER TABLE vendedor ADD COLUMN salario NUMERIC (7,2) NOT NULL;

insert into vendedor (cd_vendedor, nm_vendedor, salario) values (100,'João Silveira',890.00);
insert into vendedor (cd_vendedor, nm_vendedor, salario) values (200,'Paula Maia', 16500.00);
insert into vendedor (cd_vendedor, nm_vendedor, salario) values (300, 'Batista', 1050.00);

insert into pedido (nr_pedido, dt_pedido, tot_pedido, cd_cliente, cd_vendedor) values (1000, '2016-04-12', 4, 10, 300);
insert into pedido (nr_pedido, dt_pedido, tot_pedido, cd_cliente, cd_vendedor) values (1001, '2016-04-03', 1, 20, 200);
insert into pedido (nr_pedido, dt_pedido, tot_pedido, cd_cliente, cd_vendedor) values (1002, '2016-05-30', 5, 30, 300);
insert into pedido (nr_pedido, dt_pedido, tot_pedido, cd_cliente, cd_vendedor) values (1003, '2016-05-25', 30, 40, 100);
insert into pedido (nr_pedido, dt_pedido, tot_pedido, cd_cliente, cd_vendedor) values (1004, '2016-05-25', 30, 50, 100);

insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (3, 2, 1, 1000);
insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (1, 1, 2, 1000);
insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (15, 1, 4, 1001);
insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (5, 1, 7, 1002);
insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (30, 2, 4, 1003);
insert into pedido_produto (tot_produto, qtd_pedida, cd_produto, nr_pedido) values (12, 2, 8, 1004);

alter table clientes alter column nm_cliente type varchar(40);

alter table clientes add column profissao varchar(25);

alter table clientes alter column profissao set default 'indefinida';

select * from clientes;

insert into clientes (cd_cliente, nm_cliente, nr_residencia, complemento, sexo, cpf) values (100, 'Gustavo Bitencourt', '207', 1, 'M', 04687912055);

select * from clientes where cd_cliente=10;

alter table clientes rename column profissao to profissao_cliente;

select distinct nm_cidade from cep;

select profissao_cliente from clientes;

drop table clientes;

alter table clientes drop column profissao_cliente; 

insert into produto (cd_produto, nm_produto, vl_unitario, qtd_estoque) values (10,'agenda', 8.50, 30);

select * from produto where vl_unitario<10;

select * from produto where vl_unitario>=5 and vl_unitario<=10;




