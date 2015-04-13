# Iteratie 5: Componenten samenbrengen
Los van elkaar heb ik mijn elementen aan de praat gekregen, maar het wordt altijd spannend wanneer code bij elkaar dient te komen. Zeker in dit geval, met alle draadjes en kwetsbare onderdeeltjes. Vele keren wilde mijn code niet werken, wijzigingen niet uploaden (omdat ik de USB-kabel vergeten was in te pluggen), of werkten sommige delen niet en andere delen weer wel.

Het grootste probleem waar ik tegenaan liep, waren de Volts. Enkel de motor draaide prima op de Arduino, maar in combinatie met de LED-ring en IR-sensor, wilde het iets minder vlotten. De motor deed niks meer. Gelukkig bleek dit gemakkelijk op te lossen door een externe voeding toe te voegen.

## Functies
Ook mijn code begon steeds rommeliger te worden, zeker als je veel snippets verwijderd, plakt en verplaatst. Daarom besloot ik naar functies te kijken. Dit houdt mijn code opgeruimd in de loop. Ik hoef enkel een functie aan te roepen, wat een heel blok code uitvoert. Deze code kon ik dan weer buiten het zicht kwijt.

Ook [hiervan](testfunction.ino) is de [code](ir-led-motor.ino) toegevoegd