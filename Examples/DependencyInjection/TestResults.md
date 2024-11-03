## Test result
The output is "Doing something...". This is due to calling the doSomething() method of the Service class. 
The Client class uses the service through the IService interface, but because we inject the implementation of the Service class, the actual implementation of the doSomething() method is called.

![Ekran görüntüsü 2023-02-23 231734](https://user-images.githubusercontent.com/86796541/221052335-5e4a9a18-863b-4e7c-a2ac-b089a1d5a313.png)
