package com.game;

public class Main {
    public static void main(String[] args){
        GameForm game = new GameForm();
        System.out.println(game.getRandomNumber());
        game.run();
    }
}
