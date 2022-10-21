const http = require("http");

const host = 'localhost';
const port = 8000;

const requestListener = function (req, res) { };

const server = http.createServer(requestListener);

// Implement method for server to listen 
// Take host and port from a env file and set default values too if not found