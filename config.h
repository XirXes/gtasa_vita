#ifndef __CONFIG_H__
#define __CONFIG_H__

#define LOAD_ADDRESS 0x98000000

#define MEMORY_MB 256

#define DATA_PATH "ux0:data/gtasa"
#define SO_PATH DATA_PATH "/" "libGTASA.so"
#define SHADER_CACHE_PATH DATA_PATH "/" "cache"
#define CONFIG_PATH DATA_PATH "/" "config.txt"

#define SCREEN_W 960
#define SCREEN_H 544

typedef struct {
  int touch_x_margin;
  int use_fios2;
  int io_cache_block_num;
  int io_cache_block_size;
  int fix_heli_plane_camera;
  int fix_skin_weights;
  int fix_map_bottleneck;
  int enable_shader_cache;
  int skygfx_ps2_shading;	// lighting and vehicle reflections
  int skygfx_colourfilter;	// None, PS2, PC/Xbox, Mobile
  int skygfx_ps2_sun;
  int disable_detail_textures;
  int disable_ped_spec;
  int disable_tex_bias;
  int disable_alpha_testing;
} Config;

extern Config config;

int read_config(const char *file);

#endif
