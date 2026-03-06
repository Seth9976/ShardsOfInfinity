// 函数名称: sub_490e80
// 虚拟地址: 0x490e80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")sub_490e80(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, BOOL arg5)
{
    // 第一条实际指令: int32_t var_4dc
    int32_t var_4dc
    int32_t eax_1 = __security_cookie ^ &var_4dc
    HWND hWnd = data_ce1790
    var_4dc = arg3
    char** var_4cc = arg5
    BOOL hModule
    
    if (hWnd != 0 && IsWindow(hWnd) != 0)
        hModule = LoadLibraryA("MAPI32.DLL")
        
        if (hModule != 0)
            BOOL edi_1 = GetProcAddress(hModule, "MAPISendMail")
            
            if (edi_1 != 0)
                void var_480
                _memset(&var_480, 0, 0x60)
                int32_t ecx_1 = arg4
                int32_t ebx_1 = 0
                char* const edx = &data_5559b1
                
                if (ecx_1 s> 0)
                    void var_420
                    void* edi_2 = &var_420
                    void var_474
                    void* esi = &var_474
                    
                    do
                        char* const lpFileName = &data_5559b1
                        char* lpFileName_1 = *(var_4dc + (ebx_1 << 2))
                        *(esi - 0xc) = zx.o(0)
                        
                        if (lpFileName_1 != 0)
                            lpFileName = lpFileName_1
                        
                        *(esi + 4) = 0
                        *(esi - 4) = 0xffffffff
                        GetFullPathNameA(lpFileName, 0x104, edi_2, nullptr)
                        *esi = edi_2
                        ecx_1 = arg4
                        esi += 0x18
                        ebx_1 += 1
                        *(esi - 0x14) = PathFindFileNameA(edi_2)
                        edi_2 += 0x104
                        edx = &data_5559b1
                    while (ebx_1 s< ecx_1)
                
                int32_t var_4c8 = 0
                int64_t var_4b8_1 = 0
                int32_t var_4c4_1 = 1
                char* const eax_6 = *arg2
                
                if (eax_6 != 0)
                    char* const var_4c0_2 = eax_6
                else
                    char* const var_4c0_1 = &data_5559b1
                    eax_6 = &data_5559b1
                
                char* const var_4bc_1 = eax_6
                int32_t* var_48c_1 = &var_4c8
                int32_t var_4b0 = 0
                char* eax_8 = *var_4cc
                int64_t var_4a8_1 = 0
                
                if (eax_8 != 0)
                    edx = eax_8
                
                int64_t var_4a0_1 = 0
                int64_t var_498_1 = 0
                void* var_484_1 = &var_480
                int32_t var_490_1 = 1
                char* const var_4ac_1 = edx
                int32_t var_488_1 = ecx_1
                hModule = edi_1(0, hWnd, &var_4b0, 0xd, 0)
                
                if (hModule == 0 || hModule == 1 || hModule == 3)
                    hModule.b = 1
                    @__security_check_cookie@4(eax_1 ^ &var_4dc)
                    return hModule
    
    hModule.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_4dc)
    return hModule
}
