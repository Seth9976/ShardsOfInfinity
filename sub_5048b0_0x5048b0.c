// 函数名称: sub_5048b0
// 虚拟地址: 0x5048b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_5048b0(int32_t arg1, int32_t arg2, HWND arg3, LRESULT arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT hWnd = arg4
    
    if (arg2 == 0x7d4)
        int32_t* edi_1 = data_e47264
        void* esi_1 = edi_1[1]
        
        if (esi_1 != 0)
            CHOOSECOLORA param0_1
            void lpbi
            void var_324
            
            switch (*(esi_1 + 0x14) - 4)
                case 0
                    __builtin_memset(&lpbi, 0, 0x1c)
                    param0_1.lStructSize = 0x24
                    lpbi.d = arg3
                    lpbi:4.d = *edi_1
                    lpbi:8.d = sub_501920(*(esi_1 + 0x10))
                    lpbi:0xc.d = 0x6599f0
                    lpbi:0x10.d = 3
                    
                    if (ChooseColorA(&param0_1) != 0)
                        uint32_t var_6f0_2 = zx.d((lpbi:8.d u>> 0x10).b)
                        uint32_t var_6f4_1 = zx.d(lpbi:8.w) u>> 8
                        uint32_t var_6f8_1 = zx.d(lpbi:8.b)
                        sub_5015e0(&var_324, 0x104, "%d,%d,%d")
                        _free(*(*(data_e47264 + 4) + 0x10))
                        *(*(data_e47264 + 4) + 0x10) = sub_501620(&var_324)
                case 1
                    int32_t param0
                    _memset(&param0, 0, 0x3c)
                    *(esi_1 + 0x10)
                    void var_674
                    sub_502ea0(&var_674)
                    int32_t* eax_33 = data_e47264
                    param0 = 0x3c
                    HWND var_6d0_1 = arg3
                    lpbi:0xc.d = *eax_33
                    void* var_6c8_1 = &var_674
                    int32_t var_638
                    param0_1.lStructSize = var_638
                    int32_t var_6c0_1 = 0x141
                    
                    if (ChooseFontA(&param0) != 0)
                        uint32_t lStructSize = param0_1.lStructSize
                        _free(*(*(data_e47264 + 4) + 0x10))
                        sub_502ef0(&var_674)
                        *(*(data_e47264 + 4) + 0x10) = sub_501620(&data_e49dd0)
                case 2
                    void var_42c
                    _memset(&var_42c, 0, 0x104)
                    uint32_t var_534[0x10][0x4]
                    _memset(&var_534, 0, 0x104)
                    void var_114
                    _memset(&var_114, 0, 0x104)
                    char i_1
                    _memset(&i_1, 0, 0x104)
                    _memset(&var_324, 0, 0x104)
                    int32_t param0_2
                    int32_t ecx_2
                    int32_t edx
                    ecx_2, edx = _memset(&param0_2, 0, 0x58)
                    param0_2 = 0x58
                    HWND var_688_1 = arg3
                    int32_t var_684_1 = *edi_1
                    void* var_6f0_9 = &var_324
                    char* var_6f4_8 = &i_1
                    void* var_6f8_8 = &var_114
                    void* var_6fc_2 = &var_42c
                    sub_4529c0(&var_42c, edx, ecx_2, *(esi_1 + 8), 
                        "Title: %32[^\r\n] Path: %256[^\r\n] Filter: %256[^\r\n] Default Extension: %32[^\r"
                    "]")
                    void* ecx_3 = &var_42c
                    
                    if (__mbscmp("?", &var_42c) == 0)
                        ecx_3 = "Select file"
                    
                    if (__mbscmp("?", &var_114) != 0)
                        void* ecx_4 = &var_114
                        int32_t eax_18
                        
                        do
                            eax_18.b = *ecx_4
                            ecx_4 += 1
                        while (eax_18.b != 0)
                        void var_113
                        void* eax_19 = &__saved_ebp + ecx_4 - &var_113 - 0x111
                        int32_t ecx_5
                        ecx_5.b = *eax_19
                        
                        while (ecx_5.b != 0)
                            if (ecx_5.b == 0x5c)
                                *eax_19 = 0
                                break
                            
                            ecx_5.b = *(eax_19 - 1)
                            eax_19 -= 1
                        
                        void* var_660_1 = &var_114
                    
                    char* var_680_1
                    
                    if (__mbscmp("?", &i_1) == 0)
                        var_680_1 = "All Files (*.*)"
                    else
                        char i = i_1
                        char* eax_21 = &i_1
                        
                        while (i != 0)
                            if (i == 9)
                                *eax_21 = 0
                            
                            i = eax_21[1]
                            eax_21 = &eax_21[1]
                        
                        var_680_1 = &i_1
                    
                    int32_t var_66c_1 = 0x104
                    int32_t var_658_1 = 0x81804
                    uint32_t (* var_670_1)[0x10][0x4] = &var_534
                    void* ecx_6 = &var_324
                    
                    if (__mbscmp("?", &var_324) == 0)
                        ecx_6 = &data_59d324
                    
                    bool cond:2_1 = GetOpenFileNameA(&param0_2) == 0
                    lpbi:0x10.d = ecx_3
                    lpbi:0x18.d = var_680_1
                    lpbi:0x1c.d = ecx_6
                    int32_t var_6f0_13 = *(*(data_e47264 + 4) + 0x10)
                    uint32_t (* ecx_7)[0x10][0x4]
                    
                    if (cond:2_1)
                        lpbi:0x14.d = &data_5559b1
                        _free(var_6f0_13)
                        ecx_7 = &data_5559b1
                    else
                        lpbi:0x14.d = var_670_1
                        _free(var_6f0_13)
                        ecx_7 = var_670_1
                    
                    *(*(data_e47264 + 4) + 0x10) = sub_501620(ecx_7)
                    _free(*(*(data_e47264 + 4) + 8))
                    var_6ac
                    sub_502f70(&var_6ac:4)
                    *(*(data_e47264 + 4) + 8) = sub_501620(0xe4a558)
                case 3
                    int32_t esi_3 = *(esi_1 + 0x10)
                    struct IMalloc ppMalloc
                    
                    if (SHGetMalloc(&ppMalloc) s>= 0)
                        lpbi:0x1c.d = 0
                        lpbi.d = arg3
                        lpbi:8.d = 0
                        void var_634
                        __builtin_memset(&var_634, 0, 0x208)
                        lpbi:0xc.d = &data_5559b1
                        struct IShellFolder var_690
                        struct IShellFolder* ppshf = &var_690
                        int32_t var_694 = 0
                        
                        if (SHGetDesktopFolder(ppshf) s>= 0)
                            struct IShellFolder eax_42 = var_690
                            void var_6e0
                            void var_6dc
                            (*(*eax_42 + 0xc))(eax_42, 0, 0, &var_634, &var_6e0, &var_694, &var_6dc)
                            struct IShellFolder eax_43 = var_690
                            (*(*eax_43 + 8))(eax_43)
                        
                        lpbi:4.d = var_694
                        lpbi:0x10.d = 5
                        lpbi:0x14.d = sub_5030b0
                        lpbi:0x18.d = esi_3
                        struct ITEMIDLIST* pidl = SHBrowseForFolderA(&lpbi)
                        
                        if (pidl == 0)
                            _memset(&data_e4a450, 0, 0x104)
                        else
                            SHGetPathFromIDListA(pidl, &data_e4a450)
                        
                        struct IMalloc ppMalloc_1 = ppMalloc
                        (*(*ppMalloc_1 + 0x14))(ppMalloc_1, pidl)
                        struct IMalloc ppMalloc_2 = ppMalloc
                        (*(*ppMalloc_2 + 8))(ppMalloc_2)
                    
                    _free(*(*(data_e47264 + 4) + 0x10))
                    *(*(data_e47264 + 4) + 0x10) = sub_501620(&data_e4a450)
            
            ShowWindow(hWnd, SW_HIDE)
            SetFocus(arg3)
            RedrawWindow(arg3, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
            hWnd = sub_5063d0()
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return hWnd
}
