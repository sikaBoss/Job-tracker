const backendURL = "http://localhost:8080";

async function testBackend() {
    try {
        const response = await fetch(backendURL + "/api/test");
        const text = await response.text();
        console.log(text);
    } catch (error) {
        console.log("Backend is not running.");
    }
}

testBackend();
