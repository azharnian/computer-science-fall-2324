import React, { useState } from 'react';

function AdditionQuiz() {
  const [state, setState] = useState({
    num1: Math.floor(Math.random() * 100),
    num2: Math.floor(Math.random() * 100),
    userAnswer: '',
    score: 0
  });

  const handleInputChange = (event) => {
    setState({ ...state, userAnswer: event.target.value });
  };

  const handleSubmit = (event) => {
    event.preventDefault();
    const answer = parseInt(state.userAnswer);
    if (answer === state.num1 + state.num2) {
      setState((prevState) => ({
        ...prevState,
        score: prevState.score + 1,
        num1: Math.floor(Math.random() * 100),
        num2: Math.floor(Math.random() * 100),
        userAnswer: ''
      }));
    } else {
      setState((prevState) => ({
        ...prevState,
        num1: Math.floor(Math.random() * 100),
        num2: Math.floor(Math.random() * 100),
        userAnswer: ''
      }));
    }
  };

  return (
    <div>
      <h2>Addition Calculation Quiz</h2>
      <p>Score: {state.score}</p>
      <form onSubmit={handleSubmit}>
        <p>
          What is {state.num1} + {state.num2} ?
        </p>
        <input
          type="number"
          value={state.userAnswer}
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
