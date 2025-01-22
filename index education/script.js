(function() {
     var cards = document.querySelectorAll('.treinamento-card');
     
     cards.forEach(function(card) {
         card.addEventListener('mouseenter', function() {
             this.style.transform = 'scale(1.05)';
         });
         
         card.addEventListener('mouseleave', function() {
             this.style.transform = 'scale(1)';
         });
     });
 })();

 document.addEventListener('DOMContentLoaded', function() {
const slides = document.querySelectorAll('.carousel-slide');
const dots = document.querySelectorAll('.dot');
let currentSlide = 0;
const totalSlides = slides.length;

// Garante que o primeiro slide esteja visível imediatamente
function initCarousel() {
 slides.forEach(slide => slide.classList.remove('active'));
 dots.forEach(dot => dot.classList.remove('active'));

 slides[0].classList.add('active');
 dots[0].classList.add('active');
}

function showSlide(index) {
 slides.forEach(slide => slide.classList.remove('active'));
 dots.forEach(dot => dot.classList.remove('active'));

 slides[index].classList.add('active');
 dots[index].classList.add('active');
}

function nextSlide() {
 currentSlide = (currentSlide + 1) % totalSlides;
 showSlide(currentSlide);
}

// Chama a função de inicialização imediatamente
initCarousel();

// Auto-advance slides every 5 seconds
setInterval(nextSlide, 7000);

// Manual dot navigation
dots.forEach(dot => {
 dot.addEventListener('click', function() {
     const slideIndex = parseInt(this.getAttribute('data-slide'));
     currentSlide = slideIndex;
     showSlide(currentSlide);
 });
});
});
document.addEventListener('DOMContentLoaded', function() {
 const dropdowns = document.querySelectorAll('.dropdown');
 
 
 
 dropdowns.forEach(dropdown => {
     const dropdownToggle = dropdown.querySelector('a');
     const dropdownContent = dropdown.querySelector('.dropdown-content');

     // Evento de hover para mostrar/esconder dropdown
     dropdown.addEventListener('mouseenter', function() {
         dropdownContent.style.display = 'block';
     });

     dropdown.addEventListener('mouseleave', function() {
         dropdownContent.style.display = 'none';
     });

     // Permite que links dentro do dropdown funcionem normalmente
     dropdownContent.addEventListener('click', function(e) {
         // Permite que links sejam clicáveis
         if (e.target.tagName === 'A') {
             window.location.href = e.target.href;
         }
     });
 });

 // Opcional: Fecha dropdowns se clicar fora
 document.addEventListener('click', function(e) {
     if (!e.target.closest('.dropdown')) {
         dropdowns.forEach(dropdown => {
             dropdown.querySelector('.dropdown-content').style.display = 'none';
         });
     }
 });
});

document.addEventListener('DOMContentLoaded', function () {
    // Para os cabeçalhos principais (Treinamentos e Perguntas Frequentes)
    const faqHeaders = document.querySelectorAll('.faq-header');
    
    faqHeaders.forEach(header => {
        header.addEventListener('click', function () {
            const faqContent = this.nextElementSibling;
            const faqIcon = this.querySelector('i');
            
            faqContent.classList.toggle('active');
            faqIcon.classList.toggle('fa-chevron-down');
            faqIcon.classList.toggle('fa-chevron-up');
        });
    });

    // Para as perguntas individuais dentro de cada seção
    const faqQuestions = document.querySelectorAll('.faq-question');
    
    faqQuestions.forEach(question => {
        question.addEventListener('click', function() {
            // Toggle da classe active no botão
            this.classList.toggle('active');
            
            // Encontra e toggle da exibição da resposta
            const answer = this.nextElementSibling;
            if (answer.style.display === 'block') {
                answer.style.display = 'none';
            } else {
                answer.style.display = 'block';
            }
            
          
        });
    });
});