// 函数名称: sub_4a39b0
// 虚拟地址: 0x4a39b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a39b0(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: PWSTR lpCmdLine = GetCommandLineW()
    PWSTR lpCmdLine = GetCommandLineW()
    int32_t numArgs
    PWSTR* hMem = CommandLineToArgvW(lpCmdLine, &numArgs)
    int32_t numArgs_2 = numArgs
    int32_t esi = 2
    int32_t eax = sub_4a36d0(hMem, numArgs_2, hMem, u"-opengl")
    
    if (eax.b != 0)
        esi = 1
    
    int32_t eax_1 = sub_4a36d0(eax, numArgs_2, hMem, u"-dx11")
    data_5baa98 = "Shards.xpack"
    data_5baa9c = "Shards"
    
    if (eax_1.b != 0)
        esi = 2
    
    data_5baaa0 = "Shards of Infinity"
    data_ce19b8 = esi
    void** esi_1 = &data_5baa94
    data_5baab8 = 0x101
    data_65ae00 = &data_5baa94
    data_5baab4 = 0x101
    data_5baab0 = 0
    data_5baabd = 1
    data_5baaa4 = "Shards.Steam.1634"
    data_5baac3 = 0
    int32_t eax_2 = sub_4a36d0(eax_1, numArgs_2, hMem, u"-widescreen")
    
    if (eax_2.b != 0)
        data_5baaa8 = 0x780
        data_5baaac = 0x438
    
    int32_t eax_3 = sub_4a36d0(eax_2, numArgs_2, hMem, 0x59287c)
    
    if (eax_3.b != 0)
        eax_3 = sub_44e260("VR enabled")
        esi_1 = data_65ae00
        *(esi_1 + 0x27) = 1
        numArgs_2 = numArgs
    
    int32_t eax_4 = sub_4a36d0(eax_3, numArgs_2, hMem, u"-novr")
    
    if (eax_4.b != 0)
        eax_4 = sub_44e260("VR disabled")
        esi_1 = data_65ae00
        *(esi_1 + 0x27) = 0
        numArgs_2 = numArgs
    
    int32_t eax_5 = sub_4a36d0(eax_4, numArgs_2, hMem, u"-hasDB")
    
    if (eax_5.b != 0)
        eax_5 = sub_44e260("Has db")
        esi_1 = data_65ae00
        *(esi_1 + 0x2b) = 1
        numArgs_2 = numArgs
    
    int32_t eax_6 = sub_4a36d0(eax_5, numArgs_2, hMem, u"build_emscripten_assets")
    
    if (eax_6.b != 0)
        *(esi_1 + 0x27) = 0
        numArgs_2 = numArgs
    else
        eax_6 = sub_4a36d0(eax_6, numArgs_2, hMem, u"build_assets")
        
        if (eax_6.b != 0)
            *(esi_1 + 0x27) = 0
            numArgs_2 = numArgs
        else
            eax_6 = sub_4a36d0(eax_6, numArgs_2, hMem, u"build_xpack")
            
            if (eax_6.b != 0)
                *(esi_1 + 0x27) = 0
                numArgs_2 = numArgs
    
    int32_t eax_7 = sub_4a36d0(eax_6, numArgs_2, hMem, u"-server")
    
    if (eax_7.b != 0)
        *(esi_1 + 0x2f) = 1
        numArgs_2 = numArgs
    
    if (*(esi_1 + 0x27) != 0)
        int32_t esi_2 = 1
        int32_t eax_8 = sub_4a36d0(eax_7, numArgs_2, hMem, u"-oculus")
        
        if (eax_8.b != 0)
            esi_2 = 3
        
        if (sub_4a36d0(eax_8, numArgs_2, hMem, u"-openvr") != 0)
            esi_2 = 5
        
        data_ce19c0 = esi_2
    
    sub_4a34b0()
    sub_452e30()
    PWSTR lpCmdLine_1 = lpCmdLine
    int32_t eax_10 = sub_44e450("command line: %S")
    int32_t numArgs_1 = numArgs
    int32_t eax_11 = sub_4a36d0(eax_10, numArgs_1, hMem, u"build_emscripten_assets")
    
    if (eax_11.b == 0)
        int32_t eax_13 = sub_4a36d0(eax_11, numArgs_1, hMem, u"build_assets")
        
        if (eax_13.b != 0)
            sub_4a4f30("building assets...\n")
            goto label_4a3c1b
        
        if (sub_4a36d0(eax_13, numArgs_1, hMem, u"build_xpack") == 0)
            LocalFree(hMem)
            HWND hWnd = sub_4a3740(arg1)
            
            if (hWnd != 0)
                int32_t* ecx_17 = data_cdf444
                HWND hWnd_1 = hWnd
                data_ce19bd = 1
                data_ce1790 = hWnd_1
                
                if (ecx_17 != 0)
                    (*(*ecx_17 + 8))()
                    hWnd_1 = data_ce1790
                    data_ce1aec = 0
                
                int32_t* ecx_18 = data_ce19b4
                
                if (ecx_18 != 0)
                    (*(*ecx_18 + 8))(hWnd_1)
                
                ShowWindow(hWnd, arg2)
                UpdateWindow(hWnd)
                int32_t* ecx_19 = data_65ae00
                
                if (*(ecx_19 + 0x2f) == 0)
                    SetTimer(nullptr, 1, 0xa, sub_4a3480)
                    ecx_19 = data_65ae00
                
                (*(*ecx_19 + 0xc))()
                return 1
        else
            sub_4a4f30("building assets...\n")
            data_ce19bc = 1
            sub_4a5d10()
            sub_4c6620()
            sub_4a4f30("Done!\n")
    else
        sub_4a4f30("building emscripten assets...\n")
        data_65acf2 = 1
    label_4a3c1b:
        data_ce19bc = 1
        sub_4f17d0(sub_4a5d10())
        sub_4a4f30("Done!\n")
    
    return 0
}
