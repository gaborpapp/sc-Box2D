/*
 *  TexturedElement.h
 *  SuperDeux
 *
 *  Created by Ray McClure on 8/29/11.
 *  Copyright 2011 Secret Feature. All rights reserved.
 *
 */

#pragma once
#include "b2cinder/BoxElement.h"
#include "cinder/app/AppBasic.h"
#include "cinder/gl/Texture.h"
#include <iostream>
#include <string>
#include <sstream>


using namespace cinder;
using namespace cinder::box2d;
using namespace std;


namespace cinder{
	namespace box2d {
		
		// wraps the creation of box-shaped textured elements
		// sets reasonable defaults and allows easy tweaking of parameters
		
		class TexturedElement : public BoxElement {
		public:
			TexturedElement(){}
			~TexturedElement(){}
			TexturedElement(gl::Texture &image, Vec2f pos, Vec2f size, bool isDynamic=true );
			// draws a box
			virtual void draw();
		private:
			gl::Texture	mImage;
			
		};
		
	}
}