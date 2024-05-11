import React, { useState } from 'react';

function AdditionQuiz() {
  const [num1, setNum1] = useState(Math.floor(Math.random() * 100));
  const [num2, setNum2] = useState(Math.floor(Math.random() * 100));
  const [userAnswer, setUserAnswer] = useState('');
  const [score, setScore] = useState(0);

  const handleInputChange = (event) => {
    setUserAnswer(event.target.value);
  };

  const handleSubmit = (event) => {
    event.preventDefault();
    const answer = parseInt(userAnswer);
    if (answer === num1 + num2) {
      setScore(score + 1);
      setNum1(Math.floor(Math.random() * 100));
      setNum2(Math.floor(Math.random() * 100));
      setUserAnswer('');
    } else {
      setNum1(Math.floor(Math.random() * 100));
      setNum2(Math.floor(Math.random() * 100));
      setUserAnswer('');
    }
  };

  return (
    <div>
      <h2>Addition Calculation Quiz</h2>
      <p>Score: {score}</p>
      <form onSubmit={handleSubmit}>
        <p>
          What is {num1} + {num2} ?
        </p>
        <input
          type="number"
          value={userAnswer}
          onChange={handleInputChange}
          placeholder="Your answer"
          required
        />
        <button type="submit">Submit</button>
      </form>
    </div>
  );
}

export default AdditionQuiz;
