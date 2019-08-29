CREATE TABLE Categoria (
	id	 	int 	not 	null identity
	,nome	char(25) not null
	,valorDiario numeric(6,2) not null
	,constraint PK_Categoria primary key(id)

);


CREATE TABLE Cliente (
	id	int 	not null identity	
	,nome	char(25)	not null
	,endereco char(30)	null
	,telefone char(11) not null
	,constraint PK_Cliente primary key(id)

);

CREATE TABLE Veiculo (
	placa	char(07)	not null identity
	,anoFabricacao int not null
	,situacao	char(01) not null	default 'D' --('M', 'R', 'D', 'A')
	,idCategoria int not null
	,constraint PK_Veiculo primary key(placa)
	,constraint FK_Veiculo_Categoria foreign key(id) references Categoria(id)
);

CREATE TABLE Reserva (
	id 	int 	not null 	identity
	,data 	smalldatetime 	not null 
	,hora		char(05)	not null
	,idCliente 	 int 		not null
	,idCategoria int 		null
	,constraint PK_Reserva primary key(id)
	,constraint FK_Reserva_Cliente foreign key(idCliente)references Cliente(id)
	,constraint FK_Veiculo_Categoria foreign key(idCategoria) references Categoria(id)
);

CREATE TABLE Locacao(
	
	id	int 	not null identity
	,dataInicio smalldatetime not null
	,dataFim 	smalldatetime not null
	,placa 		char(07) not null
	,idCliente int 	not null
	,idRerserva int not null
	,constraint PK_Locacao primary key(id)
	,constraint FK_Locacao_Veiculo foreign key (placa) 		references Veiculo(id)
	,constraint FK_Locacao_Cliente foreign key (idCliente) 	references Cliente(id)
	,constraint FK_Locacao_Reserva foreign key (idReserva) 	references Reserva(id)
	
);

CREATE TABLE Pagamento (
	id 		int 					not null 	identity
	,valor		numeric(8,2) 		not null
	,formaPagamento 	char(02)	not  null 	default 'DI' --('CC', 'DI', 'CD')
	,idLocacao			int 		not null
	,constraint PK_Pagamento primary key(id)
	,constraint FK_Pagamento_Locacao foreign key(idLocacao) references Locacao(id)

);



insert into Categoria (nome,valorDiaria, idCategoria) values
			('SUV', 300.00, 3),
			('1.0 Básico', 100.00, 1),
			('1.0 Ar+Direcao', 200.00,9 ));
			
insert into Veiculo (placa, situacao, categoria) values
			('abc1234', 2010, 'M', '1.0 Básico'),
			('cba4312', 2011, 'R', '1.0 Ar+Direcao'));
			
insert into Cliente (nome, telefone) values	
			('Marcos Mirando', 12123456798),
			('Tatiane Carvalho', 123456729),
			('Jorge Teste', 987654321));
			
insert into Veiculo (placa, situacao, categoria) values

		('qwe1234', 2011, 'D', 'Popular 1.0 sem ar')
	   ,('uio4321', 2018, 'M', '1.0 com ar+direcao'));

			
select nome from Cliente where telefone=null;
select nome, telefone from Cliente where nome like '%Miranda';
select nome, valorDiaria from Categoria where nome like '%1.0%';
select placa, situacao, anoFabricacao from Veiculo where placa not like 'L%';
select placa, situacao, anoFabricacao, idCategoria from Veiculo where situacao ='D' AND placa like '%K%' OR placa like '%X%'
 