/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_SDL2VIDEO "Experimental pygame module for porting new SDL video systems"
#define DOC_SDL2_VIDEO_WINDOW "Window(title="pygame", size=(640, 480), position=None, fullscreen=False, fullscreen_desktop=False, keywords) -> Window\npygame object that represents a window"
#define DOC_SDL2_VIDEO_WINDOW_FROMDISPLAYMODULE "from_display_module() -> Window\nCreates window using window created by pygame.display.set_mode()."
#define DOC_SDL2_VIDEO_WINDOW_GRAB "grab -> bool\nGets or sets whether the mouse is confined to the window."
#define DOC_SDL2_VIDEO_WINDOW_RELATIVEMOUSE "relative_mouse -> bool\nGets or sets the window's relative mouse motion state."
#define DOC_SDL2_VIDEO_WINDOW_SETWINDOWED "set_windowed() -> None\nEnable windowed mode (exit fullscreen)."
#define DOC_SDL2_VIDEO_WINDOW_SETFULLSCREEN "set_fullscreen(desktop=False) -> None\nEnter fullscreen."
#define DOC_SDL2_VIDEO_WINDOW_TITLE "title -> string\nGets or sets whether the window title."
#define DOC_SDL2_VIDEO_WINDOW_DESTROY "destroy() -> None\nDestroys the window."
#define DOC_SDL2_VIDEO_WINDOW_HIDE "hide() -> None\nHide the window."
#define DOC_SDL2_VIDEO_WINDOW_SHOW "show() -> None\nShow the window."
#define DOC_SDL2_VIDEO_WINDOW_FOCUS "focus(input_only=False) -> None\nRaise the window above other windows and set the input focus. The "input_only" argument is only supported on X11."
#define DOC_SDL2_VIDEO_WINDOW_RESTORE "restore() -> None\nRestore the size and position of a minimized or maximized window."
#define DOC_SDL2_VIDEO_WINDOW_MAXIMIZE "maximize() -> None\nMaximize the window."
#define DOC_SDL2_VIDEO_WINDOW_MINIMIZE "maximize() -> None\nMinimize the window."
#define DOC_SDL2_VIDEO_WINDOW_RESIZABLE "resizable -> bool\nGets and sets whether the window is resizable."
#define DOC_SDL2_VIDEO_WINDOW_BORDERLESS "borderless -> bool\nAdd or remove the border from the window."
#define DOC_SDL2_VIDEO_WINDOW_SETICON "set_icon(surface) -> None\nSet the icon for the window."
#define DOC_SDL2_VIDEO_WINDOW_ID "id -> int\nGet the unique window ID. *Read-only*"
#define DOC_SDL2_VIDEO_WINDOW_SIZE "size -> (int, int)\nGets and sets the window size."
#define DOC_SDL2_VIDEO_WINDOW_POSITION "position -> (int, int) or WINDOWPOS_CENTERED or WINDOWPOS_UNDEFINED\nGets and sets the window position."
#define DOC_SDL2_VIDEO_WINDOW_OPACITY "opacity -> float\nGets and sets the window opacity. Between 0.0 (fully transparent) and 1.0 (fully opaque)."
#define DOC_SDL2_VIDEO_WINDOW_DISPLAYINDEX "display_index -> int\nGet the index of the display that owns the window. *Read-only*"
#define DOC_SDL2_VIDEO_WINDOW_SETMODALFOR "set_modal_for(Window) -> None\nSet the window as a modal for a parent window. This function is only supported on X11."
#define DOC_SDL2_VIDEO_TEXTURE "Texture(renderer, size, depth=0, static=False, streaming=False, target=False, scale_quality=None) -> Texture\npygame object that representing a Texture."
#define DOC_SDL2_VIDEO_TEXTURE_FROMSURFACE "from_surface(renderer, surface) -> Texture\nCreate a texture from an existing surface."
#define DOC_SDL2_VIDEO_TEXTURE_RENDERER "renderer -> Renderer\nGets the renderer associated with the Texture. *Read-only*"
#define DOC_SDL2_VIDEO_TEXTURE_WIDTH "width -> int\nGets the width of the Texture. *Read-only*"
#define DOC_SDL2_VIDEO_TEXTURE_HEIGHT "height -> int\nGets the height of the Texture. *Read-only*"
#define DOC_SDL2_VIDEO_TEXTURE_ALPHA "alpha -> int\nGets and sets an additional alpha value multiplied into render copy operations."
#define DOC_SDL2_VIDEO_TEXTURE_BLENDMODE "blend_mode -> int\nGets and sets the blend mode for the Texture."
#define DOC_SDL2_VIDEO_TEXTURE_COLOR "color -> color\nGets and sets an additional color value multiplied into render copy operations."
#define DOC_SDL2_VIDEO_TEXTURE_GETRECT "get_rect(**kwargs) -> Rect\nGet the rectangular area of the texture."
#define DOC_SDL2_VIDEO_TEXTURE_DRAW "draw(srcrect=None, dstrect=None, angle=0, origin=None, flip_x=False, flip_y=False) -> None\nCopy a portion of the texture to the rendering target."
#define DOC_SDL2_VIDEO_TEXTURE_DRAWTRIANGLE "draw_triangle(p1_xy, p2_xy, p3_xy, p1_uv=(0.0, 0.0), p2_uv=(1.0, 1.0), p3_uv=(0.0, 1.0), p1_mod=(255, 255, 255, 255), p2_mod=(255, 255, 255, 255), p3_mod=(255, 255, 255, 255)) -> None\nCopy a triangle portion of the texture to the rendering target by vertices coordinates."
#define DOC_SDL2_VIDEO_TEXTURE_DRAWQUAD "draw_quad(p1_xy, p2_xy, p3_xy, p4_xy, p1_uv=(0.0, 0.0), p2_uv=(1.0, 0.0), p3_uv=(1.0, 1.0), p4_uv=(0.0, 1.0), p1_mod=(255, 255, 255, 255), p2_mod=(255, 255, 255, 255), p3_mod=(255, 255, 255, 255), p4_mod=(255, 255, 255, 255)) -> None\nCopy a quad portion of the texture to the rendering target by vertices coordinates."
#define DOC_SDL2_VIDEO_TEXTURE_UPDATE "update(surface, area=None) -> None\nUpdate the texture with a Surface. WARNING: Slow operation, use sparingly."
#define DOC_SDL2_VIDEO_IMAGE "Image(textureOrImage, srcrect=None) -> Image\nEasy way to use a portion of a Texture without worrying about srcrect all the time."
#define DOC_SDL2_VIDEO_IMAGE_GETRECT "get_rect() -> Rect\nGet the rectangular area of the Image."
#define DOC_SDL2_VIDEO_IMAGE_DRAW "draw(srcrect=None, dstrect=None) -> None\nCopy a portion of the Image to the rendering target."
#define DOC_SDL2_VIDEO_IMAGE_ANGLE "angle -> float\nGets and sets the angle the Image draws itself with."
#define DOC_SDL2_VIDEO_IMAGE_ORIGIN "origin -> (float, float) or None.\nGets and sets the origin. Origin=None means the Image will be rotated around its center."
#define DOC_SDL2_VIDEO_IMAGE_FLIPX "flip_x -> bool\nGets and sets whether the Image is flipped on the x axis."
#define DOC_SDL2_VIDEO_IMAGE_FLIPY "flip_y -> bool\nGets and sets whether the Image is flipped on the y axis."
#define DOC_SDL2_VIDEO_IMAGE_COLOR "color -> Color\nGets and sets the Image color modifier."
#define DOC_SDL2_VIDEO_IMAGE_ALPHA "alpha -> float\nGets and sets the Image alpha modifier."
#define DOC_SDL2_VIDEO_IMAGE_BLENDMODE "blend_mode -> int\nGets and sets the blend mode for the Image."
#define DOC_SDL2_VIDEO_IMAGE_TEXTURE "texture -> Texture\nGets and sets the Texture the Image is based on."
#define DOC_SDL2_VIDEO_IMAGE_SRCRECT "srcrect -> Rect\nGets and sets the Rect the Image is based on."
#define DOC_SDL2_VIDEO_RENDERER "Renderer(window, index=-1, accelerated=-1, vsync=False, target_texture=False) -> Renderer\nCreate a 2D rendering context for a window."
#define DOC_SDL2_VIDEO_RENDERER_FROMWINDOW "from_window(window) -> Renderer\nEasy way to create a Renderer."
#define DOC_SDL2_VIDEO_RENDERER_DRAWBLENDMODE "draw_blend_mode -> int\nGets and sets the blend mode used by the drawing functions."
#define DOC_SDL2_VIDEO_RENDERER_CLEAR "clear() -> None\nClear the current rendering target with the drawing color."
#define DOC_SDL2_VIDEO_RENDERER_PRESENT "present() -> None\nUpdates the screen with any new rendering since previous call."
#define DOC_SDL2_VIDEO_RENDERER_GETVIEWPORT "get_viewport() -> Rect\nReturns the drawing area on the target."
#define DOC_SDL2_VIDEO_RENDERER_SETVIEWPORT "set_viewport(area) -> None\nSet the drawing area on the target. If area is None, the entire target will be used."
#define DOC_SDL2_VIDEO_RENDERER_LOGICALSIZE "logical_size -> (int width, int height)\nGets and sets the logical size."
#define DOC_SDL2_VIDEO_RENDERER_SCALE "scale -> (float x_scale, float y_scale)\nGets and sets the scale."
#define DOC_SDL2_VIDEO_RENDERER_TARGET "target -> Texture or None\nGets and sets the render target. None represents the default target (the renderer)."
#define DOC_SDL2_VIDEO_RENDERER_BLIT "blit(source, dest, area=None, special_flags=0)-> Rect\nFor compatibility purposes. Textures created by different Renderers cannot be shared!"
#define DOC_SDL2_VIDEO_RENDERER_DRAWLINE "draw_line(p1, p2) -> None\nDraws a line."
#define DOC_SDL2_VIDEO_RENDERER_DRAWPOINT "draw_point(point) -> None\nDraws a point."
#define DOC_SDL2_VIDEO_RENDERER_DRAWRECT "draw_rect(rect)-> None\nDraws a rectangle."
#define DOC_SDL2_VIDEO_RENDERER_FILLRECT "fill_rect(rect)-> None\nFills a rectangle."
#define DOC_SDL2_VIDEO_RENDERER_TOSURFACE "to_surface(surface=None, area=None)-> Surface\nRead pixels from current render target and create a pygame.Surface. WARNING: Slow operation, use sparingly."
#define DOC_SDL2_VIDEO_RENDERER_DRAWTRIANGLE "draw_triangle(p1, p2, p3) -> None\nDraws a triangle."
#define DOC_SDL2_VIDEO_RENDERER_FILLTRIANGLE "fill_triangle(p1, p2, p3) -> None\nFills a triangle."
#define DOC_SDL2_VIDEO_RENDERER_DRAWQUAD "draw_quad(p1, p2, p3, p4) -> None\nDraws a quad."
#define DOC_SDL2_VIDEO_RENDERER_FILLQUAD "fill_quad(p1, p2, p3, p4) -> None\nFills a quad."
