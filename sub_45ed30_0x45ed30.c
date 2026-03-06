// 函数名称: sub_45ed30
// 虚拟地址: 0x45ed30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_45ed30(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = arg1[0x3fe]
    void* result
    
    if (arg2 s>= ecx)
        int32_t eax_5 = arg1[0x1fd]
        
        if (arg2 != eax_5)
            sub_44e4d0(eax_5, &data_5559b1, "idx == parent.numChildren", "c:\ax2017\engine\ui2.cpp", 
                0x945, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (arg2 != ecx)
            sub_44e4d0(eax_5, &data_5559b1, "idx == parent.numTotalChildren", 
                "c:\ax2017\engine\ui2.cpp", 0x946, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (eax_5 s>= 0x100)
            sub_44e4d0(eax_5, &data_5559b1, "parent.numChildren < MAX_CHILDREN", 
                "c:\ax2017\engine\ui2.cpp", 0x947, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t (* result_2)[0x4] = sub_45ec10(arg1)
        char* ecx_3 = arg1[0x1a6]
        char* const edx_1 = &data_5559b1
        void* result_1 = result_2
        
        if (ecx_3 != 0)
            edx_1 = ecx_3
        
        char* const var_28_1 = edx_1
        int32_t var_8_1 = 0
        int32_t* eax_7 = sub_44f510(result_1 + 0x698, sub_44f980(&var_14, "just allocated, parent:%s"))
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_44f000(&var_14)
                int32_t temp0_1 = eax_7[1]
                eax_7[1] -= 1
                
                if (temp0_1 == 1)
                    eax_7 = sub_45d050(eax_7, eax_7[3] + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
        *(result_1 + 4) = arg2
        int32_t ecx_7 = arg1[arg2 + 0x1fe]
        
        if (ecx_7 == 0)
            sub_44e4d0(eax_7, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
                "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t edx_4 = zx.d(ecx_7.w)
        int32_t edi_1
        
        if (edx_4 u< data_5c99a4)
            edi_1 = data_5c99a0
            eax_7 = edx_4 * 0x1008
        
        if (edx_4 u>= data_5c99a4 || *(eax_7 + edi_1 + 0x1004) != ecx_7)
            sub_44e4d0(eax_7, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_8 = edx_4 * 0x1008
        
        if (*(eax_8 + edi_1 + 4) != arg2)
            sub_44e4d0(eax_8, &data_5559b1, "UI2Get(parent.children[idx]).idx == idx", 
                "c:\ax2017\engine\ui2.cpp", 0x94c, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = result_1
    else
        int32_t ecx_1 = arg1[arg2 + 0x1fe]
        
        if (arg2 s>= arg1[0x1fd])
            eax_3 = arg2 + 1
            arg1[0x1fd] = eax_3
        
        if (ecx_1 == 0)
            sub_44e4d0(eax_3, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
                "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t edx = zx.d(ecx_1.w)
        int32_t ebx_1
        
        if (edx u< data_5c99a4)
            ebx_1 = data_5c99a0
            eax_3 = edx * 0x1008
        
        if (edx u>= data_5c99a4 || *(eax_3 + ebx_1 + 0x1004) != ecx_1)
            sub_44e4d0(eax_3, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = edx * 0x1008 + ebx_1
        *(result + 4) = arg2
        
        if (*(result + 0x784) != arg1)
            sub_44e4d0(result, &data_5559b1, "ui.parent == &parent", "c:\ax2017\engine\ui2.cpp", 0x93f, 
                "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
