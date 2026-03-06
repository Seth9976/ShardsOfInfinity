// 函数名称: sub_429a00
// 虚拟地址: 0x429a00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_429a00(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* result = arg1
    int32_t i = 0
    void* result_1 = result
    
    if (*(result + 0xec) s> 0)
        void* esi_1 = result + 0x110
        void* edi_1 = result + 0x10
        
        do
            _strncpy(edi_1, &data_5559b1, 0x10)
            *(edi_1 + 0xf) = 0
            int32_t eax = *esi_1
            
            if (eax != 0)
                _aligned_free_base(eax)
            
            result = result_1
            i += 1
            __builtin_memset(esi_1, 0, 0x14)
            edi_1 += 0x2c
            esi_1 += 0x14
        while (i s< *(result + 0xec))
    
    return result
}
