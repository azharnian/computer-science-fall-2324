package com.game;

import  javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GameForm {
    private JPanel GamePanel;
    private JPanel HeaderPanel;
    private JLabel TitleLabel;
    private JPanel ContentPanel;
    private JPanel FooterPanel;
    private JLabel UserInputLabel;
    private JTextField UserInputField;
    private JLabel MessageLabel;
    private JButton SubmitButton;
    private JLabel CopyrightLabel;

    private int randomNumber = (int) (Math.random() * 100);
    private String msg = "";

    public GameForm() {
        SubmitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int userInputNumber = getUserInput();
                checkUserInput(userInputNumber);
                MessageLabel.setText(msg);
                UserInputField.setText("");
            }
        });
    }

    private void checkUserInput(int n){
        if (n == -1){
            this.msg = "";
        } else if (this.randomNumber == n) {
            this.msg = "You win...!";
        } else if (n < this.randomNumber){
            this.msg = n + " is too low, try again!";
        } else {
            this.msg = n + " is too high, try again";
        }
    }

    private int getUserInput(){
        try
        {
            return Integer.parseInt(UserInputField.getText());
        }
        catch (Exception e)
        {
            this.msg = "Invalid input";
            JOptionPane.showMessageDialog(GamePanel, this.msg,
                    "Error", JOptionPane.ERROR_MESSAGE);
        }
        return -1;
    }

    public int getRandomNumber(){
        return this.randomNumber;
    }

    public void run(){
        JFrame frame = new JFrame("GameForm");
        frame.setContentPane(GamePanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}
