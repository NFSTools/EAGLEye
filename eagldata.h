#ifndef EAGLEYE_EAGLDATA_H
#define EAGLEYE_EAGLDATA_H

#include "eagldefines.h"

namespace EAGLEye
{
    typedef struct StreamInfoStruct
    {
        char ModelGroupName[8];
        unsigned int StreamChunkNumber;
        unsigned int Unk2;
        unsigned int MasterStreamChunkNumber;
        unsigned int MasterStreamChunkOffset;
        unsigned int Size1;
        unsigned int Size2;
        unsigned int Size3;
        unsigned int Unk3;
        float X;
        float Y;
        float Z;
        unsigned int StreamChunkHash;
        unsigned char RestOfData[0x24];
    } *StreamInfo;

    static const std::map<std::string, int> gameMap = {
            {"MW05",   0x2},
            {"UG2",    0x4},
            {"CARBON", 0x5},
            {"WORLD",  0x5a},
            {"PS",     0x6},
            {"UC",     0x8}
    };

    static const std::map<int, std::string> chunkIdMap = {
            {0xb3300000, "BCHUNK_SPEED_TEXTURE_PACK_LIST_CHUNKS"},
            {0xb0300100, "BCHUNK_SPEED_TEXTURE_PACK_LIST_CHUNKS_ANIM"},
            {0x80134000, "BCHUNK_SPEED_ESOLID_LIST_CHUNKS"},
            {0x80034100, "BCHUNK_SPEED_SCENERY_SECTION"},
            {0x00034027, "BCHUNK_SPEED_SMOKEABLE_SPAWNER"},
            {0x00034110, "BCHUNK_TRACKSTREAMER_SECTIONS"},
            {0x00034111, "BCHUNK_TRACKSTREAMER_1"},
            {0x00034112, "BCHUNK_TRACKSTREAMER_2"},
            {0x00034113, "BCHUNK_TRACKSTREAMER_3"},
            {0x00034107, "BCHUNK_TRACKSTREAMER_7"},
            {0x00037260, "BCHUNK_SPEED_BBGANIM_INSTANCE_TREE"},
            {0x00037250, "BCHUNK_SPEED_BBGANIM_INSTANCE_NODE"},
            {0x00037240, "BCHUNK_SPEED_BBGANIM_KEYFRAMES"},
            {0x00037270, "BCHUNK_SPEED_BBGANIM_ENDPACKHEADER"},
            {0x80135000, "BCHUNK_SPEED_ELIGHT_CHUNKS"},
            {0x80036000, "BCHUNK_SPEED_EMTRIGGER_PACK"},
            {0x00037220, "BCHUNK_SPEED_BBGANIM_BLOCKHEADER"},
            {0x0003bc00, "BCHUNK_SPEED_EMITTER_LIBRARY"},
            {0x00030201, "BCHUNK_FENG_FONT"},
            {0x00030210, "BCHUNK_FENG_PACKAGE_COMPRESSED"},
            {0x00030203, "BCHUNK_FENG_PACKAGE"},
            {0x00135200, "BCHUNK_ELIGHTS"},
            {0x00034600, "BCHUNK_CARINFO_ARRAY"},
            {0x00034601, "BCHUNK_CARINFO_SKININFO"},
            {0x00034608, "BCHUNK_CARINFO_ANIMHOOKUPTABLE"},
            {0x00034609, "BCHUNK_CARINFO_ANIMHIDETABLES"},
            {0x00034607, "BCHUNK_CARINFO_SLOTTYPES"},
            {0x80034602, "BCHUNK_CARINFO_CARPART"},
            {0x00034201, "BCHUNK_TRACKINFO"},
            {0x00034202, "BCHUNK_SUN"},
            {0x80035000, "BCHUNK_ACIDFX"},
            {0x80035010, "BCHUNK_ACIDFX"},
            {0x00035021, "BCHUNK_ACIDFX"},
            {0x00035020, "BCHUNK_ACIDFX_EMITTER"},
            {0x00034b00, "BCHUNK_DIFFICULTYINFO"},
            {0x00034a07, "BCHUNK_STYLEMOMENTSINFO"},
            {0x00030220, "BCHUNK_FEPRESETCARS"},
            {0x00e34009, "BCHUNK_EAGLSKELETONS"},
            {0x00e34010, "BCHUNK_EAGLANIMATIONS"},
            {0x00039020, "BCHUNK_MOVIECATALOG"},
            {0x8003b900, "BCHUNK_BOUNDS"},
            {0x0003bd00, "BCHUNK_EMITTERSYSTEM_TEXTUREPAGE"},
            {0xb0300300, "BCHUNK_PCAWEIGHTS"},
            {0x30300201, "BCHUNK_COLORCUBE"},
            {0x80037050, "BCHUNK_ANIMDIRECTORYDATA"},
            {0x8003b200, "BCHUNK_ICECAMERASET"},
            {0x8003B201, "BCHUNK_ICECAMERASET"},
            {0x8003b202, "BCHUNK_ICECAMERASET"},
            {0x8003b203, "BCHUNK_ICECAMERASET"},
            {0x8003b500, "BCHUNK_SOUNDSTICHS"},
            {0x80034147, "BCHUNK_TRACKPATH"},
            {0x00034146, "BCHUNK_TRACKPOSITIONMARKERS"},
            {0x00034158, "BCHUNK_VISIBLESECTION"},
            {0x80034150, "BCHUNK_VISIBLESECTION"},
            {0x00034250, "BCHUNK_WEATHERMAN"},
            {0x8003b000, "BCHUNK_QUICKSPLINE"},
            {0x8003b600, "BCHUNK_PARAMETERMAPS"},
            {0x80034100, "BCHUNK_SPEED_SCENERY_SECTION"},
            {0x00034108, "BCHUNK_SCENERY"},
            {0x00034109, "BCHUNK_SCENERYGROUP"},
            {0x8003410b, "BCHUNK_SCENERY"},
            {0x0003b800, "BCHUNK_WWORLD"},
            {0x0003b801, "BCHUNK_CARP_WCOLLISIONPACK"},
            {0x8003b810, "BCHUNK_EVENTSEQUENCE"},
            {0x0003414d, "BCHUNK_TRACKPATH"},
            {0x00037080, "BCHUNK_WORLDANIMENTITYDATA"},
            {0x00037110, "BCHUNK_WORLDANIMTREEMARKER"},
            {0x00037150, "BCHUNK_WORLDANIMINSTANCEENTRY"},
            {0x00037090, "BCHUNK_WORLDANIMDIRECTORYDATA"},
            {0x30300200, "BCHUNK_DDSTEXTURE"},
            {0x0003ce12, "BCHUNK_SKINREGIONDATABASE"},
            {0x0003ce13, "BCHUNK_VINYLMETADATA"},
            {0x0003b200, "BCHUNK_ICECAMERAS"},
            {0x00039000, "BCHUNK_LANGUAGE"},
            {0x00039001, "BCHUNK_LANGUAGEHISTOGRAM"},
            {0x00034a08, "BCHUNK_STYLEREWARDCHUNK"},
            {0x00030230, "BCHUNK_MAGAZINES"},
            {0x00034026, "BCHUNK_SMOKEABLES"},
            {0x00034492, "BCHUNK_CAMERA"},
            {0x80034405, "BCHUNK_CAMERA"},
            {0x80034425, "BCHUNK_CAMERA"},
            {0x80034410, "BCHUNK_CAMERA"},
            {0x80034415, "BCHUNK_CAMERA"},
            {0x80034420, "BCHUNK_CAMERA"},
            {0x0003a000, "BCHUNK_ELIPSE_TABLE"},
            {0x00034036, "BCHUNK_NIS_SCENE_MAPPER_DATA"},
            {0x00034121, "BCHUNK_TRACKROUTE_MANAGER"},
            {0x00034122, "BCHUNK_TRACKROUTE_SIGNPOSTS"},
            {0x00034123, "BCHUNK_TRACKROUTE_TRAFFIC_INTERSECTIONS"},
            {0x00034124, "BCHUNK_TRACKROUTE_CROSS_TRAFFIC_EMITTERS"},
            {0x00034130, "BCHUNK_TOPOLOGYTREE"},
            {0x00034131, "BCHUNK_TOPOLOGYTREE"},
            {0x00034132, "BCHUNK_TOPOLOGYTREE"},
            {0x00034133, "BCHUNK_TOPOLOGYTREE"},
            {0x00034134, "BCHUNK_TOPOLOGYTREE"},
            {0x0003b300, "BCHUNK_WORLDOBJECTS"},
            {0x00034a09, "BCHUNK_PERFUPGRADELEVELINFOCHUNK"},
            {0x00034a0a, "BCHUNK_PERFUPGRADEPACKAGECHUNK"},
            {0x00030240, "BCHUNK_WIDEDECALS"},
            {0x00034a03, "BCHUNK_RANKINGLADDERS"},
            {0x00039010, "BCHUNK_SUBTITLES"},
            {0x00034035, "BCHUNK_NISSCENEDATA"},
            {0x80037020, "BCHUNK_ANIMSCENEDATA"},
            {0x0003b811, "BCHUNK_EVENTSEQUENCE"},
            {0x00034191, "Unknown TrackStreamer"},
            {0x80134001, "MapStream File Info"},
            {0x80134010, "MapStream Part"},
            {0x00000000, "Null Chunk"}
    };
}

#endif //EAGLEYE_EAGLDATA_H
