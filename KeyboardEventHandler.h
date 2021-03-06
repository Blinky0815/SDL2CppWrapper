/* 
 *    Copyright [2018] Olaf - blinky0815 - christ ]
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 * Author: blinky0815
 * email: christ_o@gmx.de
 */

#ifndef KEYBOARDEVENTHANDLER_H
#define KEYBOARDEVENTHANDLER_H
#include <iostream>
#include <SDL2Eventhandler.h>
#include <SDL2/SDL_events.h>

using namespace std;

class KeyboardEventHandler : public SDL2Eventhandler {
public:

    KeyboardEventHandler() {
    }

    ~KeyboardEventHandler() {
    }

    void perform(SDL_Event& event) {
        if (event.window.windowID == getWindowID()) {
            switch (event.type) {
                case SDL_KEYUP:
                   onKeyUp();
                    break;
                case SDL_KEYDOWN:
                   onKeyDown();
                    break;
            }
        }
    }

    virtual void onKeyUp() {
    }

    virtual void onKeyDown() {
    }

private:
};

#endif /* KEYBOARDEVENTHANDLER_H */

