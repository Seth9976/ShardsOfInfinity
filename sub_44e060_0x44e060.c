// 函数名称: sub_44e060
// 虚拟地址: 0x44e060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_44e060(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_65acf0 == 0)
        data_65acf0 = 1
        sub_44e360("\nUnhandled Exception\n")
        sub_44df10(arg1)
        void* eax_2 = data_65ae00
        char const* const lpCaption_1 = "Unhandled Exception"
        char const* const lpCaption = "Unhandled Exception"
        
        if (eax_2 != 0)
            lpCaption_1 = *(eax_2 + 0xc)
            lpCaption = lpCaption_1
        
        sub_44e360("Generating steam mini dump\n")
        SteamAPI_SetMiniDumpComment(lpCaption_1)
        SteamAPI_WriteMiniDump(**arg1, arg1, 0)
        sub_44e360("\nStack:\n")
        void* ContextRecord = arg1[1]
        int32_t esi_1 = 0
        int32_t var_dc = 0
        uint32_t var_b0 = GetCurrentProcess()
        HANDLE hThread = GetCurrentThread()
        int32_t StackFrame
        _memset(&StackFrame, 0, 0xa4)
        int32_t i = 1
        int32_t var_94_1 = *(ContextRecord + 0xb4)
        int32_t eax_6 = *(ContextRecord + 0xc4)
        StackFrame = *(ContextRecord + 0xb8)
        int32_t var_a4_1 = 3
        int32_t var_8c_1 = 3
        int32_t var_88_1 = eax_6
        int32_t var_80_1 = 3
        
        do
            if (StackWalk(0x14c, var_b0, hThread, &StackFrame, ContextRecord, nullptr, 
                    SymFunctionTableAccess, SymGetModuleBase, nullptr) == 0)
                break
            
            if (i s>= 0)
                int32_t var_d8[0x8]
                var_d8[esi_1] = StackFrame
                esi_1 = var_dc + 1
                var_dc = esi_1
            
            i += 1
        while (i s< 8)
        
        sub_4a3270(&var_dc)
        int32_t* eax_9 = data_65ac4c
        
        if (eax_9 != 0)
            _fclose(eax_9)
        
        HWND hWnd = GetForegroundWindow()
        GetWindowThreadProcessId(hWnd, &var_b0)
        uint32_t eax_11 = GetCurrentProcessId()
        
        if (var_b0 != eax_11)
            hWnd = nullptr
        
        MessageBoxA(hWnd, 
            "Oh no! There was an Unhandled Exception!\n\nThe log.txt file has more information.", 
            lpCaption, MB_OK)
        data_65acf0 = 0
    else
        sub_44e360("Exception during exception processing.\n")
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
