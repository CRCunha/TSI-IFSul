function numero() {
    var el;

    el = document.getElementById("code").textContent;

    console.log(el);

    document.getElementById('excluir').innerText = el;
}