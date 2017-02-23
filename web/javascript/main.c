body { margin: 0; }
iframe { width: 100%; height: 100%; }


.content { width: 100%; height: 100%; position: absolute; }
.left { width: 150px; height: 100%; background-color: #5a4b47; }
.right { position: absolute; top: 50px; right: 50px; bottom: 50px; left: 250px; overflow: auto; }

.left>div:first-child { margin-top: 50px; }
.item { float: left; width: 150px; }

.title { cursor: pointer; font-size: 22px; padding: 10px 0 10px 10px; }
.title:hover { background-color: #66694a; }
.title.selected { background-color: #66694a; }

.classify { display: none; cursor: pointer; font-size: 20px; list-style: none; }
.classify a { display:block; padding: 5px 0 5px 20px; color: #000; text-decoration: none; }
.classify a:hover { background-color: #66694a; }
.classify a.selected { background-color: #fff; }


