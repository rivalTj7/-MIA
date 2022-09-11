//
// Created by rivaldo on 7/09/22.
//

#ifndef _MIA_P1_201900956_STRUCTD_H
#define _MIA_P1_201900956_STRUCTD_H

#include <string>
#include <ctime>

using namespace std;

class StructD {
public:
    StructD();

    //Partition
    typedef struct _Partition {
        char part_status = '0';
        char part_type;
        char part_fit;
        int part_start = -1;
        int part_s = 0;
        char part_name[16];
    } Partition;

    //Master Boot Record (MBR)
    typedef struct _MBR {
        int mbr_tamano;
        time_t mbr_fecha_creacion;
        int mbr_dsk_signature;
        char dsk_fit;
        Partition mbr_partition_1; //{status, type, fit, start, size, name}
        Partition mbr_partition_2;
        Partition mbr_partition_3;
        Partition mbr_partition_4;// n logicas
    } MBR;

    //Extende Boot Record (EBR)
    typedef struct _EBR {
        char part_status;
        char part_fit;
        int part_start;
        int part_s;
        int part_next;
        char part_name[16];
    } EBR;

    //Tabla de inodos
    typedef struct _Inodo {
        int i_uid;
        int I_gid;
        int i_s;
        time_t i_atime;
        time_t i_ctime;
        time_t i_mtime;
        int i_block;
        char i_type;
        int i_perm;
    } Inodo;

    //Contenido BLoque
    typedef struct _Content {
        char b_name[12];
        int b_inodo = -1;
    } Content;

    //Bloques de carpetas
    typedef struct _Folderblock //64
    {
        Content b_content[4];
    } Folderblock;

    //Super Bloque
    typedef struct _SuperBloque {
        int s_filesystem_type;
        int s_inodes_count;
        int s_blocks_count;
        int s_free_blocks_count;
        int s_free_inodes_count;
        time_t s_mtime;
        time_t s_umtime;
        int s_mnt_count;
        int s_magic = 0xEF53;
        int s_inode_s = sizeof(Inodo);
        int s_block_s = sizeof(Folderblock);
        int s_firts_ino = 0;
        int s_first_blo = 0;
        int s_bm_inode_start;
        int s_bm_block_start;
        int s_inode_start;
        int s_block_start;
    } SuperBloque;
};

#endif //_MIA_P1_201900956_STRUCTD_H
