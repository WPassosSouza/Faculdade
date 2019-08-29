--Selecione os anos, meses e as vias de acesso com os respectivos totais de chegada. 
--Remova dos resultados as linhas em que o total de chegadas é menor do que  10.000. 
--Ordene por ano, mês e via de acesso de forma decrescente.

select chegada.ano, as Chegada_Anual, mes.nome as Mes, viaAcesso.nome as Via_Acesso_Nome sum(chegada.qtdchegada) as Total_Chegada
	 from chegada
	inner join mes on Mes.id = chegada.idMes
	inner viaAcesso on chegada.idViaAcesso = viaAcesso.id
	group by chegada.ano, mes.nome, viaAcesso.nome
	having sum(chegada.qtdchegada) >= 1000
	order by chegada.ano, Mes.nome, viaAcesso.nome desc;

-----------------------------------------------------------------------

  --Selecione os anos e estados, além das respectivas médias
  --de turistas recebidos entre 2014 e 2016. Apresente apenas os casos em que a média
  --for maior do que 10.000. Ordene pelo total de forma decrescente.
	
select chegada.ano as Chegada_Anual, UF.nome avg(chegada.qtdchegada) as Total_Chegada_Turista
	from chegada	
	
	inner join UF on chegada.idUF = UF.id
	where chegada.ano between 2014 and 2016
	group by chegada.ano, UF.nome
	having avg(chegada.qtdchegada) < 1000
	order by sum(chegada.qtdchegada) desc;

-----------------------------------------------------------------------	
	
    --Selecione o ano e os respectivos número mínimo e máximo de chegadas,
    --apresentando apenas os casos em que o valor máximo for maior do que 300
    --vezes o valor da média. Não considere as linhas em que  a quantidade de chegadas for
    --zero para fazer a seleção dos registros. Ordene pelo ano.
	
select chegada.ano as Chegada_Anual, min(chegada.qtdchegada) as Minimo_Chegada, max(chegada.qtdchegada) as Maximo_Chegada 
	from chegada
	where qtdchegada > 0
	group by chegada.ano
	having max(chegada.ano) > avg(chegada.qtdchegada) * 300
	order by chegada.ano
	
	
	
	