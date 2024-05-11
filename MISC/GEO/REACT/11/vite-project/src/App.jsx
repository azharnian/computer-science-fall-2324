import React, { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function Welcome(props){
  return (
    <h1>Welcome, {props.name}!</h1>
  )
}

class Goodbye extends React.Component {

  render() {
    return (
      <h1>Good Bye, {this.props.name}!</h1>
    )
  }

}

function App() {

  return (
    <>
      <Welcome name="Andi"/>
      <Goodbye name="Budi"/>
    </>
  )
}

export default App
