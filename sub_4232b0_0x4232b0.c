// 函数名称: sub_4232b0
// 虚拟地址: 0x4232b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4232b0(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541690
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_469bf0(&ExceptionList, &data_5bbb18, arg3, arg2[0x39], 0xffffffff)
    char* var_18
    
    for (int32_t i = 0; i s< 4; )
        if (i s>= arg2[0x39])
            char* const var_1c
            sub_44f240(&var_1c, &data_5559b1)
            int32_t var_8_3 = 2
            sub_469cf0(&var_1c, &data_5bb988, arg3, &var_1c, i)
            int32_t var_8_4 = 3
            
            if (data_cdf414 != 0)
                char* eax_12 = var_1c
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_44f000(&var_1c)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_1c = &data_5559b1
        else
            int32_t var_20
            int32_t* var_34_1 = &var_20
            void* eax_6 = i * 0x2c + 8 + arg2
            sub_4167e0(eax_6, arg2, &var_18, eax_6)
            int32_t var_8_1 = 0
            sub_469cf0(&var_18, &data_5bb988, arg3, &var_18, i)
            
            if (i == 0)
                sub_441db0(var_20)
                int32_t var_34_2 = 0xffffffff
                sub_469930(arg3)
            
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0)
                char* eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_44f000(&var_18)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_18 = &data_5559b1
        
        i += 1
        int32_t var_8_5 = 0xffffffff
    
    if (arg4 == 1)
        int32_t var_34_4 = 0xffffffff
        sub_469930(arg3)
    
    int32_t* eax_19 = arg2
    int32_t i_1 = 0
    
    if (eax_19[0x39] s> 0)
        void* eax_14 = &eax_19[8]
        int32_t* ecx_11 = arg2
        var_18 = eax_14
        
        do
            int32_t eax_15 = *(eax_14 - 4)
            uint32_t eax_17
            void* ecx_14
            
            if (eax_15 == 2)
                int32_t eax_16 = *var_18
                
                if (eax_16 == 0)
                    if (arg3 == 0)
                        sub_44e4d0(eax_16, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_17 = zx.d(arg3.w)
                    
                    if (eax_17 u< data_5c99a4)
                        ecx_14 = eax_17 * 0x1008 + data_5c99a0
                    
                    if (eax_17 u>= data_5c99a4 || *(ecx_14 + 0x1004) != arg3)
                        sub_44e4d0(eax_17, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_469800(eax_17, &data_5bbb2c, ecx_14, 0x3f800000, i_1)
                    ecx_11 = arg2
                else if (eax_16 != 1)
                    ecx_11 = arg2
                else
                    if (arg3 == 0)
                        sub_44e4d0(eax_16, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_17 = zx.d(arg3.w)
                    
                    if (eax_17 u< data_5c99a4)
                        ecx_14 = eax_17 * 0x1008 + data_5c99a0
                    
                    if (eax_17 u>= data_5c99a4 || *(ecx_14 + 0x1004) != arg3)
                        sub_44e4d0(eax_17, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_469800(eax_17, &data_5bbb40, ecx_14, 0x3f800000, i_1)
                    ecx_11 = arg2
            else if (eax_15 == 1)
                char* eax_21 = var_18
                uint32_t edi
                
                if (*(eax_21 + 8) != 1)
                    edi = zx.d(arg3.w)
                else
                    if (arg3 == 0)
                        sub_44e4d0(eax_21, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edi = zx.d(arg3.w)
                    void* ecx_18
                    
                    if (edi u< data_5c99a4)
                        ecx_18 = edi * 0x1008 + data_5c99a0
                    
                    if (edi u>= data_5c99a4 || *(ecx_18 + 0x1004) != arg3)
                        sub_44e4d0(eax_21, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_469800(eax_21, &data_5bbb68, ecx_18, 0x3f800000, i_1)
                
                eax_17 = sub_42aaa0(*(data_65ac38 + 0xb24))
                int32_t ecx_22 = *var_18
                
                if (ecx_22 != *(eax_17 + 0x230))
                    if (sub_41ac90(ecx_22) == 1)
                        int32_t i_2 = i_1
                        sub_469930(arg3)
                    
                    ecx_11 = arg2
                else
                    if (arg3 == 0)
                        sub_44e4d0(eax_17, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (edi u< data_5c99a4)
                        ecx_14 = edi * 0x1008 + data_5c99a0
                    
                    if (edi u>= data_5c99a4 || *(ecx_14 + 0x1004) != arg3)
                        sub_44e4d0(eax_17, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_469800(eax_17, &data_5bbb54, ecx_14, 0x3f800000, i_1)
                    ecx_11 = arg2
            i_1 += 1
            eax_14 = &var_18[0x2c]
            var_18 = eax_14
        while (i_1 s< ecx_11[0x39])
        
        eax_19 = arg2
    
    void* eax_20 = sub_4220d0(eax_19)
    
    if (eax_20 u> 0x12)
        sub_44e4d0(eax_20, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0xe16, "DisplayNetworkGame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (eax_20)
        case nullptr
            int32_t var_34_7 = 0xffffffff
        case 1
            int32_t var_34_8 = 0xffffffff
        case 2
            int32_t var_34_9 = 0xffffffff
        case 3
            int32_t var_34_11 = 0xffffffff
        case 4
            int32_t var_34_12 = 0xffffffff
        case 5
            int32_t var_34_10 = 0xffffffff
        case 6, 7, 0xb, 0xd
            int32_t var_34_13 = 0xffffffff
        case 8
            int32_t var_34_20 = 0xffffffff
        case 9
            int32_t var_34_21 = 0xffffffff
        case 0xa
            int32_t var_34_22 = 0xffffffff
        case 0xc
            int32_t var_34_19 = 0xffffffff
        case 0xe
            int32_t var_34_14 = 0xffffffff
        case 0xf
            int32_t var_34_15 = 0xffffffff
        case 0x10
            int32_t var_34_16 = 0xffffffff
        case 0x11
            int32_t var_34_17 = 0xffffffff
        case 0x12
            int32_t var_34_18 = 0xffffffff
    
    int32_t result = sub_469930(arg3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
