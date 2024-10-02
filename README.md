# device-driver-development

Para estudar o desenvolvimento de drivers de dispositivos, irei criar um dispositivo de caractere virtual. O dispositivo terá um buffer de 1024 bytes e será possível ler e escrever dados nele.

Passos do Projeto

1. Criação do driver básico: Comece criando um driver de caráter simples, que vai registrar um dispositivo no kernel e criar um arquivo de dispositivo no /dev.

2. Leitura e Escrita: Implemente as funções de leitura (read()) e escrita (write()) no driver, permitindo que usuários interajam com o dispositivo usando comandos de terminal como echo e cat.

3. Buffer Cíclico (Ring Buffer): Para tornar o projeto mais interessante, implemente um buffer cíclico para armazenar os dados escritos. O buffer vai funcionar como uma fila onde, se o buffer ficar cheio, os dados mais antigos serão substituídos.

4. Tratamento de Concorrência: Adicione mecanismos de controle de concorrência como mutexes ou spinlocks para garantir que dois processos não acessem o dispositivo ao mesmo tempo de maneira insegura.

5. Testes e Logs: Utilize o comando dmesg para depurar e verificar os logs gerados pelo driver ao ser carregado, lido e escrito.

Ambiente de Desenvolvimento

- Ubuntu Server
- Virtual Box
- Visual Studio Code
- Build Essentials
- Linux Headers

Referências:

- [https://www.kernel.org/doc/html/latest/driver-api/index.html](https://www.kernel.org/doc/html/latest/driver-api/index.html)
- [Linux Device Drivers Development Course for Beginners](https://youtu.be/iSiyDHobXHA?si=ux6IE-eiq4UzRc7i) - freeCodeCamp Channel
- [Linux Device Drivers 101 Course](https://engineers.inpyjama.com/learn/ldd-101)
