import { BrowserRouter, Routes, Route} from 'react-router-dom'
import Layout from './Pages/Layout'
import Home from './Pages/Home'
import About from './Pages/About'
import NotFound from './Pages/NotFound'
import './App.css'

function App() {

  return (
    <>
      <BrowserRouter>
        <Routes>
          <Route path='/' element={<Layout />}>
            <Route index element={<Home />} />
            <Route path='home' element={<Home />} />
            <Route path='about' element={<About />} />
            <Route path='*' element={<NotFound />} />
          </Route>

          <Route path='/netflix' element={<Home />}></Route>
        </Routes>
      </BrowserRouter>
    </>
  )
}

export default App
