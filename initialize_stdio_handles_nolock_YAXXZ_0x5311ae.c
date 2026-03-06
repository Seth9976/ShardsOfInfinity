// 函数名称: ?initialize_stdio_handles_nolock@@YAXXZ
// 虚拟地址: 0x5311ae
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?initialize_stdio_handles_nolock@@YAXXZ()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    uint32_t result
    
    for (int32_t i = 0; i != 3; i += 1)
        result = i & 0x3f
        void* esi_2 = result * 0x30 + (&data_65a778)[i s>> 6]
        
        if (*(esi_2 + 0x18) == 0xffffffff || *(esi_2 + 0x18) == 0xfffffffe)
            *(esi_2 + 0x28) = 0x81
            enum STD_HANDLE nStdHandle
            
            if (i == 0)
                nStdHandle = STD_INPUT_HANDLE
            else if (i == 1)
                nStdHandle = STD_OUTPUT_HANDLE
            else
                nStdHandle = STD_ERROR_HANDLE
            
            HANDLE hFile = GetStdHandle(nStdHandle)
            enum FILE_TYPE eax_7
            
            if (hFile == 0xffffffff || hFile == 0)
                eax_7 = FILE_TYPE_UNKNOWN
            else
                eax_7 = GetFileType(hFile)
            
            if (eax_7 == FILE_TYPE_UNKNOWN)
                *(esi_2 + 0x28) |= 0x40
                *(esi_2 + 0x18) = 0xfffffffe
                result = data_65a3c8
                
                if (result != 0)
                    result = *(result + (i << 2))
                    *(result + 0x10) = 0xfffffffe
            else
                result = zx.d(eax_7.b)
                *(esi_2 + 0x18) = hFile
                
                if (result == 2)
                    *(esi_2 + 0x28) |= 0x40
                else if (result == 3)
                    *(esi_2 + 0x28) |= 8
        else
            *(esi_2 + 0x28) |= 0x80
    
    return result
}
