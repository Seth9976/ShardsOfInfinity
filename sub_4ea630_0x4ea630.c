// 函数名称: sub_4ea630
// 虚拟地址: 0x4ea630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4ea630(void* arg1, float* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_546160
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14
    int32_t** var_2c = &var_14
    int32_t* ebx_1 = arg2[0xd4]
    int32_t* esi = *ebx_1
    int32_t* var_18
    sub_42ce10(&var_18, esi, 4)
    int32_t var_8_1 = 0
    int32_t eax_4 = var_14[2]
    
    if (eax_4 == 0)
        eax_4 = (*(*data_ce19b4 + 0x44))(esi, 0)
        var_14[2] = eax_4
    
    int32_t var_8_2 = 0xffffffff
    int32_t* ecx_3 = var_18
    
    if (ecx_3 != 0)
        ecx_3[7] -= 1
        var_18 = nullptr
    
    if (eax_4 != 0)
        uint32_t ecx_4 = zx.d(eax_4.w)
        
        if (ecx_4 u< *(arg1 + 0x3c))
            int32_t* esi_2 = ecx_4 * 0x24c + *(arg1 + 0x38)
            
            if (esi_2[0x92] == eax_4)
                *(arg1 + 0x54) = *ebx_1
                int32_t* eax_7 = *(arg1 + 8)
                sub_4ea500((*(*eax_7 + 0x2c))(eax_7, esi_2[0xa], 0, 0), ebx_1, ebx_1, esi_2, arg2)
                int32_t* esi_3 = ebx_1[0xfc]
                int32_t** var_2c_2 = &var_18
                sub_42ce10(&var_14, esi_3, 4)
                int32_t var_8_3 = 1
                eax_4 = var_18[7]
                
                if (eax_4 == 0)
                    eax_4 = (*(*data_ce19b4 + 0x44))(esi_3, 1)
                    var_18[7] = eax_4
                
                int32_t var_8_4 = 0xffffffff
                int32_t* ecx_10 = var_14
                
                if (ecx_10 != 0)
                    ecx_10[7] -= 1
                    var_14 = nullptr
                
                if (eax_4 != 0)
                    uint32_t ecx_11 = zx.d(eax_4.w)
                    
                    if (ecx_11 u< *(arg1 + 0x3c))
                        int32_t* esi_5 = ecx_11 * 0x24c + *(arg1 + 0x38)
                        
                        if (esi_5[0x92] == eax_4)
                            int32_t* eax_11 = *(arg1 + 8)
                            sub_4ea500((*(*eax_11 + 0x24))(eax_11, esi_5[0xb], 0, 0), &ebx_1[0xfc], 
                                ebx_1, esi_5, arg2)
                            int32_t eax_13 = ebx_1[0x390]
                            void* edx_3 = data_ce26f4
                            int32_t* esi_6
                            
                            if (eax_13 != 0)
                                uint32_t ecx_14 = zx.d(eax_13.w)
                                
                                if (ecx_14 u< *(edx_3 + 0x3c))
                                    esi_6 = ecx_14 * 0x24c + *(edx_3 + 0x38)
                                    
                                    if (esi_6[0x92] != eax_13)
                                        esi_6 = nullptr
                                else
                                    esi_6 = nullptr
                            else
                                esi_6 = nullptr
                            
                            if (*esi_6 != 5)
                                sub_44e4d0(eax_13, &data_5559b1, 
                                    "bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL", 
                                    "c:\ax2017\engine\windows\windowsdx11.cpp", 0x843, 
                                    "Dx11GraphicsInterface::GraphicsMaterialSetup")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t* eax_14 = *(arg1 + 8)
                            (*(*eax_14 + 0x8c))(eax_14, esi_6[0x80], 0, 0xffffffff)
                            int32_t* eax_15 = *(arg1 + 8)
                            (*(*eax_15 + 0x90))(eax_15, esi_6[0x7f], 0)
                            bool cond:0 = sub_4ac890() == 0
                            int32_t* eax_17 = *(arg1 + 8)
                            int32_t ecx_17 = *eax_17
                            
                            if (cond:0)
                                (*(ecx_17 + 0xac))(eax_17, esi_6[0x7d])
                                int32_t eax_19
                                eax_19.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_19
                            
                            (*(ecx_17 + 0xac))(eax_17, esi_6[0x7e])
                            int32_t eax_18
                            eax_18.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_18
    
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
