// 函数名称: sub_4b8d10
// 虚拟地址: 0x4b8d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b8d10(void* arg1, char* arg2)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    char* var_c = arg2
    int32_t i = 0
    void* var_8 = eax
    
    if (*(eax + 8) s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* ebx_1 = *(eax + 4)
            
            if (__stricmp(*(ebx_1 + edi_1 + 4), arg2) == 0)
                return *(ebx_1 + edi_1)
            
            eax = var_8
            i += 1
            arg2 = var_c
            edi_1 += 0x3c
        while (i s< *(eax + 8))
    
    return 0xffffffff
}
