# QObject Class, Macro, Signals and slots

## Temaer vi skal snakke om i dag:

- Lage konsoll applikasjon

  - QDebug

- [QObject class](https://doc-snapshots.qt.io/qt6-dev/qobject.html) er base klasse for alle QT objekter.
- QObject macro
  - Du trenger QObject fil for å være en offisiell QObject
- [Signals and slots](https://doc-snapshots.qt.io/qt6-dev/signalsandslots.html#3rd-party-signals-and-slots) er brukt til komunikasjon mellom objekter. "Signals og slots" er sentrale funksjoner av Qt. Meta-object system (MOC) gjør at det er mulig å operer med "signals og slots".

![signals and slots](./Images/signals_and_slots.png)

- QObjects kan ikke bli kopiert
  - Minneadressen er objektet sin identifikasjon
