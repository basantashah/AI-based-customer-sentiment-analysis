# Dog and Cat Image Classifier using CNN

This project implements a Convolutional Neural Network (CNN) to classify images of dogs and cats. The model is trained on a dataset containing 8000 images for training and 2000 images for testing.

## Table of Contents
- [Overview](#overview)
- [Requirements](#requirements)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Results](#results)
- [License](#license)

## Overview

The objective of this project is to build and train a CNN that can accurately classify images as either dogs or cats. The model is trained on a labeled dataset consisting of 8000 training images and evaluated on a separate test set of 2000 images.

## Requirements

Make sure you have the following dependencies installed:

- Python 3.x
- TensorFlow
- Keras
- Other dependencies (you can install them using `pip install -r requirements.txt`)

## Usage

1. Clone the repository:

    ```bash
    git clone git@github.com:basantashah/dog_cat_CNN-AI.git
    ```

2. Navigate to the project directory:

    ```bash
    cd dog-cat-image-classifier
    ```

3. Install the dependencies:

    ```bash
    pip install -r requirements.txt
    ```

4. Train the model:

    ```bash
    python train_model.py
    ```

5. Evaluate the model:

    ```bash
    python evaluate_model.py
    ```

6. Make predictions:

    ```bash
    python predict.py path/to/your/image.jpg
    ```

## Project Structure

```python
'''dog-cat-image-classifier/
│
├── data/
│ ├── train/
│ │ ├── cat/
│ │ └── dog/
│ └── test/
│ ├── cat/
│ └── dog/
│
├── models/
│ ├── cnn_model.h5
│ └── ...
│
├── train_model.py
├── evaluate_model.py
├── predict.py
├── README.md
└── requirements.txt'''
```


- **data/:** Contains the training and testing datasets.
- **models/:** Stores the trained CNN model.
- **train_model.py:** Script for training the CNN.
- **evaluate_model.py:** Script for evaluating the model on the test set.
- **predict.py:** Script for making predictions on new images.
- **README.md:** Project documentation.

## Results

The trained model achieved an accuracy of X% on the test set. Here are some sample predictions:

- Image 1: Dog
- Image 2: Cat
- ...

Feel free to explore the project, experiment with different architectures, and contribute to its improvement.

## License

I have developed for my learning purpose, anyone can pull and help improve the code as per their requirement
