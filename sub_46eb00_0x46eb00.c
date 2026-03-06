// 函数名称: sub_46eb00
// 虚拟地址: 0x46eb00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_46eb00(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542a54
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_824 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_46e9d0()
    int32_t edx = eax_3
    
    if (arg1 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t ecx = zx.d(arg1.w)
    
    if (ecx u< data_5c99a4)
        int32_t edi_1 = data_5c99a0
        eax_3 = ecx * 0x1008
        
        if (*(eax_3 + edi_1 + 0x1004) == arg1)
            void* esi_2 = ecx * 0x1008 + edi_1
            int32_t* result
            
            if (edx != 0x67)
                if (edx != 0x6b)
                    sub_44e4d0(eax_3, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x223a, 
                        "FieldGetComboOptions")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_82c_1 = data_dff67c
                data_e49078 = &data_5559b1
                int32_t edi_2 = edx - 0x6a
                int32_t* eax_4 = sub_45d320(esi_2)
                int32_t* eax_5 = sub_4b8ac0(eax_4, eax_4, &data_5b1d6c, var_82c_1, 0x68)
                
                if (eax_5 != 0)
                    int32_t eax_6 = eax_5[1]
                    int32_t ecx_2 = 0
                    int32_t var_814[0x200]
                    
                    if (eax_6 s> 0)
                        int32_t edx_2 = 0
                        
                        do
                            edx_2 += 0xc
                            var_814[ecx_2] = *(edx_2 + *eax_5 - 0xc)
                            ecx_2 += 1
                            eax_6 = eax_5[1]
                        while (ecx_2 s< eax_6)
                    
                    sub_429140(eax_6, &var_814[eax_6], &var_814, eax_6, sub_46ea00)
                    int32_t i = 0
                    
                    if (eax_5[1] s> 0)
                        do
                            i += 1
                            void var_818
                            (&data_e49078)[edi_2] = *(&var_818 + (edi_2 << 2))
                            edi_2 += 1
                        while (i s< eax_5[1])
                
                (&data_e49078)[edi_2] = 0
                result = &data_e49078
            else if (data_5c99e4 != 0)
                int32_t eax_10 = *(esi_2 + 0x69c)
                
                if (eax_10 == 3)
                    if (data_e49878 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        int32_t eax_13 = __Init_thread_header(&data_e49878)
                        
                        if (data_e49878 == 0xffffffff)
                            int32_t var_8_1 = 0
                            data_e4987c =
                                sub_46ea40(eax_13, *(esi_2 + 0x69c), data_5c99e4, &data_e49880)
                            __Init_thread_footer(&data_e49878)
                    
                    result = &data_e49880
                else if (eax_10 == 5)
                    if (data_e498c0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        int32_t eax_17 = __Init_thread_header(&data_e498c0)
                        
                        if (data_e498c0 == 0xffffffff)
                            int32_t var_8_2 = 1
                            data_e498c4 =
                                sub_46ea40(eax_17, *(esi_2 + 0x69c), data_5c99e4, &data_e498c8)
                            __Init_thread_footer(&data_e498c0)
                    
                    result = &data_e498c8
                else if (eax_10 != 1)
                    result = &data_659a74
                else
                    if (data_e49908 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        int32_t eax_21 = __Init_thread_header(&data_e49908)
                        
                        if (data_e49908 == 0xffffffff)
                            int32_t var_8_3 = 2
                            data_e4990c =
                                sub_46ea40(eax_21, *(esi_2 + 0x69c), data_5c99e4, &data_e49910)
                            __Init_thread_footer(&data_e49908)
                    
                    result = &data_e49910
            else
                result = &data_659a74
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    sub_44e4d0(eax_3, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
