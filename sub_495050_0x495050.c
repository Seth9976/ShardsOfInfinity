// 函数名称: sub_495050
// 虚拟地址: 0x495050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_495050(void* arg1)
{
    // 第一条实际指令: void* eax = _strrchr(arg1, 0x2e)
    void* eax = _strrchr(arg1, 0x2e)
    
    if (eax != 0)
        void* const esi_1 = &data_572068
        
        do
            if (__stricmp(*(esi_1 + 4), eax + 1) == 0)
                return *esi_1
            
            esi_1 += 8
        while (*(esi_1 + 4) != 0)
    
    return 0
}
