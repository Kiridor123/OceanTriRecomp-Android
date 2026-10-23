# Avisos de Software de Terceros y Cumplimiento de Licencias (Third-Party Notices)

Este documento reúne los avisos de derechos de autor, atribuciones y textos de licencia de los proyectos y bibliotecas de código abierto utilizados o integrados en **[OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)**.

El proyecto principal **OceanTriRecomp** se distribuye bajo la licencia **GNU General Public License v3.0 (GPL-3.0)** (disponible en el archivo `LICENSE` en la raíz del repositorio), garantizando la compatibilidad recíproca con componentes licenciados bajo GPL-3.0, MIT, zlib, BSD-3-Clause y Apache-2.0.

## 1. WiiCompiled y Herramientas de Recompilación Estática PowerPC

* **Repositorio:** [patchzyy/Wiicompiled](https://github.com/patchzyy/wiicompiled) y [ExpansionPak/DolRecomp](https://github.com/ExpansionPak/DolRecomp)
* **Uso en OceanTriRecomp:** Base conceptual y herramientas de traducción estática de instrucciones PowerPC (Gekko/Broadway) a C++ y arquitectura de *runtime*.
* **Licencia:** GNU General Public License v3.0 (GPL-3.0)

> Copyright (C) 2026 patchzyy and WiiCompiled Contributors.
>
> This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
>
> This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License (`LICENSE`) for more details.

## 2. Aurora (GameCube & Wii Compatibility Layer)

* **Repositorio:** [encounter/aurora](https://github.com/encounter/aurora)
* **Uso en OceanTriRecomp:** Capa de abstracción de hardware (`aurora-main/`) para la traducción de llamadas del SDK gráfico GX, VI, PAD, DVD y CARD hacia APIs modernas.
* **Licencia:** MIT License

> MIT License
>
> Copyright (c) Encounter and Aurora Contributors
>
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
>
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## 3. SDL3 (Simple DirectMedia Layer)

* **Repositorio:** [libsdl-org/SDL](https://github.com/libsdl-org/SDL)
* **Sitio Oficial:** [https://www.libsdl.org/](https://www.libsdl.org/)
* **Uso en OceanTriRecomp:** Gestión multiplataforma de ventanas, contextos gráficos, audio y entrada de periféricos (teclado, ratón y gamepads).
* **Licencia:** zlib License

> Simple DirectMedia Layer
> Copyright (C) 1997-2026 Sam Lantinga <slouken@libsdl.org>
>
> This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.
>
> Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
>
> 1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
> 2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
> 3. This notice may not be removed or altered from any source distribution.

## 4. ANGLE (Almost Native Graphics Layer Engine)

* **Repositorio:** [google/angle](https://github.com/google/angle)
* **Uso en OceanTriRecomp:** Traducción de llamadas OpenGL ES 3.0 y gestión de contextos EGL sobre Vulkan, Direct3D y OpenGL de escritorio (`libEGL.dll`, `libGLESv2.dll`).
* **Licencia:** BSD 3-Clause License / Apache License 2.0

> Copyright 2018 The ANGLE Project Authors. All rights reserved.
>
> Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
>
> * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
> * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
> * Neither the name of Google Inc., Chromium, nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
>
> THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
