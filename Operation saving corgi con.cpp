#include <iostream>

int main() {

std::cout << "\n";
std::cout << "Act 1:\n";
std::cout << "\n";
std::cout << "Welcome to corgi con! In this game you are a undercover corgi agent youre mission is to stop the evil cat company called meouch Inc. because they are here to cancel the convention forever because their jelly.\n";
std::cout << "Heads up agent!! This is a persuit objective you see a cat in the far distance what do you do?\n";

char choice1{};

for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B'; i++) {

std::cout << "A) Sneak up and interigate.\n";
std::cout << "or\n";
std::cout << "B) Chase after him.\n";
std::cin >> choice1;

}

switch (choice1) {

case 'A':
std::cout << "You decide to perform a 'hide-in-plainsite' tactic and approch the cat no problem after getting close proximity you push him under a merchant table and started interigating him. He says hes a rouge employee and wants to sabatoge the plan after a unforgivable betrayal. Now having a common enemy you two decide to team up and take down the evil jelly cats!!\n";
break;

case 'B':
std::cout << "You went for a 'run and gun' tactic and started to chase after him which caused a huge scene after catching him he says hes a rouge cat and wants to get revenge for a betrayal but after that huge scene and interigation theres was a sandstorm but at a beach? but it turns out it was the cats retreating. You get an call from HQ stating 'Mission Failed well get them next time!'\n";
std::cout << "GAME OVER\n";
return 0;

default:
std::cout << "You choiced buzzlightyear!!! TO INFINITY AANN.... WAIT WAIT wait thats not a choice. So NO im not going to finish the quote so goodbye.\n";
std::cout << "GAME OVER.\n";
return 0;

}

std::cout << "\n";
std::cout << "Act 2:\n\n";
std::cout << "\n";
std::cout << "Now that you have made an unlikely ally by youre side you two start discusing where are the cats going to strike. Looks like the humans are gathering around an obstical course to show off some skills from civilian corgis most likely they are going to attack here. There is going to be 5 contestants in this obstical course, right from the getgo one of these contestance is an imposter you can faintly smell them but with the high winds and human oder youre having a difficult time pin pointing which one is the imposter thats...*clears throat*....amoung us.\n";
std::cout << "\n";
std::cout << "Heads up agent!! This is going to be a search and capture objective one of these contestants is an imposter but who is it? Is it...\n";

char choice2{};

for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B' &&choice2 != 'C' && choice2 != 'D' && choice2 != 'E'; i++) {

std::cout << "A) The corgi that can surf called super corgi jojo?\n";
std::cout << "B) The one that has a dinosour costume?\n";
std::cout << "C) The yellow rain coat contestant?\n";
std::cout << "D) The one that has the sigh saying 'defenitly not a cat'?\n";
std::cout << "E) or the one thats wearing a bodysuit thats looking pretty tall for a corgi and has a long tail?.\n";
std::cin >> choice2;

}

switch (choice2) {

case 'A':
std::cout << "You lauched youreself to the imposter called super corgi jojo and the humans where confused 'is this part of the obstical course? why is this dog launching him self to a famous instagram corgi? is he a fan?' after all the talk you where kicked out and banned from corgi con soon after you see youre partner saying 'you too? this is not going to end well' you get a call from HQ saying 'Mission failed there wont be a next time they won....'\n";
std::cout << "GAME OVER\n";
return 0;

case 'B':
std::cout << "The dinosour costume provides a good cover up of any body type so you end up ripping up the costume!!! ........Just kidding you just went up to the contestant and see the front and see their face and appon your discovery it was just another corgi but your partner says that was not a good idea what you just did because some cat said 'Their on to us RETREAT!!' and followed by a sandstorm and a call saying 'Mission failed well get them next time'.\n";
std::cout << "GAME OVER\n";
return 0;

case 'C':
std::cout << "The bright yellow rain coat is sure catching your eye so you decide to approch and pull down the hoodie and it shows just an ordinary corgi nothing more nothing less but then some cat was watching you and said 'S@#% they are trying to sniff us out RETREAT!!!' followed by a sandstorm and a call saying 'Mission failed well get them next time'.\n";
std::cout << "GAME OVER\n";
return 0;

case 'D':
std::cout << "You for some reason went up to this bad disguise and ask is this a joke and he says yes and you suspect that this might be a bait to help the cats if someone was on to them and your best judgement was right some cat says 'it worked and now RUN!!' now their is a sandstorm and a mission failed message on your screen.\n";
std::cout << "GAME OVER\n";
return 0;

case 'E':
std::cout << "This last participant is looking pretty strange first this 'corgi' is looking pretty tall you seen big corgis but not tall ones its geneticly impossible. Next corgis dont have tails unless their mix or a cardigen but even then they are naturaly small so you tackle the participant and rip threw their disguise and your suspicion was right it is a cat and you arrest him.\n";
break;

default:
std::cout << "You targeted a corgi!! whos disguise is so good that it looks so real because it is real you wet noodle.\n";
std::cout << "GAME OVER\n";
return 0;

}

std::cout << "\n";
std::cout << "Act 3:\n\n";
std::cout << "\n";
std::cout << "After arresting the imposter your partner informed you of the next attack those wet noodles are planning. They are planning to steal, sabotage, and destroy all of the merchants that the humans have put in. Heads up agent!!! This is going to be a protect and defend objective so make your choice wisely...\n";

std::cout << "\n";
std::cout << "Oh No! theres a cat that have just stolen all of the money from a merchant who was selling stickers shirts and butts and you see the criminal running but you also see two cats stealing a box and running rather fast for what it looks to be heavy.....\n";
std::cout << "Who do you stop??\n";
std::cout << "Criminal number 1) The money thef.\n";
std::cout << "or\n";
std::cout << "Criminal number 2) The duo who are stealing a box full of stuff.\n";
int answer1 = 0;
std::cin >> answer1;

if (answer1 == 1) {

  std::cout << "You chased down the one who stole the money and luckly there are no trees for him to climb on otherwise he would have jump onto a car and rode of into the sunset and burn all of the money with it... just kidding he would have just gottin away.\n";

} else if (answer1 == 2) {

  std::cout << "You took down the duo that where stealing a box that can have anything inside but your partner stop you just in time saying 'That box had nothing inside so you 1000% wasted your time and the actual thef got away with a huge amount of money' a call from HQ saying 'they got away looks like the convention is going to shut down for good to prevent people from getting hurt.\n";
  std::cout << "GAME OVER\n";
  return 0;

} else {

  std::cout << "You stop the giant cupcake from distroying San Fransico!! Your confused right? Its because you picked the wrong choice so the end.\n";
  std::cout << "GAME OVER\n";
  return 0;

}

std::cout << "After taking down and arrested the thef you return the money and your partner said its a good thing you went after the right cat cause when he took down the duo they where stealing a box that had nothing in it who steals an empty box? but anyways its time to protect the next tent it looks like the cats are trying to sabotage a tent that is showcasing a corgi mobile game where you are saving the queen of England from the evil cats gang called the kettle kitties. They are going to install a flash drive on a PC that has a very bad malware that will erase all of data in that computer your partner informed but you also see another cat trying to cut all the power cables those good for nothing trouble makers.\n";
std::cout << "Which one of those a******s is going to to the most distruction?\n";
std::cout << "Hairball number 1) The flash drive of death\n";
std::cout << "or\n";
std::cout << "Hairball number 2) The cable cutter\n";
int answer2 = 0;
std::cin >> answer2;

if (answer2 == 1) {

  std::cout << "You aimed at the cat who is installing the flash drive because who knows what else could be in that drive so you took down the perpatratior with no trouble\n";

} else if (answer2 == 2) {

  std::cout << "You gunned at the cat who was going to damage the electronics but when you approtch him the electronics started to go crazy and started to shut down you and the cat where looking confused while you where distracted the cat put the flash drive in and waited for the software to kick in. The human said 'Hey Fernando the tv just gave out because of all the high winds blowing the sand luckily i have a tablet to showcase our game' but as soon as the little technical difficultys ended the human named Fernando said 'Hey Alissa did you swaped the computer or something there is no files here'. After a huge scene of tech troubles they find out about the flash drive and they said 'this wiped the memory on our computer who put this?. After that people think its no longer safe here especially with tech stuff so people are leaving by the hundreds. A message from HQ 'This is not going to end well....\n";
  std::cout << "GAME OVER\n";
  return 0;

} else {

  std::cout << "You can choose between the blue, red, or clear pill which do you choose? Just kidding its a trick question you took the clear pill cause its the wrong choice.\n";
  std::cout << "GAME OVER\n";
  return 0;

}

std::cout << "Good work oprative those a******s are about to attack one last tent. This last tent is going to be the last objective so look sharp. This tent is a photo booth with a cardboard cut out of the Queen Elizebeth and the UK flag and the cats want to destroy it because thats what their good at. Looks like their getting desperate and their blowing their cover now they are running at the tent and the humans are reacting and saying 'Why are their cats here?'.\n";
std::cout << "Heads up agent this is the final battle one cat have their claws out and he is about to scratch up Queen Elizbeth how would you stop him?.\n";

std::cout << "\n";
std::cout << "Do you?\n";
std::cout << "1) Do it stealthy?\n";
std::cout << "or\n";
std::cout << "2) Go guns blazzing.\n";
int answer3 = 0;
std::cin >> answer3;

if (answer3 == 1) {

  std::cout << "You waited for the right time to strike but since their going loud and dumb but they are cutting the cardboard rather quick and also scratch up the UK flag along with it the tent host was angry and packed up since they think this place has a cat problem and its driving people away. A call from HQ said 'Mission failed we lost...\n";
  std::cout << "GAME OVER\n";
  return 0;

} else if (answer3 == 2) {

  std::cout << "You went guns blazzing since they are getting desperate you took down one cat and your partner help you arrest him now their is one last cat to take down.\n";

} else {

  std::cout << "You saved the Queen of England by the evil cat gang!! but you do know what you choosed right?\n";
  std::cout << "GAME OVER\n";
  return 0;

}

std::cout << "Now the last cat is located on top of the tent but you cant reach him and now hes taunting you and hes getting ready to rip the flag up. How do you handle this?\n";

std::cout << "\n";
std::cout << "1) Send you partner.\n";
std::cout << "or...\n";
std::cout << "2) Call in a sniper!!\n";
int answer4 = 0;
std::cin >> answer4;

if (answer4 == 1) {

  std::cout << "You decide to send your partner because this is also his fight and they are ruffing it down up their all you can do is watch.... after you partner push down the cat the cat was now going to attack the humans under the tent they began screaming but youre quick reflex took down the cat and the humans look relif that the cat was stop and now they where petting you and said 'Good job little buddy' well you know what they say a dog is a mans best friend but you couldnt done it with out the help of youre trusted commrade.\n";

} else if (answer4 == 2) {

  std::cout << "You called in a sniper and you send the exact coordinates and you hear in a message saying 'taking the shot' and what follows was a explosion of red mist and humans where shocked and started to see the dead cat that was ripped in half and the humans where screaming and running away and a call from HQ saying 'THAT was not a smart idea wasnt it?'\n";
  std::cout << "GAME OVER\n";
  return 0;

} else {

  std::cout << "You called in ghostbusters!!! BUT you do know they dont deal with LIVING things right??\n";
  std::cout << "GAME OVER\n";
  return 0;

}

std::cout << "You looked around and see nothing out of the ordinary and your director came and see you saying 'Well done agent looks like the cats gave up and wont be striking anytime soon thinking about handling pro missions?' You said yes on one condition if he recruits youre partner and he responds with 'Yeah sure i saw how he could be a great edition to the team' looks like you two will now be the best duo and now we can take the fight to them 'lets take down Meouch INC!!! he says\n";
std::cout << "Congratulations!!!! you won the game and now lets take down evil cats in the next adventure...\n";
return 0;

}
