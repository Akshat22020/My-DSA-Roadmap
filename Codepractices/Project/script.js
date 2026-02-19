/* script.js */
function getWeather() {
    const city = document.getElementById('city').value;
    const apiKey = 'y01af7949e366f224ac1e4c590f1a3e91'; // Replace with your OpenWeatherMap API key
    const apiUrl = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

    fetch(apiUrl)
        .then(response => response.json())
        .then(data => {
            document.getElementById('location').innerText = `${data.name}, ${data.sys.country}`;
            document.getElementById('description').innerText = `Weather: ${data.weather[0].description}`;
            document.getElementById('temperature').innerText = `Temperature: ${data.main.temp} °C`;
            document.getElementById('humidity').innerText = `Humidity: ${data.main.humidity}%`;
            document.getElementById('pressure').innerText = `Pressure: ${data.main.pressure} hPa`;
        })
        .catch(error => console.error('Error:', error));
}
