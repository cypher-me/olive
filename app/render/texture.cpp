/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2020 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#include "texture.h"

#include "renderer.h"

OLIVE_NAMESPACE_ENTER

const Texture::Interpolation Texture::kDefaultInterpolation = Texture::kMipmappedLinear;

Texture::~Texture()
{
  renderer_->DestroyNativeTexture(id_);
}

void Texture::Upload(void *data, int linesize)
{
  renderer_->UploadToTexture(this, data, linesize);
}

OLIVE_NAMESPACE_EXIT