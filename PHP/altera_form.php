<!-- altera_form.php -->
<form>
	Cod:<input type="text" name="codigo" size="2" value="<?=$codigo?>" readonly="readonly"><br>
	Nome:<input type="text" name="nome" value="<?=$nome?>"><br>
	Nascimento:
	<input type="text" name="dia" size="2" maxlength="2" value="<?=$dia?>">/
	<input type="text" name="mes" size="2" maxlength="2" value="<?=$mes?>">/
	<input type="text" name="ano" size="4" maxlength="4" value="<?=$ano?>">
	<br><input type="submit" name="enviar" value="SALVAR">
</form>
