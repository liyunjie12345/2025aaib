// week10_1_happy_bubble_part1
PImage toy1, toy2;// 變數宣告
// int a, b;
void setup(){
  size(400, 495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1);// 1
  if(mousePressed) image(toy2, 0, 0);
}
