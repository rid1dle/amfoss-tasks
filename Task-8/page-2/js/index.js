"use strict";

const buttons = document.querySelectorAll(".button");

for (let i = 0; i < 6; i++) {
  buttons[i].addEventListener("click", function () {
    if (i == 0) {
      localStorage.setItem("My Name = ", "Himanshu");
    } else if (i == 1) {
      const today = new Date();
      window.alert(
        today.getHours() + "." + today.getMinutes() + "." + today.getSeconds()
      );
    } else if (i == 2) {
      document.body.style.background = "#edcb47";
    } else if (i == 3) {
      location.reload();
    } else if (i == 4) {
      window.open();
    } else {
      for (let j = 0; j < 10000; j++) {
        console.log("I did It..!!!");
      }
    }
  });
}
