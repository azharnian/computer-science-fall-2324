import { BrowserRouter, Routes, Route, Outlet, Link } from 'react-router-dom'
import './App.css'

function Layout() {
  return (
    <div>
      <h1>This is Layout!</h1>
      <nav>
        <ul>
          <li>
            <Link to={'/'}>Home</Link>
          </li>
          <li>
            <Link to={'/about'}>About</Link>
          </li>
        </ul>
      </nav>
      <Outlet />
    </div>
  )
}

function Home() {
  return (
    <h1>This is Home</h1>
  )
}

const About = () => (<h1>This is About Page.</h1>);

const NoPage = () => (<h1>I'm Sorry, The Page is not Found.</h1>);

function App() {
  return (
    <>
      <BrowserRouter>
        <Routes>
          <Route path='/' element={<Layout />}>
            <Route index element={<Home />} />
            <Route path='home' element={<Home />} />
            <Route path='about' element={<About />} />
            <Route path='*' element={<NoPage />} />
          </Route>
        </Routes>
      </BrowserRouter>
    </>
  )
}

export default App
