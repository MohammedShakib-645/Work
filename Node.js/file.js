const express = require("express");

const app = express();

app.use(express.urlencoded({ extended: true }));

app.post("/register", (req, res) => {
    const { name, email, password, age } = req.body;

    // User validation
    if (!name || name.trim() === "") {
        return res.send("❌ Name is required");
    }

    if (!email || !email.includes("@")) {
        return res.send("❌ Enter a valid email");
    }

    if (!password || password.length < 6) {
        return res.send("❌ Password must be at least 6 characters");
    }

    if (!age || isNaN(age) || age < 18) {
        return res.send("❌ Enter a valid age (18 or above)");
    }

    res.send("✅ User validation successful! Registration completed.");
});

app.listen(3000, () => {
    console.log("Server running at http://localhost:3000");
});