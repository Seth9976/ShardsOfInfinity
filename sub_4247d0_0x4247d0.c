// 函数名称: sub_4247d0
// 虚拟地址: 0x4247d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_4247d0(int32_t arg1, int32_t arg2))[0x4]
{
    // 第一条实际指令: uint32_t (* result)[0x4] = data_65aadc
    uint32_t (* result)[0x4] = data_65aadc
    
    if (result == 0)
        result = sub_413310()
        data_65aadc = result
    
    data_65aae0 = arg1
    data_65aae4 = arg2
    data_65aad8 = 0
    result[0x40][0] = 0
    *(result + 0x608) = data_571cf8
    int32_t edx_1
    int32_t ebx
    
    if (arg1 != 0)
        ebx = arg2
        edx_1 = 0
    else
        void** var_204
        int32_t* var_200
        TEB* fsbase
        
        if (arg2 == 0)
            result = data_e4899c
            
            if (result s> *(*fsbase->ThreadLocalStoragePointer + 4))
                result = __Init_thread_header(&data_e4899c)
                
                if (data_e4899c == 0xffffffff)
                    _memset(&var_200, 0, 0x1fc)
                    void*** ecx_3 = &var_204
                    
                    for (void** i = &data_5c5200; i s< &data_5c6394; i = &i[0x19])
                        *ecx_3 = i
                        ecx_3 = &ecx_3[1]
                    
                    __builtin_memcpy(0xe489a0, &var_204, 0x200)
                    result = __Init_thread_footer(&data_e4899c)
            
            ebx = 0xe489a0
            edx_1 = 0x2d
        else if (arg2 == 1)
            ebx = arg2
            edx_1 = 0
        else
            if (arg2 != 2)
                sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                    0xf56, "GameSpecific_GetGameExpansionDecls")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            result = data_e48ba0
            
            if (result s> *(*fsbase->ThreadLocalStoragePointer + 4))
                result = __Init_thread_header(&data_e48ba0)
                
                if (data_e48ba0 == 0xffffffff)
                    uint32_t var_1fc[0x1f][0x4]
                    _memset(&var_1fc, 0, 0x1f8)
                    var_204 = &data_5c5138
                    var_200 = &data_5c519c
                    __builtin_memcpy(0xe48ba8, &var_204, 0x200)
                    result = __Init_thread_footer(&data_e48ba0)
            
            ebx = 0xe48ba8
            edx_1 = 2
    
    void* edi = data_65aadc
    int32_t esi = 0
    *(edi + 0x400) = 0
    
    if (edx_1 != 0)
        do
            int32_t eax_2 = *(edi + 0x400)
            uint32_t (** ecx_4)[0x4] = edi + (eax_2 << 3)
            *(edi + 0x400) = eax_2 + 1
            result = *(ebx + (esi << 2))
            esi += 1
            *ecx_4 = result
            ecx_4[1] = 1
        while (esi s< edx_1)
    
    data_5bb240 = 0x14
    return result
}
