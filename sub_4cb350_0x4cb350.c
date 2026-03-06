// 函数名称: sub_4cb350
// 虚拟地址: 0x4cb350
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4cb350(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5453d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_ce26e4
    
    if (ecx != 0 && ecx[1] == 0x19)
        result = sub_4459f0(ecx)
        
        if (result != 0)
            LRESULT eax_4
            int32_t ecx_1
            eax_4, ecx_1 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
            int32_t esi_2
            LRESULT edi_1
            
            if (eax_4 != 0xffffffff)
                int32_t eax_5
                eax_5, ecx_1 = sub_4c7440(eax_4)
                
                if (arg1 == 0)
                    int32_t eax_7
                    eax_7, ecx_1 = sub_4c7540(eax_4)
                    esi_2 = eax_5
                    edi_1 = eax_4 + 1 + eax_7
                else
                    edi_1 = eax_4 + 1
                    esi_2 = eax_5 + 1
            else
                edi_1 = result[1]
                esi_2 = 0
            
            int32_t var_34_2 = ecx_1
            int32_t* eax_8 = sub_48c3c0(data_e46fcc, 0)
            sub_4d2b10(eax_8, eax_8, result, edi_1)
            sub_4caa40(edi_1)
            int32_t eax_9 = sub_4c74c0(edi_1, esi_2)
            
            if (edi_1 s< 0 || edi_1 s>= result[1])
                sub_44e4d0(eax_9, &data_5559b1, 
                    "insertIndex >= 0 && insertIndex < pParticleDef->mEmitterCount", 
                    "c:\ax2017\engine\windows\editorwindow.cpp", 0xb2f, "EmitterAdd")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* esi_4 = edi_1 * 0x134 + *result
            char* result_1
            sub_4cb130(&result_1)
            int32_t var_8_1 = 0
            char* result_3 = &data_5559b1
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_3 = result_2
            
            char* ecx_9 = sub_4b8610(result_2, esi_4, &data_5b39c8, 1, result_3)
            void* eax_10 = data_ce26e4
            
            if (eax_10 != 0)
                int32_t eax_11 = *(eax_10 + 4)
                
                if (eax_11 == 0x19)
                    ecx_9 = sub_4c8660(edi_1, 0xffffffff)
                else if (eax_11 == 0x1b)
                    ecx_9 = sub_4c8c00(edi_1)
            
            sub_4c68c0(ecx_9)
            sub_4f42d0()
            result = sub_4f4180()
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp0_1 = result[1]
                    result[1] -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_45d050(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
