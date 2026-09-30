
function toggleMenu() {
    const navigation = document.querySelector(".navigation");
    const menuButton = document.querySelector(".menu-btn");

    if (!navigation || !menuButton) return;

    const open = navigation.classList.toggle("is-open");
    menuButton.setAttribute("aria-expanded", String(open));
    menuButton.setAttribute("aria-label", open ? "Close navigation" : "Open navigation");
    menuButton.textContent = open ? "×" : "☰";
}

function closeMenu() {
    const navigation = document.querySelector(".navigation");
    const menuButton = document.querySelector(".menu-btn");

    if (!navigation || !menuButton) return;

    navigation.classList.remove("is-open");
    menuButton.setAttribute("aria-expanded", "false");
    menuButton.setAttribute("aria-label", "Open navigation");
    menuButton.textContent = "☰";
}

function setActiveNavigation() {
    const current = window.location.pathname.split("/").pop().toLowerCase() || "index.html";
    const links = document.querySelectorAll(".navigation a");

    links.forEach((link) => {
        const href = (link.getAttribute("href") || "").toLowerCase();
        const button = link.querySelector(".nav-btn");

        if (!button) return;

        const active =
            href === current ||
            (current === "" && href === "index.html");

        button.classList.toggle("active", active);
    });
}

function setupPasswordToggles() {
    document.querySelectorAll("[data-password-toggle]").forEach((button) => {
        button.addEventListener("click", () => {
            const input = document.getElementById(button.dataset.passwordToggle);
            if (!input) return;

            const showing = input.type === "text";
            input.type = showing ? "password" : "text";
            button.setAttribute("aria-pressed", String(!showing));
            button.setAttribute("aria-label", showing ? "Show password" : "Hide password");
        });
    });
}

function setupMobileMenu() {
    document.querySelectorAll(".navigation a").forEach((link) => {
        link.addEventListener("click", closeMenu);
    });

    document.addEventListener("click", (event) => {
        const navigation = document.querySelector(".navigation");
        const menuButton = document.querySelector(".menu-btn");

        if (!navigation || !menuButton || !navigation.classList.contains("is-open")) return;

        if (!navigation.contains(event.target) && !menuButton.contains(event.target)) {
            closeMenu();
        }
    });

    window.addEventListener("resize", () => {
        if (window.innerWidth > 760) closeMenu();
    });
}

document.addEventListener("DOMContentLoaded", () => {
    setActiveNavigation();
    setupPasswordToggles();
    setupMobileMenu();
});
