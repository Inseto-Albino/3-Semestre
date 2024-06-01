-- Avaliação Tipo 2

-- Execute os scripts prontos abaixo e desenvolva os scripts solicitados
-- DESENVOLVA SOMENTE o que for solicitado

create database provatipo2;
use provatipo2;

create table floricultura(
idflori			int			not null,	-- código da floricultura
floricultura	varchar(30)	not null,	-- nome da floricultura
funcionario		varchar(40)	null,		-- nome do funcionário
fone			varchar(18) not null,	-- telefone da floricultura	
bairro			varchar(20)	not null	-- bairro da floricultura
primary key(idflori)
);

insert into floricultura values (1,'florlinda','Marcionor','98787-7766','centro');
insert into floricultura values (2,'florbela','Marciovaldo','91111-7766','centro');
insert into floricultura values (3,'flormaravilhosa','Marcionildo','98787-2222','centro');
insert into floricultura values (4,'Super flor','Zulmira','92323-7766','bairro');
insert into floricultura values (5,'Linda flor','Zuleica','94545-8877','bairro');
insert into floricultura values (6,'Flor','Zenaide','91122-3344','bairro');

create table flor(
idflor	int			not null,	-- código da flor
flor	varchar(30)	not null,	-- nome da flor
preco	decimal(7,2)not null,	-- preço da flor
dtval	datetime	not null	-- data de validade da flor
);

insert into flor values (222,'Margarida',66.20,'31/12/2020');
insert into flor values (333,'Rosa',13.58,'31/12/2022');
insert into flor values (444,'Cacto',96.20,'31/12/2020');
insert into flor values (555,'Tulipa',44.95,'31/12/2022');
insert into flor values (666,'Pinheiro',86.20,'31/12/2022');
insert into flor values (777,'Sambaia',53.58,'31/12/2020');
insert into flor values (888,'Lirio',196.20,'31/12/2018');

-- 1
-- altera a estrutura da tabela floricultura
-- excluindo o campo telefone 

alter table floricultura
drop column fone;

-- 2 Mostrar(select) todas as flores cadastradas
-- se o codigo for maior ou igual a 333 e menor ou igual a 555
-- ordenados por preço
 
 select * from flor
 where idflor <= 555 and idflor >= 333
 order by preco;

-- 3
-- criar a tabela floricultura2 com a mesma estrutura da tabela floricultura
-- importar todos os registros com código da floricultura menor que 3

create table floricultura2(
idflori			int			not null,
floricultura	varchar(30)	not null,
funcionario		varchar(40)	null,
fone			varchar(18) not null,
bairro			varchar(20)	not null
primary key(idflori)
);

insert into floricultura2(idflori, floricultura, funcionario, fone, bairro)
select idflori, floricultura, funcionario, fone, bairro from floricultura
where idflori < 3;

-- 4
-- alterar o nome de todos os funcionários da tabela floricultura
-- para Nilson Nelson

update floricultura
set funcionario = 'Nilson Nelson';

-- 5
-- Mostrar uma ocorrência de cada bairro das floriculturas cadastradas

select distinct bairro from floricultura;

-- 6 
-- Deletar todas as flores com nome Hortência com preços entre R$ 20,00 e R$ 100,00
-- OBS. o fato de não ter nenhuma flor com esse nome cadastrado
-- não impede o desenvolvimento do script

delete from flor
where (flor = 'Hortência') and (preco between 20 and 100);

-- 7
-- mostrar todas as flores que tenham a letra A no nome
-- e estejam na lista de Rosa, Tulipa e Hibísco

select * from flor
where upper(flor) like '%A%' and (flor = 'Rosa' or flor = 'Tulipa' or flor = 'Hibisco');

-- 8
-- mostrar todas as flores com data de validade vencida

select * from flor
where dtval < '19/04/2024';

-- 9
-- 9 SE possível - nessa ordem
-- Dropar a tabela floricultura
-- Dropar a tabela flor

drop table floricultura;
drop table flor;

-- 10
-- crie a estrutura da tabela escola com 3 campos
-- utilizando nessa estrutura primary key e unique

-- crie a estrutura da tabela cursos com 4 campos
-- utilizando nessa estrutura primary key, foreign key e identity

-- insira 2 registros em cada tabela

create table escola(
idescola	int			unique,
escola		varchar(50) not null,
bairro		varchar(50) not null,
primary key(idescola)
);

insert into escola values(1,'Don Bosco','Bela Vista');
insert into escola values(2,'Etec','Centro');

create table cursos(
idcurso	 int		 identity,
curso	 varchar(40) not null,
duracao  varchar(20) not null,
idescola int		 not null,
primary key(idcurso),
foreign key(idescola) references escola(idescola)
);

insert into cursos values('Robótica','2 anos',1);
insert into cursos values('Design','1 ano e meio',2);
