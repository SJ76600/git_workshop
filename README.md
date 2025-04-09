# 🃏 Blackjack CLI – Workshop Git

---

## 🔍 Description du projet

Ce projet consiste en une implémentation simplifiée du jeu de Blackjack en C.

L'objectif principal est **d'apprendre à utiliser Git efficacement en équipe**, à travers un projet structuré, réaliste, et modulable.

Le jeu est découpé en modules (`deck`, `card`, `game`, etc.), avec des TODO dispersés dans le code source pour simuler des évolutions et corrections à apporter en respectant **les bonnes pratiques Git**.

---

## 📋 Tâches à réaliser dans le code (`TODO`)

Voici une sélection de tâches présentes dans le code à compléter :
- Meilleur affichage des cartes
- Vérifications diverses au niveau du deck de cartes
- Vérification de la bonne distribution des cartes
- Affichage d'un message clair en cas de score > 21
- Calcul du score
- Message de fin de jeu
- Test unitaires divers

Cette liste est non exhaustive et les TODO sont dans tous les fichiers hors headers, Makefile et Readme

---

## 📘 Déroulé type d'une contribution pendant le workshop

Voici un scénario type que vous suivrez pendant le workshop pour chaque contribution :

1. **Création d'une issue** sur GitHub
2. **Création d'une branche avec un nom explicite** pour résoudre l'issue
3. **Utilisation de `git add -p`** pour chaque modification
4. **Création d'une pull request** aprés push
5. **Code review d'un membre de l'équipe**
6. **Merge de la branche** dans branche de développement (main étant considéré comme une branche de **production**)
7. **Rebase des autres membres du groupe** en cas de modification de la branche de développement

---

## 🛠️ Compilation et tests

- `make` : Compilation de l'application principale
- `make test` : Lancement de tous les tests
- `make test_deck` : Lancement des unit tests de deck
- `make test_game` : Lancement des unit tests de game
- `make clean` : Nettoyage des dossiers
- `make re` : Nettoyage et compilation de l'application principale

---

## 📌 Objectifs pédagogiques

- Savoir cloner, brancher, committer, pusher, merger avec Git
- Apprendre à structurer des commits propres et logiques
- Découvrir l'usage des issues, des branches et des PR comme en entreprise
- Prendre de bonnes habitudes de collaboration et de revue de code
