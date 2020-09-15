
#define WINDOWS

//#define STEAMWORKS

//#define USE_FMOD

//#define USE_OPENAL

#define EDITOR_EXE_NAME "editor"

#define BASE_DATA_DIR "./"

//#define DEBUG_ACHIEVEMENTS

#ifdef BARONY_DRM_FREE

#ifdef STEAMWORKS
#undef STEAMWORKS
#endif // STEAMWORKS

#endif
