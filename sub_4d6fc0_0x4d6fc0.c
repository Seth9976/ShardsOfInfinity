// 函数名称: sub_4d6fc0
// 虚拟地址: 0x4d6fc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4d6fc0(char* arg1, HWND arg2)
{
    // 第一条实际指令: void var_128
    void var_128
    int32_t var_14 = __security_cookie ^ &var_128
    int32_t esi
    int32_t var_12c = esi
    int32_t edi
    int32_t var_130 = edi
    char* var_120 = arg1
    BOOL params_4 = sub_44e260("OpenGLInterface::GraphicsInterfaceAttach")
    int32_t var_138
    char const* const ecx
    
    if (*(arg1 + 0x4250) == 0)
        int128_t xmm0_1 = data_5719b0
        *(arg1 + 0x425c) = 0
        arg1[0x4260] = 0
        *(arg1 + 0x4230) = xmm0_1
        _memset(&arg1[0x28], 0xfe, 0x4000)
        int32_t ecx_1
        int32_t edi_3
        edi_3, ecx_1 = __memfill_u32(data_ce26e8 + 0x4028, 0xbaadf00d, 0x82)
        *(arg1 + 0xc) = arg2
        *(arg1 + 8) = GetDC(arg2)
        HMODULE hInstance = GetModuleHandleA(nullptr)
        WNDCLASSW wndClass
        wndClass.lpszMenuName = 0
        wndClass.cbClsExtra = 0
        wndClass.cbWndExtra = 0
        wndClass.hIcon = 0
        wndClass.hCursor = 0
        wndClass.lpfnWndProc = DefWindowProcA
        wndClass.hInstance = hInstance
        wndClass.hbrBackground = 1
        wndClass.lpszClassName = u"oglversionchecksample"
        wndClass.style = 0x20
        RegisterClassW(&wndClass)
        HWND hWnd = CreateWindowExW(WS_EX_LEFT, wndClass.lpszClassName, openglversioncheck", 
            WS_TILEDWINDOW, 0, 0, 0x280, 0x1e0, nullptr, nullptr, hInstance, nullptr)
        PIXELFORMATDESCRIPTOR ppfd_1
        __builtin_memset(&ppfd_1, 0, 0x28)
        ppfd_1.nSize = 0x28
        ppfd_1.nVersion = 1
        ppfd_1.dwFlags = 0x1025
        ppfd_1.iPixelType = 0
        ppfd_1.cColorBits = 0x20
        HDC hDC_2 = GetDC(hWnd)
        HDC hDC = hDC_2
        SetPixelFormat(hDC_2, ChoosePixelFormat(hDC_2, &ppfd_1), &ppfd_1)
        HGLRC eax_6 = wglCreateContext(hDC_2)
        wglMakeCurrent(hDC_2, eax_6)
        int32_t eax_7 = _glewInit@0()
        
        if (eax_7 != 0)
            sub_44e4d0(eax_7, &data_5559b1, "initResult == GLEW_OK", 
                "c:\ax2017\engine\openglgraphics.cpp", 0x430, "CreateDummyWindowToInitGlew")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        wglMakeCurrent(eax_7, eax_7)
        wglDeleteContext(eax_6)
        ReleaseDC(hWnd, hDC)
        DestroyWindow(hWnd)
        void* eax_8 = data_65ae00
        char* edi_5 = var_120
        PIXELFORMATDESCRIPTOR ppfd
        __builtin_memset(&ppfd, 0, 0x28)
        eax_8.b = *(eax_8 + 0x20)
        HDC hdc = *(edi_5 + 8)
        char temp1_1 = eax_8.b
        eax_8.b = neg.b(eax_8.b)
        eax_8.b = sbb.b(eax_8.b, eax_8.b, temp1_1 != 0)
        eax_8.b &= 0x10
        ppfd.nSize = 0x28
        ppfd.nVersion = 1
        ppfd.cDepthBits = eax_8.b
        ppfd.dwFlags = 0x1025
        ppfd.iPixelType = 0
        ppfd.cColorBits = 0x20
        BOOL format_1 = ChoosePixelFormat(hdc, &ppfd)
        HDC format = format_1
        int32_t var_138_8
        char* ecx_2
        
        if ((ppfd.dwFlags & 0x1000) == 0)
            char const* const var_134_13 = "OpenGLWin32SetPixelFormat"
            var_138_8 = 0x46a
            ecx_2 = "pfd.dwFlags & PFD_GENERIC_ACCELERATED"
        label_4d74db:
            sub_44e4d0(format_1, &data_5559b1, ecx_2, "c:\ax2017\engine\openglgraphics.cpp", var_138_8, 
                "OpenGLWin32SetPixelFormat")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_3 = *(data_65ae00 + 0x1c)
        
        if (ecx_3 != 0)
            uint32_t cDepthBits = zx.d(ppfd.cDepthBits)
            int32_t var_110 = 0
            int32_t var_10c_1 = 0
            int128_t var_70
            __builtin_memcpy(&var_70, 
                "\x01\x20\x00\x00\x01\x00\x00\x00\x10\x20\x00\x00\x01\x00\x00\x00\x03\x20\x00\x00\x27\x20\x"
            "00\x00\x14\x20\x00\x00\x18\x00\x00\x00\x1b\x20\x00\x00\x08\x00\x00\x00\x22\x20\x00\x
                    00", 
                0x2c)
            int32_t eax_11 = *__wglewChoosePixelFormatARB
            int128_t var_40
            __builtin_memcpy(&var_40, 
                "\x23\x20\x00\x00\x00\x00\x00\x00\x11\x20\x00\x00\x01\x00\x00\x00\x41\x20\x00\x00\x01\x00\x"
            "00\x00\x42\x20\x00\x00", 
                0x1c)
            int32_t var_24_1 = ecx_3
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            
            if (eax_11(hdc, &var_70, &var_110, 1, &hDC, &var_120) != 0 && var_120 u>= 1)
                format = hDC
        
        format_1 = SetPixelFormat(hdc, format, &ppfd)
        
        if (format_1 == 0)
            char const* const var_134_25 = "OpenGLWin32SetPixelFormat"
            var_138_8 = 0x48d
            ecx_2 = "result"
            goto label_4d74db
        
        *(edi_5 + 4) = wglCreateContext(*(edi_5 + 8))
        RECT rect
        GetClientRect(*(edi_5 + 0xc), &rect)
        uint128_t bottom = zx.o(rect.bottom)
        int32_t xmm0_3[0x4] = _mm_cvtepi32_ps(zx.o(rect.right))
        int32_t xmm1_1 = _mm_cvtepi32_ps(bottom)
        *(edi_5 + 0x10) = xmm0_3
        *(edi_5 + 0x14) = xmm1_1
        params_4 = wglMakeCurrent(*(edi_5 + 8), *(edi_5 + 4))
        
        if (params_4 != 0)
            params_4 = _glewInit@0()
            
            if (params_4 == 0)
                int32_t params_1 = params_4
                int32_t params = params_4
                glGetIntegerv(0x821b, &params_1)
                glGetIntegerv(0x821c, &params)
                hDC = glGetString(0x1f02)
                char* eax_15 = glGetString(0x1f01)
                var_120 = eax_15
                void* eax_16
                int32_t xmm0_4[0x4]
                eax_16, xmm0_4 = _strstr(xmm0_3, eax_15, "Mali-T760")
                char ecx_4 = data_ce26ed
                
                if (eax_16 != 0)
                    ecx_4 = 1
                
                data_ce26ed = ecx_4
                
                if (_strstr(xmm0_4, eax_15, "Adreno (TM) 420") != 0)
                    void* eax_18 = data_65ae00
                    data_ce26ec = 1
                    
                    if (*(eax_18 + 0x1c) s> 2)
                        sub_44e260("Setting msaa to 2x for adreno")
                        *(data_65ae00 + 0x1c) = 2
                
                glGetIntegerv(0xd33, &edi_5[0x5038])
                int32_t var_134_23 = *(edi_5 + 0x5038)
                char* var_138_14 = var_120
                int32_t params_3 = params
                int32_t params_2 = params_1
                HDC hDC_1 = hDC
                sub_44e260("GL version %s (%d.%d) %s (%d)")
                int32_t ecx_5
                ecx_5.b = *(data_65ae00 + 0x26) != 0
                (*__wglewSwapIntervalEXT)(ecx_5)
                void* result = data_65ae00
                
                if (*(result + 0x1c) != 0)
                    result = glEnable(0x809d)
                
                int32_t var_18
                @__security_check_cookie@4(var_18 ^ &var_12c)
                return result
            
            char const* const var_134_26 = "OpenGLInterface::GraphicsInterfaceAttach"
            var_138 = 0x4b8
            ecx = "initResult == GLEW_OK"
        else
            char const* const var_134_19 = "OpenGLInterface::GraphicsInterfaceAttach"
            var_138 = 0x4b5
            ecx = "success"
    else
        char const* const var_134 = "OpenGLInterface::GraphicsInterfaceAttach"
        var_138 = 0x495
        ecx = "mBufferDataArray.mUsedCount == 0"
    
    sub_44e4d0(params_4, &data_5559b1, ecx, "c:\ax2017\engine\openglgraphics.cpp", var_138, 
        "OpenGLInterface::GraphicsInterfaceAttach")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
