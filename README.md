# garbage-collection

## Problem statement:
    A city is sandwiched between two rivers on its east and west. All streets in the city run north to south. A garbage-moving barge travels through the east river each day. 

    The city council decides to use a drone to collect garbage and transport it to the barge. However, the drone can only fly in a straight line, so it is decided that the drone will start its flight from the west end of the city and fly east, picking up garbage from one point on each street.

    The drone cannot transport the large volume of garbage produced by all homes in the city at one go. To manage this load, the city council uses a computer program to randomly choose one-seventh of the homes everyday. The residents of the chosen homes drop off their garbage at a pre-determined location along the drone’s flight path on each street.

    Several residents have complained that the fixed flight path of the drone inconveniences them. As a result, the city council has decided to alter the flight path everyday so as to minimize the distance the residents have to carry the garbage.

    Your mission is to write the code that helps the city officials determine the ideal flight path for the drone each day, given the coordinates x, y of all the chosen homes that day.
  
## Solution:
Consider the river on the west as the Y-axis and the river on east as a line parallel to Y-axis at a distance of p. The houses are distributed in the space between the Y-axis and the east river as coordinates of x,y (input to the program). As the roads in the city run from north to south, they are parallel lines to the Y-axis (so coordinates will be given as (5,0), (8,0) example). We will be calculating the mean of the y coordinates of these houses to identify the point equidistant from the homes. The solution will be the coordinates with y = mean of the y coordinates and x as the coordinates of the street.
