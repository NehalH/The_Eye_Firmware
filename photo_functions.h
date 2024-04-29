#ifndef PHOTO_FUNCTIONS_H
#define PHOTO_FUNCTIONS_H

#include "Arduino.h"
#include "FS.h"
#include "camera_setup.h"

extern boolean takeNewPhoto;
#define FILE_PHOTO "/photo.jpg"
extern bool buttonPressed;

bool checkPhoto(fs::FS &fs);
void capturePhotoSaveSpiffs(void);

#endif // PHOTO_FUNCTIONS_H
