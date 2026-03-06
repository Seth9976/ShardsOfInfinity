// 函数名称: ?detach@?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@QAEPADXZ
// 虚拟地址: 0x52c4c5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcall?detach@?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@QAEPADXZ(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    uint32_t (* result)[0x4] = arg1[2]
    
    if (result != 0)
        int32_t eax_1 = arg1[4]
        
        if (eax_1 != 0)
            if (arg1[5].b == 0 && eax_1 != 0)
                int32_t var_c_1 = eax_1
                result = _malloc()
                _memcpy_s(result, arg1[4], arg1[2], arg1[3])
            
            int32_t eax_3 = *arg1
            arg1[4] = 0
            arg1[2] = eax_3
            arg1[3] = arg1[1]
            return result
    
    return nullptr
}
