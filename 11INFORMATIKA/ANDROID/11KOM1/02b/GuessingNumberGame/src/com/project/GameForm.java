package com.project;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GameForm {
    private JPanel GamePanel, HeaderPanel, ContentPanel, FooterPanel, SubmitBtnPanel;
    private JLabel TitleLabel, UserInputLabel, MessageLabel, CopyrightLabel;
    private  JTextField UserInputField;
    private JButton SubmitBtn;

    private int randomNumber;


    public GameForm(int f, int e) {
        randomNumber = getRandomNumber(f, e);
        System.out.println(randomNumber);
        SubmitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int userInput = getUserInputField();
                checkGuessNumber(userInput);
//                System.out.println(userInput);
            }
        });
    }

    public void run() {
        JFrame frame = new JFrame("GameForm");
        frame.setContentPane(GamePanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }

    private int getRandomNumber(int i, int f){
        return (int) (Math.random() * (f - i) + i);
    }

    private void checkGuessNumber(int n){
        String msg = "";
        if (n < this.randomNumber){
            msg = n + " is too low. Try again!";
        } else if (n > this.randomNumber){
            msg = n + " is too high. Try again";
        } else {
            msg = n + " is correct. You win!";
        }
        MessageLabel.setText(msg);
    }

    private int getUserInputField(){
        return Integer.parseInt(UserInputField.getText());
    }
}
