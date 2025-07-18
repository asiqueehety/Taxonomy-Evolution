## Project Overview

The Taxonomy.io project is an educational tool that allows users to explore the classification of living organisms using the principles of taxonomy. Taxonomy is the science of defining and naming groups of biological organisms on the basis of shared characteristics. This project aims to create a hierarchical model to classify living beings from the kingdom level down to the species level. 

## Objectives

The primary objective of the Taxonomy.io project is to provide a user-friendly interface for individuals interested in learning about taxonomy and the classification of living organisms. The project is designed to fulfill the following objectives:

1.	Interactive Taxonomy: 
The project provides an interactive interface that allows users to classify organisms from the kingdom level to the species level. Users can select options to traverse through the taxonomic hierarchy.

2.	Information Display: 
Detailed information about each taxonomic level (kingdom, phylum, class, order, family, genus, species) is presented to the user. This information is displayed on the console, making it accessible for educational purposes.

3.	Use of C++ OOP Concepts and more: 
The project demonstrates the use of object-oriented programming (OOP) principles in C++. It employs inheritance, polymorphism, and encapsulation to represent the taxonomic hierarchy. Special keywords in C++ like ‘virtual’ keywords were used to use concepts of function overriding in inherited class’ functions.

## Code Structure
The code is structured into a series of C++ classes representing different taxonomic levels. The key classes include:
+	Kingdom: Represents the top-level of classification.

+	Phylum: Represents the phylum level of classification.

+	Class: Represents the class level of classification.
   
+	Order: Represents the order level of classification. 
 
+	Family: Represents the family level of classification.

+	Genus: Represents the genus level of classification.
   
+	Species: Represents the species level of classification.
 

## Key Features

	Interactive Interface

The project provides an interactive interface for users to input their choices at each taxonomic level through console output. It guides users through the classification process, allowing them to make selections and see detailed information at each level.
 
The project works based upon providing the user a friendly console input output screen. The first options coming up upon the starting of the program will be a prompt for asking the user to start detailing living being upon pressing ‘1’, to start detailing by scientific name upon pressing ‘2’, to start detailing by traditional name upon pressing ‘3’ and otherwise to exit the program upon pressing ‘0’.
Let us explore a living being by classification by pressing 1.
 
After pressing ‘1’, the console will show this, to choose ‘Kingdom’ of the living being. Afterwards, it will show in the screen to choose for ‘Phylum’ inside the chosen ‘Kingdom’, then the ‘Classes’ inside the ‘Phylum’ that was chosen and then, ‘Order’, ‘Family’, ‘Genus’ and ‘Species’ respectively.

After all the choices chosen, the console output will then show these attributes of that living being:
-	Classification
-	Characteristics based on classification
- Scientific name & Traditional name
 

-	Educational Content

Detailed information about each taxonomic level is displayed to the user. This educational content helps users understand the defining characteristics of each classification level, including cellular structure, nutrition, movement, and reproduction.

-	Usage of OOP Concepts and more
The project effectively utilizes OOP concepts, including inheritance, polymorphism and encapsulation, to create a hierarchical structure for taxonomy representation. Each class inherits attributes and behaviors from the previous level, reflecting the real-world hierarchical nature of taxonomy. Here, ‘Kingdom’ class is at the top of the hierarchy of classes, whereas class ‘Phylum’ inherits ‘Kingdom’, ‘Class’ inherits ‘Phylum’, ‘Order’ inherits ‘Class’, ‘Family’ inherits ‘Order’, ‘Genus’ inherits ‘Family’ and ‘Species’ inherits ‘Genus’.
The class inheritance diagram looks like this:

-	Informative Classification

The system displays a complete taxonomic classification for the selected organism, providing the kingdom, phylum, class, order, family, genus, and species. This feature enhances users' understanding of how living organisms are classified.
The system also displays the characteristics of the selected living organism, giving a distinct character for every living organism and marking every living being different through characteristics and traits.

-	User-Friendly

The project offers a user-friendly menu-driven interface, making it easy for individuals, especially students and biology enthusiasts, to explore and learn about taxonomy. The options to choose from the Menu user interface in console makes it easier for an abstraction of the processing behind the working and classification of every living organism.

## Additional Features

Beyond the core features, the project includes some extras:

-	Usage of ‘prompt()’ Function as a ‘friend’ function: 
The `prompt()` function serves as a menu, allowing users to choose to explore different classifications or exit the program. The ‘prompt()’ function is included in the ‘Species’ class as a ‘friend’ function.

-	Usage of ‘template’
                                     
‘template’ was used to define a function with any type of class or data types to be taken as parameter. Here, we used template to take a ‘Species’ class parameter and display the necessary attributes to be shown, which was used later in the code.

- Scientific and Traditional Names:
  For the species level, the project provides both scientific and traditional names, giving users a holistic view of the organism being classified.


## Possible Future Enhancements

To further improve this project, the following enhancements can be considered:
Database Integration:
 Integrating an extensive biological database to provide more comprehensive information about each taxonomic level. Presently, only the classification of 2 living organism, Silver moss and Humans, has been added for an overview of what could be possible in future if a database was added with it. The whole universe of living organisms could be made possible to be explored using the extension of database.
Graphical User Interface (GUI):
 Developing a graphical interface for a more visually appealing and user-friendly experience could be a better detailing and easier to be handled by users
Expand Taxonomic Levels: 
Include additional taxonomic levels, such as subspecies or varieties, for more detailed classification can be added to it by further extension of the code. There are far more division in between the classifications like, sub-phylum, sub-class, sub-order etc. Those can be added into the code.
New feature: 
Evolution Tracker
A new feature called ‘Evolution Tracker’ could be introduced to the program in the future upon further works upon the program. The feature could:
-	Help us understand the evolutionary biology section and track down a living organism’s evolutionary growth`
-	Track the living organism’s ancestors, closest ancestor sharer organism 
-	DNA sequencing and matching
-	Providing user with evolutionary tree to better understand the complete picture of the evolutionary growth of that living organism
-	In determining the biological distance between every living organism through characteristics detailing and trait 
This new feature could even help scientists in research purposes, evolutionary explanations of living organism’s functions and workings and many further exciting prospects. 
Conclusion

Taxonomy.io is an interactive and educational project that empowers users to embark on a captivating journey through the intricate world of biological classification. This educational tool fosters a deeper understanding of the principles of taxonomy, enabling users to explore and appreciate the diversity of life on our planet.

With a user-friendly and interactive interface, this project engages users at all levels of biological knowledge, from students just beginning to explore the subject to seasoned biology enthusiasts seeking to expand their understanding. Through the careful application of object-oriented programming (OOP) principles in C++, Taxonomy.io breathes life into the hierarchical structure of taxonomy.

This project not only offers an educational experience but also embraces the potential for future enhancements. By integrating extensive biological databases, developing a graphical user interface (GUI), and expanding taxonomic levels to accommodate more detailed classification, and interesting new features as ‘Evolution Tracker’, Taxonomy.io has the capacity to grow into an even more comprehensive and enriching resource.

In conclusion, Taxonomy.io exemplifies the fusion of education and technology. It bridges the gap between complex biological concepts and accessible learning, fostering a community of inquisitive minds eager to explore, discover, and appreciate the remarkable diversity of life on Earth. As it evolves, it has the potential to become an invaluable resource, enriching the knowledge of students and biology enthusiasts worldwide.
