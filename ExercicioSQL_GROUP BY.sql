

					--Exercicio 1 - SQL GROUP BY

select Jogador.nome as NomeJogador, Temporada.nome as Temporada, max(DetalheJogo.pontos) as MáximoPontos from Jogador 
 
	inner join DetalheJogo on jogo.id = DetalheJogo.idJogador
	inner join Jogo on DetalheJogo.idJogo = Jogo.id
	inner join Temporada on jogo.idTemporada = Temporada.id
	
	group by Jogador.nome, Temporada.nome
	order by Temporada.nome, Jogador.nome;
	
					--Exercicio 2 - SQL GROUP BY
	
select Temporada.nome as Temporada, count(jogo.id) as QuantidadeJogo, sum(Jogo.pontoTimeCasa) as TotalPontoTimeCasa from Temporada
					
	inner join jogo on Temporada.id = jogo.idTemporada

	group by Temporada.nome
	order by Temporada.nome
	
					--Exercicio 3 - SQL GROUP BY

select Temporada.nome as Temporada, count(jogo.id), QuantidadeJogo, avg(pontos.timeVisitante) as PontosTimeVisitante,

	inner joint DetalheJogo on jogo.id = DetalheJogo.idJogo
	
	where month(Detalhe.data)=12
	
	group by Temporada.nome
	order by Temporada.nome
		
		
	
