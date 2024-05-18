import {Link, Outlet} from 'react-router-dom';

export default function Layout(){
    return (
    <header>
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
    </header>
    )
}