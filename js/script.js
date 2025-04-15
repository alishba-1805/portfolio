
// Page Transition Effect
const links = document.querySelectorAll('a[href^="#"]');
const pageTransition = document.querySelector('.page-transition');

links.forEach(link => {
    link.addEventListener('click', (e) => {
        e.preventDefault();
        pageTransition.classList.add('active');
        
        setTimeout(() => {
            const targetId = link.getAttribute('href');
            document.querySelector(targetId).scrollIntoView({ behavior: 'smooth' });
            pageTransition.classList.remove('active');
        }, 500);
    });
});

// Form Submission
document.querySelector('.contact-form').addEventListener('submit', (e) => {
    e.preventDefault();
    alert('Thank you for your message! I will get back to you soon.');
});
