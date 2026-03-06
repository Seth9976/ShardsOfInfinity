// 函数名称: sub_4ab080
// 虚拟地址: 0x4ab080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4ab080()
{
    // 第一条实际指令: int32_t esi = data_ce19c0
    int32_t esi = data_ce19c0
    int32_t ebx
    ebx.b = data_ce1a2c == 1
    (*(*data_ce19b4 + 0x8c))(data_65ae40)
    sub_4572e0()
    uint32_t result = sub_45a7f0(ebx)
    
    if (esi != 4)
        if (data_ce19b8 == 1)
            glFlush()
        
        result = data_65ae00
        
        if (*(result + 0x1c) != 0 && data_ce19bf == 0)
            void* eax_1 = data_cdf428
            
            if (eax_1 != 0)
                result.b = (*(eax_1 + 0x1c) u>> 0xd).b & 1
            
            if (eax_1 == 0 || result.b == 0)
                int32_t edx_1 = data_ce19ec
                int32_t eax_3 = *data_ce19b4
                
                if (data_ce1a2c != 1)
                    return (*(eax_3 + 0x90))(*((edx_1 << 2) + &data_ce19cc), 
                        *((edx_1 << 2) + &data_ce19d4))
                
                return (*(eax_3 + 0x90))(*((edx_1 << 2) + &data_ce19d0), *((edx_1 << 2) + &data_ce19d8))
    
    return result
}
