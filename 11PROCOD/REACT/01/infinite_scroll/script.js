let pokemonTemplate = Handlebars.compile(document.getElementById("pokeCard").innerHTML); 

let offset = 0;
const limit = 20;

async function fetchPokemon() {
    const response = await fetch(`https://pokeapi.co/api/v2/pokemon?offset=${offset}&limit=${limit}`);
    const data = await response.json();
    offset += limit;
    pokemonsArr = [];
    data.results.forEach(element => {
        const url = element.url
        const segments = url.split('/');
        const id = segments[segments.length - 2];
        pokemonsArr.push(
            {
                id : id,
                name : element.name,
                url : element.url,
                imageUrl : `https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/${id}.png`
            }
        )
    });
    return { pokemons : pokemonsArr };
}

function renderPokemon(pokemonList) {
    const container = document.getElementById('content');
    const html = pokemonTemplate(pokemonList);
    container.insertAdjacentHTML('beforeend', html);
}

async function initialLoad() {
    const pokemonList = await fetchPokemon();
    renderPokemon(pokemonList);
}



document.querySelector("button").addEventListener('click', async () => {
    const pokemonList = await fetchPokemon();
    renderPokemon(pokemonList);
})

// window.addEventListener('scroll', () => {
//     if (window.innerHeight + window.scrollY >= document.body.offsetHeight) {
//         console.log("bottom!")
//     }
// });

window.addEventListener('scroll', async () => {
    if (window.innerHeight + window.scrollY >= document.body.offsetHeight) {
        const pokemonList = await fetchPokemon();
        renderPokemon(pokemonList);
    }
});

initialLoad();
// document.getElementById('yearText').innerHTML = new Date().getFullYear();