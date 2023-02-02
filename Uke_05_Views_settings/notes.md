# QSettings og Views

## QStringView class

QStringView class brukes når du ønsker å vise en string brukeren men ikke la brukere ha muligheten til å modifisere den.

- **Fordel:** rask tilgang og er ikke modifiserbar.

- **Tommelfingerregel:** hvergang du ser View, tenk at det er "Read-only".

View classene har mange funksjoner vi kan kalle på, og ingen av funksjonene modifiserer "Stringen".

# Settings

QSettings Class gir muligheten til å lagre applikasjons innstillinger. Vi kan lagre våre innstillinger når vi avslutter programmet og laste det opp igjen når vi starter igjen programmet.

**QVariant:** Virker som union, du kan lagre alle datatyper i en QVariant variabel. Vi kan for eksempel lagre data fra en function i en QVariant når vi ikke vet hvilket data type funksjonen returnere.
