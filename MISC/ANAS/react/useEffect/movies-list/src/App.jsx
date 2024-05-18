import { useState, useEffect } from 'react'

function CounterComponent() {
  const [count, setCount] = useState(0);

  useEffect(()=>{
    console.log(`You clicked ${count} times`);
  }, [count])

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Clicked Me!</button>
    </div>
  )

}

function TimerComponent(){
  const [count, setCount] = useState(0);

  useEffect(()=>{
    setTimeout(()=>{
      setCount((count +1));
    }, 1000);
  })

  return (
    <div>
      <h1>I've rendered {count} times!</h1>
    </div>
  )
}

function FetchDataComponent(){
    const [movies, setMovies] = useState([]);
    const [loading, setLoading] = useState(true);
    const [error, setError] = useState(null);
  
    useEffect(() => {
      const fetchMovies = async () => {
        try {
          const response = await fetch('/data.json');
          if (!response.ok) {
            throw new Error('Network response was not ok');
          }
          const data = await response.json();
          if (data.Response === "False") {
            throw new Error(data.Error);
          }
          setMovies(data.Search);
        } catch (error) {
          setError(error.message);
        } finally {
          setLoading(false);
        }
      };
  
      fetchMovies();
    }, []);
  
    if (loading) return <div>Loading...</div>;
    if (error) return <div>Error: {error}</div>;
  
    return (
      <div>
        <h1>Movies</h1>
        <ul>
          {movies.map(movie => (
            <li key={movie.imdbID}>{movie.Title} ({movie.Year})</li>
          ))}
        </ul>
      </div>
    );
}

function App() {

  return (
    <div>
      <FetchDataComponent></FetchDataComponent>
      <CounterComponent></CounterComponent>
      <TimerComponent></TimerComponent>
    </div>
  )
}

export default App
