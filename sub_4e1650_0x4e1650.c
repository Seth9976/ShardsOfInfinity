// 函数名称: sub_4e1650
// 虚拟地址: 0x4e1650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4e1650(int32_t* arg1, char** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPADI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_cc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_5 = &data_5559b1
    char* result_1
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_5 = result_2
    
    int32_t* eax_3 = _fopen(result_5, "rb")
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "file", "c:\ax2017\engine\soundimport.cpp", 0xa1, "ReadWav")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void var_20
    char* result
    int32_t var_b8
    
    if (_fread(&var_20, 0xc, 1, eax_3) == 1)
        if (_fread(&var_b8, 8, 1, eax_3) != 1)
        label_4e17b6:
            char* const result_7 = result_5
            sub_44e260("failed to read wav file (wave): %s")
            _fclose(eax_3)
            int32_t var_8_3 = 2
        else
            while (true)
                int32_t eax_6 = var_b8
                int32_t var_b4
                
                if (eax_6 != 0x20746d66)
                    if (eax_6 == 0x61746164)
                        if (arg1[6] != 0)
                            sub_44e4d0(eax_6, &data_5559b1, "pSoundData->bits == NULL", 
                                "c:\ax2017\engine\soundimport.cpp", 0xcd, "ReadWav")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        arg1[4] = 1
                        arg1[5] = var_b4
                        arg1[3] = var_b4
                        uint32_t (* eax_14)[0x4] = sub_45cd70(var_b4)
                        int32_t var_d8_8 = arg1[5]
                        arg1[6] = eax_14
                        
                        if (_fread(eax_14, var_d8_8, 1, eax_3) != 1)
                            char* const result_11 = result_5
                            sub_44e260("failed to read wav data: %s")
                            int32_t eax_16 = arg1[6]
                            
                            if (eax_16 != 0)
                                _aligned_free_base(eax_16)
                            
                            _fclose(eax_3)
                            int32_t var_8_7 = 5
                            break
                        
                        _fclose(eax_3)
                        result = *arg2
                        
                        if (result != 1)
                            if (result != 2)
                                char* result_3 = result_1
                                char* result_4 = &data_5559b1
                                
                                if (result_3 != 0)
                                    result_4 = result_3
                                
                                char* result_12 = result_4
                                sub_44e260("can't convert sound storage type %s")
                            else
                                sub_4d5d60(arg1)
                        
                        int32_t var_8_8 = 7
                        
                        if (data_cdf414 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_44f000(&result_1)
                                int32_t temp1_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_45d050(result, *(result + 0xc) + 0x10)
                        
                        result.b = 1
                        goto label_4e1806
                    
                    if (_fseek(eax_3, var_b4, 1) != 0)
                        char* const result_10 = result_5
                        sub_44e260("failed to read unknown wav data: %s")
                        _fclose(eax_3)
                        int32_t var_8_6 = 6
                        break
                else
                    if (var_b4 u>= 0x90)
                        sub_44e4d0(var_b4, &data_5559b1, "sizeof(WAVE_FMT_HEADER) > wave.SubchunkSize", 
                            "c:\ax2017\engine\soundimport.cpp", 0xb8, "ReadWav")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int16_t var_b0
                    uint32_t eax_8 = _fread(&var_b0, var_b4, 1, eax_3)
                    
                    if (eax_8 != 1)
                        char* const result_9 = result_5
                        sub_44e260("failed to read wav format: %s")
                        _fclose(eax_3)
                        int32_t var_8_5 = 3
                        break
                    
                    if (var_b0 != eax_8.w)
                        char* const result_8 = result_5
                        sub_44e260("unsupported wav format: %s")
                        _fclose(eax_3)
                        int32_t var_8_4 = 4
                        break
                    
                    int16_t var_a2
                    arg1[1] = sx.d(var_a2)
                    int16_t var_ae
                    arg1[2] = sx.d(var_ae)
                    int32_t var_ac
                    *arg1 = var_ac
                
                if (_fread(&var_b8, 8, 1, eax_3) != 1)
                    goto label_4e17b6
    else
        char* const result_6 = result_5
        sub_44e260("failed to read wav file (riff): %s")
        _fclose(eax_3)
        int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 0
    label_4e1806:
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
