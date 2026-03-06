// 函数名称: sub_48bc60
// 虚拟地址: 0x48bc60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48bc60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    char* i = *(ebx + 4)
    
    while (i != 0)
        void* ecx = ebx
        int32_t j_3 = 4
        int32_t j
        
        do
            char eax_1 = *ecx
            ecx += 1
            arg2 = arg2 u>> 8 ^ *(((zx.d(eax_1) ^ zx.d(arg2.b)) << 2) + &data_5720f8)
            j = j_3
            j_3 -= 1
        while (j != 1)
        char* i_1 = i
        void* edi_1 = &i_1[1]
        uint32_t eax_3
        
        do
            eax_3.b = *i_1
            i_1 = &i_1[1]
        while (eax_3.b != 0)
        void* j_2 = i_1 - edi_1
        
        if (i_1 != edi_1)
            void* j_1
            
            do
                char eax_4 = *i
                i = &i[1]
                arg2 = arg2 u>> 8 ^ *(((zx.d(eax_4) ^ zx.d(arg2.b)) << 2) + &data_5720f8)
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        i = *(ebx + 0xc)
        ebx += 8
    
    return arg2
}
