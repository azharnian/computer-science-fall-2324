import { useState, useEffect } from 'react'

function CounterComponent() {
  const [count, setCount] = useState(0);

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Clicked Me!</button>
    </div>
  )

}

function App() {

  return (
    <div>
      <CounterComponent></CounterComponent>
    </div>
  )
}

export default App
