<?php
	echo '
	<p>
		Nawigacja
	</p>
	<ul>
		<li><a href="nowyForm.php">Nowy blog</a></li>
		<li><a href="wpisForm.php">Nowy wpis</a></li>
		<li><a href="blog.php">Strona główna</a></li>
	</ul>
	';
	
	echo '
	<div id="whole" align="center">
			Włącz/schowaj czat <input type="checkbox" id="checkbox" onchange="showHideChat()" />

			<div id="chatWindow" resize="both">
				<textarea readonly name="chatMessages" id="textArea" style="color:black; background-color: white" rows="25" cols="100"></textarea><br/>
				<input type="text" name="nick" id="nick" value="nick" style="color:black; background-color: white"/>
				<input type="text" name="message" id="message" size="70" value="message" style="color:black; background-color: white"/>
				<button type="submit" onclick="send()">Wyślij wiadomość</button>
			</div>
			
	</div>
	
	<script src="chatScript.js"></script>';
?>
