import React from "react"
import { useState } from "react"

function Welcome(props){

    return (
        <h1>Welcome, {props.name}</h1>
    )
}

class Goodbye extends React.Component {

    render() {
        return (
            <h1>Goodbye, friend {this.props.name}!</h1>
        )
    }
}

function ExampleComponent(){
    const [count, setCount] = useState(0);

    const iterator = () => {
        setCount(count + 1);
    }

    return (
        <>
            <p>You clicked {count} times</p>
            <button onClick={iterator}>
                Click Me!
            </button>
        </>
    )
}

function SectionBox(props){

    const boxStyle = {
        width : "800px",
        margin : "10px auto",
        border : "1px black solid",
        display : "flex",
        flexDirection : "row",
        justifyContent : "space-between",
        alignItem : "center"
    }

    if (JSON.parse(props.isLeft))
        return (
            <div style={boxStyle}>
                <img src={props.imgSrc} alt={props.imgAlt} />
                <article>
                    <p>{props.text}</p>
                </article>
            </div>
        )
    return (
        <div style={boxStyle}>
            <article>
                {props.text}
            </article>
            <img src={props.imgSrc} alt={props.imgAlt} />
        </div>
    )
}

export default function Main(){
    const myStyle = {
        backgroundColor : "salmon"
    }

    return (
        <>
            <ExampleComponent />
            <h1 style={myStyle}>Hello, React! Vite...</h1>
            <Welcome name="Budi" />
            <Welcome name="Cindy" />
            <Goodbye name="Dedy" />

            <SectionBox isLeft="true" 
                        imgSrc="https://picsum.photos/id/237/300/200"
                        imgAlt="random"
                        text="Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptas odio, odit quibusdam cum dolorum enim consequuntur sunt maiores molestias eum."
                        />

            <SectionBox isLeft="false" 
                        imgSrc="https://picsum.photos/id/500/500/400"
                        imgAlt="random"
                        text="Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptas odio, odit quibusdam cum dolorum enim consequuntur sunt maiores molestias eum."
                        />
        </>
        
    )
}