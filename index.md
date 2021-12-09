### Abstract

A mini handpan was built with pop cans, pizeoelectric sensors, and a Arduino Mega 2560 microcontroller. 
<!--- add more when finished -->

### Introduction

Handpan instrument is a group of metallic percussion instruments played with hands that are similar to Hang® (cre­at­ed by PANArt tuners Sabi­na Schär­er and Felix Rohn­er in 2000 in Switzer­land[^1]), consisting of two hemispherical shells of nitrided or stainless steel. Its extraordinary sound is often described as calming and peaceful, which can be used for stress-release[^2]. Originated from the Caribbean steelpan instrument, a handpan typically has 8-9 notes in a pentatonic scale. Figure 1 is a sample image of a free integral Hang® built by PANArt, where seven harmonically tuned notes are around a central deep tone, which "excites the Helmholtz (cavity) resonance of the
body of the instrument"[^3]. Figure 2 is a sample tuning scale. It can be turned in a wide range of scales, some examples are illustrated in Figure 3. 

<p align="center">
  <img height="300" src="https://upload.wikimedia.org/wikipedia/commons/a/a3/Panart-freies-integrales-hang.jpg" alt="Figure 1. The side, top, and bottom view of a Hang®.">
  <figcaption align = "center"><b>Figure 1. The side, top, and bottom view of a Hang®[^4].</b></figcaption>
</p>
<p>&nbsp;</p>
<p align="center">
  <img width="350" src="https://acoustics.org/pressroom/httpdocs/155th/wesselfig3.gif" alt="Figure 2. A sample tuning scale beginning with D3 note in the center."> 
  <figcaption align = "center"><b>Figure 2. A sample tuning scale beginning with D3 note in the center[^5].</b></figcaption>
</p>
<p>&nbsp;</p>
<p align="center">
  <img width="550" src="./img/HangScales.png" alt="Figure 3. Sample tuning scales.">
  <figcaption align = "center"><b>Figure 3. Sample tuning scales[^6].</b></figcaption>
</p>

<p>&nbsp;</p>
<!---comment-->
Like all the other beautiful handmade instruments in the world, a good quality physical handpan is not easily accessible. Tuning a handpan requires skillful hammering that needs years of practice, because there are nearly 60 parameters to be considered when tuning a sound into steel, according to A. Achong[^3]. Given the fact that tuning steelpans is an intuitive and complicated task, the entire building process of a typical handpan like in Figure 1 usually takes 2-3 months, according to AYASA Instruments, a well-konwn handpan manufacturer in Netherlands[^7]. The complete process is described in a blog post by Sylvan Paslier[^8]. Since there are not many experienced tuners of this young instrument, and the demand is still increasing, a good handpan with 8 or 9 notes typically costs 3~4k CAD (before tax and shipping). In addition, it is not easy to carry around as the diameter is around 55 cm and it weighs nearly 5 kg without the case. Therefore, for this project, a mini handpan was built with pop cans, pizeoelectric sensors, and a arduino microcontroller, which is much more accessible to the public and ideal for practice purpose.

<!---<p>&nbsp;</p>
This Ceramic Piezo Vibration Piece Sensor buffers a piezoelectric transducer that responds to strain changes by generating a measurable output voltage change which is proportional with the strength of vibration. So you can know the extent of vibration. Different from digital vibration sensor that only accounts times, this analog one can tell extent of vibration.
When the piezoelectric ceramic shocking will generate an electrical signal, controller analog port can be perceived slight vibration signals, also can be realized with vibration interactions related works, such as electronic drums.
Working Voltage: 3.3V or 5V. Working Current: 1mA. Interface Type: Analog Output.
Please connect analog voltage ceramic vibration sensor to the UNO controller's analog port A0 in accordance with the procedure, then observe the output value of serial port when the vibration degree is different, it can realize interactive works related to the vibration.
Strong After-sales Service Team: As long as you have any questions about the product, we will resolve your issue immediately if received your email, your satisfactory purchase experience is our greatest hope! How to email us? Plz click “MakerHawk-US” and click “Ask a question” to email us! Looking forward to your consultation!
https://www.amazon.ca/gp/product/B07KS5NV4V/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&th=1
-->
<br>
Pizeoelectric Sensors are active sensors in which the mechanical quantities (such as force, strain, pressure, acceleration, and acoustic emission) applied to the transduction element made of a piezoelectric material yields an electric charge due to the piezoelectric effect - a proportional change in the electric polarization of the piezoelectric material resulting from a mechanical deformation[^9]. Sensing materials include single crystals, piezoelectric ceramics, textures and thin films. Because of the high frequency, wide measuring range, high stability and many other advantages, these sensors are widely used in our daily life, including fire alarms, microwave ovens, microphones, just to name a few. Figure 4 is the Ceramic Piezo Vibration Sensor Module used for this project. It consists of a piezoelectric ceramics sensor and a breadboard-friendly pc board, purchased from Amazon.

<p align="center">
  <img width="550" src="./img/PiezoelectricSensor.png" alt="Figure 4. A Ceramic Piezo Vibration Sensor Module.">
  <figcaption align = "center"><b>Figure 4. A Ceramic Piezo Vibration Sensor Module[^10].</b></figcaption>
</p>



### Methods



### Results


### Discussion


### Conclusion



[^1]: PANArt. ‘Copyright: Questions and Answers’. Panart (en). Accessed 1 December 2021. https://panart.ch/en/articles/copyright-questions-and-answers.

[^2]: Malzer, Clara. ‘The Magic of The Handpan: The Instrument For Stress-Release And Harmony’. The Conscious Club. Accessed 1 December 2021. https://theconsciousclub.com/articles/2019/10/24/the-magic-of-the-handpan-the-instrument-for-stress-release-and-harmonynbsp.

[^3]: Rohner, Felix, and Sabina Schärer. ‘History, Development and Tuning of the Hang’, 2007. http://www.hangblog.org/panart/Paper-Hang-2007.pdf.

[^4]: ‘File:Panart-Freies-Integrales-Hang.Jpg - Wikipedia’. Accessed 1 December 2021. https://commons.wikimedia.org/wiki/File:Panart-freies-integrales-hang.jpg.

[^5]: Wessel, David, Andrew Morrision, and Thomas D. Rossing. ‘SOUND OF THE HANG’. ACOUSTICS.ORG, 4 July 2008. https://acoustics.org/pressroom/httpdocs/155th/wessel.htm.

[^6]: Rossing, Thomas D., Andrew Morrision, Uwe Hansen, Felix Rohner, and Sabina Schärer. ‘ACOUSTICS OF THE HANG: A Hand-Played Steel Instrument’, 2007. http://www.hangblog.org/panart/2-S2-4-IsmaRossing.pdf.

[^7]: ‘Ayasa - Acquire an Instrument’. Accessed 1 December 2021. https://ayasainstruments.com/acquire-an-ayasa.

[^8]: Paslier, Sylvain. ‘How Are Handpans Made? A Step-by-Step Guide’. sylvainpasliermusic, 22 August 2019. https://www.sylvainpasliermusic.com/post/how-are-handpans-made.

[^9]: Gautschi, Gustav. ‘Introduction’. In Piezoelectric Sensorics: Force Strain Pressure Acceleration and Acoustic Emission Sensors Materials and Amplifiers, edited by Gustav Gautschi, 1–3. Berlin, Heidelberg: Springer, 2002. https://doi.org/10.1007/978-3-662-04732-3_1.

[^10]: ‘MakerHawk 4pcs Analog Ceramic Piezo Vibration Sensor Module 3.3V/5V for Arduino DIY Kit: Amazon.Com: Industrial & Scientific’. Accessed 1 December 2021. https://www.amazon.com/MakerHawk-Analog-Ceramic-Vibration-Arduino/dp/B07KS5NV4V.



<!--- 
PANArt. ‘Hang®’. Panart (en). Accessed 1 December 2021. https://panart.ch/en/instruments/sound-sculpture-hang. 
Rossing, Thomas D., Uwe J. Hansen, Felix Rohner, and Sabina Schärer. 2001. “The HANG: A Hand Played Steel Drum.” The Journal of the Acoustical Society of America 110 (5): 2649–49. https://doi.org/10.1121/1.4809019.

-->





### Brief description

Inspired by the [Light-up Piezo Drum Kit by Yolanda Ma](https://yolanmz.github.io/light-up-piezo-drum/), and the [Playable Drum Set using Coke Cans by SunFounder Maker Education](https://youtu.be/UVISquEcuzg?t=166), I want to create a small personalized handpan with Arduino kit and Max patch that allows me to play handpan in different scales. 

![Yolanda Ma's project](https://yolanmz.github.io/light-up-piezo-drum/media/arduino_piezo_drum_kit.jpeg)
![image](https://user-images.githubusercontent.com/59303880/137526383-78408b9b-4311-49d3-804c-ed8e59c95446.png)


#### Background

Handpan (Hang instrument): 

![HANG image](https://upload.wikimedia.org/wikipedia/commons/a/a3/Panart-freies-integrales-hang.jpg)

Figure 1. "Free Integral Hang (2010)"

- percussion instrument played with hands
- created in January 2000 by the tuners of PANArt Hangbau AG
  (Felix Rohner and Sabina Schärer in Bern, Switzerland)
- based on the Caribbean steelpan instrument
- typically has 9 notes in a pentatonic scale
- a Helmholtz resonator

![image](https://user-images.githubusercontent.com/59303880/137510107-29cd85a9-9c9a-4b2a-ae89-d5957215ad4e.png)

Figure 2. An example of the tuning of HANG.

![image](https://user-images.githubusercontent.com/59303880/137517735-666aa75c-93aa-4282-ac1b-699b52dc8a32.png)

Figure 3. Other scales of HANG.

Some famous handpan music pieces:
1. [Sam Maher - New York Handpa](https://youtu.be/6oremFnbgO0)
2. [Hang Massive - Once Again - 2011 ( hang drum duo )](https://youtu.be/xk3BvNLeNgw)

#### Limitations/downsides

- not very protable (~ 5kg without case; 50-60 cm diameter)
- hard to tune
- fixed scale on a physical instrument
- costly (~$3500 for a 8/9-note Hang)

#### Plan (ideal for practice or before buying a physical one)

- ~20 cm diameter, < 1kg
- never be out-of-tune
- personalized note/scale
- affordable materials

#### Materials

- papers/pop cans/else
- piezoelectric sensors
- arduino kit
- max/msp
- laptop

#### To explore

- handpan tutorials: play the pre-programmed song step-by-step (i.e. note by note), by lighting up the note/notes and proceed when the player hit the note/notes.
- have a metronome as a background for practice

Note: The actual content is subject to change.


<!---
## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/carrieeex/MUMT306-project/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/carrieeex/MUMT306-project/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
-->
