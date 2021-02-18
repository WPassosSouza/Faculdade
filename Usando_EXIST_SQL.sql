-- busca por alunos que nao estao e nenhuma turma  
-- usando EXIST 

select * from aluno

	where not exists (select 1 from turma_id
						
						where turma_id.codigoAluno = aluno.matricula
						
						)
		