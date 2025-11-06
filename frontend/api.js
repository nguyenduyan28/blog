
document.addEventListener("DOMContentLoaded", () => {
  const login_form = document.getElementById('login_form');

  login_form.addEventListener("submit", async (event) => {
    event.preventDefault(); // prevent reload
    const username = document.getElementById('user_name').value;
    const password = document.getElementById('password').value;

    console.log('User name: ', username);
    console.log('Password: ', password);

    try{
      const res = await fetch('/api/login', {
        method: 'POST',
        headers: {'Content-Type': 'application/json'},
        body: JSON.stringify({username, password}),
      });

      const data = await res.json();
      console.log('Response: ', data);
    } catch(err){
      alert("Error: " + err);
    }

  });

})