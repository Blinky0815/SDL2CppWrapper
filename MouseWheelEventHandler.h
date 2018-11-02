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

#ifndef MOUSEWHEELEVENTHANDLER_H
#define MOUSEWHEELEVENTHANDLER_H
#include <iostream>
#include <SDL2Eventhandler.h>
#include <SDL2/SDL_events.h>

using namespace std;

class MouseWheelEventHandler : public SDL2Eventhandler {
public:

    MouseWheelEventHandler() {
    }

    ~MouseWheelEventHandler() {
    }

    void perform(SDL_Event& event) {
        if (event.window.windowID == getWindowID()) {
            switch (event.motion.type) {
                case SDL_MOUSEWHEEL:
                    if (event.wheel.y > 0) {
                        onMouseWheelUp();
                    } else if (event.wheel.y < 0) {
                        onMouseWheelDown();
                    }
                    break;
            }
        }
    }

    virtual void onMouseWheelUp() {
    }

    virtual void onMouseWheelDown() {
    }

private:
};

#endif /* MOUSEWHEELEVENTHANDLER_H */

