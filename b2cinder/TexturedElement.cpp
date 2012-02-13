/*
 *  TexturedElement.cpp
 *  SuperDeux
 *
 *  Created by Ray McClure on 8/29/11.
 *  Copyright 2011 Secret Feature. All rights reserved.
 *
 */

#include "TexturedElement.h"
#include "BoxElement.h"
#include "cinder/gl/Texture.h"
#include <b2cinder/b2cinder.h>

using namespace ci;
using namespace ci::app;
using namespace cinder;
using namespace cinder::box2d;



TexturedElement::TexturedElement(gl::Texture &image, Vec2f pos, Vec2f size, bool isDynamic ): BoxElement(pos, size, isDynamic )
{
	mImage = image;
}

void TexturedElement::draw()
{
	mImage.enableAndBind();
	BoxElement::draw();
	mImage.unbind();
}


