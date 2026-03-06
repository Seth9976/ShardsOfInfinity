// 函数名称: sub_4912a0
// 虚拟地址: 0x4912a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4912a0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5437c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[3] != 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "pParseTree->itemList.GetSize() == 0", 
            "c:\ax2017\engine\defparsetree.cpp", 0x3c, "DefParseTreeFree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* ebx = data_cdf47c
    int32_t* i_1 = *(ebx + 0x14)
    int32_t i_2 = *(ebx + 0x18) * 0x14
    int32_t i_3 = i_2
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            void* edx_1 = &i_1[1]
            i_2 = i_1
            i_1 = i
            
            if (arg1 u>= edx_1)
                i_2 += i_3 + 4
                void* ebx_3 = data_cdf47c
                
                if (arg1 u< i_2)
                    int32_t eax_8
                    int32_t edx_2
                    edx_2:eax_8 = sx.q(arg1 - edx_1)
                    i_2 = divs.dp.d(edx_2:eax_8, 0x14)
                    
                    if (mods.dp.d(edx_2:eax_8, 0x14) == 0)
                        *(ebx_3 + 0x1c) -= 1
                        int32_t var_8_1 = 0
                        sub_429100(&arg1[1])
                        int32_t var_8_2 = 1
                        
                        if (data_cdf414 != 0)
                            char* eax_9 = *arg1
                            
                            if (eax_9 != 0 && *eax_9 != 0)
                                char* eax_10 = sub_44f000(arg1)
                                int32_t temp2_1 = *(eax_10 + 4)
                                *(eax_10 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                                    *arg1 = &data_5559b1
                        
                        char* result = *(ebx_3 + 0x10)
                        *arg1 = result
                        *(ebx_3 + 0x10) = arg1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
        while (i != 0)
    
    sub_44e4d0(i_2, &data_5559b1, "IsPointerFromAllocator(pItem)", "c:\ax2017\engine\xalloc.h", 0x10c, 
        "XTypedAllocator<struct DefParseTree>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
