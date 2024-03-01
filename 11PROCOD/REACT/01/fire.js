import { initializeApp } from 'https://www.gstatic.com/firebasejs/10.4.0/firebase-app.js'

import { getAnalytics } from 'https://www.gstatic.com/firebasejs/10.4.0/firebase-analytics.js'

import { getAuth } from 'https://www.gstatic.com/firebasejs/10.4.0/firebase-auth.js'
import { getFirestore } from 'https://www.gstatic.com/firebasejs/10.4.0/firebase-firestore.js'

const firebaseConfig = {
    //  CONTAIN API CONFIG FROM FIREBASE
};

const app = initializeApp(firebaseConfig);

async function getFabsGadgets(){
    let result = await fetch("https://fabian-project-1afc4-default-rtdb.asia-southeast1.firebasedatabase.app/gadgets.json");

    let data = await result.json();
    return data;
}

export { getFabsGadgets };