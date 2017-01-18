/*
 *  Copyright (c) 2012 David Koch
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_mixer_fp.h,v 1.5 2005/06/29 14:45:38 dgud Exp $
 */

/* File included in "exdl_wrapper.c" */

#ifdef COMPILE_MIXER

{ Mix_Linked_Version_ENUM,        "Mix_Linked_Version",        emix_linked_Version },
{ Mix_Init_ENUM,                  "Mix_Init",                  emix_init },
{ Mix_Quit_ENUM,                  "Mix_Quit",                  emix_quit },
{ Mix_OpenAudio_ENUM,             "Mix_OpenAudio",             emix_openAudio },
{ Mix_AllocateChannels_ENUM,      "Mix_AllocateChannels",      emix_allocateChannels },
{ Mix_QuerySpec_ENUM,             "Mix_QuerySpec",             emix_querySpec },
{ Mix_LoadWAV_RW_ENUM,            "Mix_LoadWAV_RW",            emix_loadWAV_RW },
{ Mix_LoadMUS_ENUM,               "Mix_LoadMUS",               emix_loadMUS },
{ Mix_LoadMUS_RW_ENUM,            "Mix_LoadMUS_RW",            emix_loadMUS_RW },
{ Mix_QuickLoad_WAV_ENUM,         "Mix_QuickLoad_WAV",         emix_quickLoad_WAV },
{ Mix_QuickLoad_RAW_ENUM,         "Mix_QuickLoad_RAW",         emix_quickLoad_RAW },
{ Mix_FreeChunk_ENUM,             "Mix_FreeChunk",             emix_freeChunk },
{ Mix_FreeMusic_ENUM,             "Mix_FreeMusic",             emix_freeMusic },
{ Mix_GetNumChunkDecoders_ENUM,   "Mix_GetNumChunkDecoders",   emix_getNumChunkDecoders },
{ Mix_GetChunkDecoder_ENUM,       "Mix_GetChunkDecoder",       emix_getChunkDecoder },
{ Mix_GetNumMusicDecoders_ENUM,   "Mix_GetNumMusicDecoders",   emix_getNumMusicDecoders },
{ Mix_GetMusicDecoder_ENUM,       "Mix_GetMusicDecoder",       emix_getMusicDecoder },
{ Mix_GetMusicType_ENUM,          "Mix_GetMusicType",          emix_getMusicType },
{ Mix_SetPostMix_ENUM,            "Mix_SetPostMix",            emix_setPostMix },
{ Mix_HookMusic_ENUM,             "Mix_HookMusic",             emix_hookMusic },
{ Mix_HookMusicFinished_ENUM,     "Mix_HookMusicFinished",     emix_hookMusicFinished },
{ Mix_GetMusicHookData_ENUM,      "Mix_GetMusicHookData",      emix_getMusicHookData },
{ Mix_ChannelFinished_ENUM,       "Mix_ChannelFinished",       emix_channelFinished },
{ Mix_RegisterEffect_ENUM,        "Mix_RegisterEffect",        emix_registerEffect },
{ Mix_UnregisterEffect_ENUM,      "Mix_UnregisterEffect",      emix_unregisterEffect },
{ Mix_UnregisterAllEffects_ENUM,  "Mix_UnregisterAllEffects",  emix_unregisterAllEffects },
{ Mix_SetPanning_ENUM,            "Mix_SetPanning",            emix_setPanning },
{ Mix_SetPosition_ENUM,           "Mix_SetPosition",           emix_setPosition },
{ Mix_SetDistance_ENUM,           "Mix_SetDistance",           emix_setDistance },
/* int Mix_SetReverb(int channel, Uint8 echo) */
{ Mix_SetReverseStereo_ENUM,      "Mix_SetReverseStereo",      emix_setReverseStereo },
{ Mix_ReserveChannels_ENUM,       "Mix_ReserveChannels",       emix_reserveChannels },
{ Mix_GroupChannel_ENUM,          "Mix_GroupChannel",          emix_groupChannel },
{ Mix_GroupChannels_ENUM,         "Mix_GroupChannels",         emix_groupChannels },
{ Mix_GroupAvailable_ENUM,        "Mix_GroupAvailable",        emix_groupAvailable },
{ Mix_GroupCount_ENUM,            "Mix_GroupCount",            emix_groupCount },
{ Mix_GroupOldest_ENUM,           "Mix_GroupOldest",           emix_groupOldest },
{ Mix_GroupNewer_ENUM,            "Mix_GroupNewer",            emix_groupNewer },
{ Mix_PlayChannelTimed_ENUM,      "Mix_PlayChannelTimed",      emix_playChannelTimed },
{ Mix_PlayMusic_ENUM,             "Mix_PlayMusic",             emix_playMusic },
{ Mix_FadeInMusic_ENUM,           "Mix_FadeInMusic",           emix_fadeInMusic },
{ Mix_FadeInMusicPos_ENUM,        "Mix_FadeInMusicPos",        emix_fadeInMusicPos },
{ Mix_FadeInChannelTimed_ENUM,    "Mix_FadeInChannelTimed",    emix_fadeInChannelTimed },
{ Mix_Volume_ENUM,                "Mix_Volume",                emix_volume },
{ Mix_VolumeChunk_ENUM,           "Mix_VolumeChunk",           emix_volumeChunk },
{ Mix_VolumeMusic_ENUM,           "Mix_VolumeMusic",           emix_volumeMusic },
{ Mix_HaltChannel_ENUM,           "Mix_HaltChannel",           emix_haltChannel },
{ Mix_HaltGroup_ENUM,             "Mix_HaltGroup",             emix_haltGroup },
{ Mix_HaltMusic_ENUM,             "Mix_HaltMusic",             emix_haltMusic },
{ Mix_ExpireChannel_ENUM,         "Mix_ExpireChannel",         emix_expireChannel },
{ Mix_FadeOutChannel_ENUM,        "Mix_FadeOutChannel",        emix_fadeOutChannel },
{ Mix_FadeOutGroup_ENUM,          "Mix_FadeOutGroup",          emix_fadeOutGroup },
{ Mix_FadeOutMusic_ENUM,          "Mix_FadeOutMusic",          emix_fadeOutMusic },
{ Mix_FadingMusic_ENUM,           "Mix_FadingMusic",           emix_fadingMusic },
{ Mix_FadingChannel_ENUM,         "Mix_FadingChannel",         emix_fadingChannel },
{ Mix_Pause_ENUM,                 "Mix_Pause",                 emix_pause },
{ Mix_Resume_ENUM,                "Mix_Resume",                emix_resume },
{ Mix_Paused_ENUM,                "Mix_Paused",                emix_paused },
{ Mix_PauseMusic_ENUM,            "Mix_PauseMusic",            emix_pauseMusic },
{ Mix_ResumeMusic_ENUM,           "Mix_ResumeMusic",           emix_resumeMusic },
{ Mix_RewindMusic_ENUM,           "Mix_RewindMusic",           emix_rewindMusic },
{ Mix_PausedMusic_ENUM,           "Mix_PausedMusic",           emix_pausedMusic },
{ Mix_SetMusicPosition_ENUM,      "Mix_SetMusicPosition",      emix_setMusicPosition },
{ Mix_Playing_ENUM,               "Mix_Playing",               emix_playing },
{ Mix_PlayingMusic_ENUM,          "Mix_PlayingMusic",          emix_playingMusic },
{ Mix_SetMusicCMD_ENUM,           "Mix_SetMusicCMD",           emix_setMusicCMD },
{ Mix_SetSynchroValue_ENUM,       "Mix_SetSynchroValue",       emix_setSynchroValue },
{ Mix_GetSynchroValue_ENUM,       "Mix_GetSynchroValue",       emix_getSynchroValue },
{ Mix_GetChunk_ENUM,              "Mix_GetChunk",              emix_getChunk },
{ Mix_CloseAudio_ENUM,            "Mix_CloseAudio",            emix_closeAudio },

#endif // COMPILE_MIXER
