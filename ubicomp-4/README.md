# Iteratie 4: Output - LED
Voor het testen van mijn Infrarood, heb ik de LED op de Arduino gebruikt. Later heb ik ook nog een LED gebruikt op het breadboard. Maar ik vond beiden iets magertjes. Daarom heb ik een Neopixel ring gekocht. Dit is een compacte ring die 12 LEDs bevat die van kleur kunnen veranderen, aan de hand van de RGB-waardes die jij invoert.

Om de Neopixel ring aan de gang te krijgen, heb je een neopixel-library nodig. Na enkele keren proberen was dit mij nog steeds niet gelukt. De documentatie is niet heel toegankelijk en dit leidde tot wat frustratie. De ring is dan ook meerdere keren in de hoek van de kamer belandt. Ik had ook nog een 8x8 LED Matrix die ik nog nooit had gebruikt en wilde die een kans geven. Dat wilde ook niet vlotten, waarop ik besloot een simpele LED te laten branden. Gelukkig heb ik toch nog even doorgezet, want de Neopixel ring aansluiten bleek toch simpeler dan gedacht, na het kijken van wat Youtube-videos.

Vervolgens heb ik de code zo geschreven dat de LED-jes rood zijn als er niets gebeurd, maar zodra de IR-sensor actief is er een Italiaanse vlag getoond wordt.

De [code](code/neopixelring.ino) is wederom bijgevoegd.

![Neopixel Ring aan het werk](rgb-ring-setup.MOV)