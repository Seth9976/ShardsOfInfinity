// 函数名称: sub_4170d0
// 虚拟地址: 0x4170d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4170d0(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x42c)
    void* eax = *(arg1 + 0x42c)
    
    if (eax != 0)
        int32_t* ecx = *(arg1 + 0x428)
        
        if (ecx != 0)
            sub_41beb0(ecx)
            eax = *(arg1 + 0x42c)
            *(arg1 + 0x428) = 0
    
    char const* const var_2c
    int32_t var_28
    char const* const var_24_2
    char* ecx_4
    
    if (eax u> 7)
        var_24_2 = "GameQueueStartUpdate"
        var_28 = 0x586
        var_2c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_4 = "Halt"
    else
        switch (eax)
            case nullptr
                *(arg1 + 0x42c) = 0
                return eax
            case 1
                sub_417bb0()
                sub_416f80(0xffffffff)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_2 = ___std_fs_remove@4()
                *(arg1 + 0x42c) = 0
                return eax_2
            case 2
                sub_417bb0()
                sub_416e60()
                struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = ___std_fs_remove@4()
                *(arg1 + 0x42c) = 0
                return eax_3
            case 3
                sub_417bb0()
                
                if (*(arg1 + 0x434) != 0)
                    sub_417060()
                
                eax = data_65aabc
                
                if (eax == 0)
                    goto label_4171a5
                
                *(eax + 0x434) = 1
                *(data_65aabc + 0x438) = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x240)
                sub_42b9a0(eax + 0x434, eax + 0x460)
                sub_416be0()
                sub_441b80(eax + 0x460, 0x557e44)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = ___std_fs_remove@4()
                *(arg1 + 0x42c) = 0
                return eax_6
            case 4
                sub_417bb0()
                
                if (*(arg1 + 0x434) != 0)
                    sub_417060()
                
                int32_t edi_2 = *(arg1 + 0x440)
                eax = sub_417bb0()
                void* esi_2 = data_65aabc
                
                if (esi_2 != 0)
                    int32_t* eax_7 = sub_41b1b0(esi_2 + 0x444, edi_2)
                    *(esi_2 + 0x434) = 2
                    *(esi_2 + 0x438) = edi_2
                    sub_416be0()
                    eax = data_65aabc
                    *(esi_2 + 0xc) = 0
                    *(esi_2 + 0x10) = 0
                    int32_t var_14 = 2
                    
                    if (eax != 0)
                        int32_t eax_8 = *(eax + 0x648)
                        int32_t var_10 = eax_8
                        int32_t var_c = eax_7[eax_8 * 5 + 0x47]
                        sub_441b80(eax_7, &var_14)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_11 = ___std_fs_remove@4()
                        *(arg1 + 0x42c) = 0
                        return eax_11
                
                goto label_4171a5
            case 5
                eax = data_65aabc
                
                if (eax != 0)
                    if (*(eax + 0x434) != 1 || *(eax + 0x438) != 0x7fffffff)
                        if (*(sub_411690() + 0x434) != 2)
                            goto label_417419
                        
                        sub_45e9a0(&data_5bb1f0:4)
                        int64_t xmm0_3 = data_5bb1e4
                        data_5bb1f8 = data_5bb1ec
                        int32_t eax_20 = data_5bb1fc
                        data_5bb1ec = eax_20
                        data_5bb1f0 = xmm0_3
                        data_5bb1e4:4 = 0
                        data_5bb1e4.d = 0
                        data_5bb1fc = eax_20 + 1
                        data_5bb1e0 = 2
                        data_5bb240 = 0x11
                        goto label_41741e
                    
                    sub_45e9a0(&data_5bb210:4)
                    int64_t xmm0_1 = data_5bb204
                    data_5bb218 = data_5bb20c
                    int32_t eax_13 = data_5bb21c
                    data_5bb20c = eax_13
                    data_5bb210 = xmm0_1
                    data_5bb204:4 = 0
                    data_5bb204.d = 0
                    data_5bb21c = eax_13 + 1
                    data_5bb200 = 0
                    sub_45e9a0(&data_5bb1f0:4)
                    int64_t xmm0_2 = data_5bb1e4
                    data_5bb1f8 = data_5bb1ec
                    int32_t eax_16 = data_5bb1fc
                    data_5bb1ec = eax_16
                    data_5bb1f0 = xmm0_2
                    data_5bb1e4:4 = 0
                    data_5bb1e4.d = 0
                    data_5bb1fc = eax_16 + 1
                    data_5bb1e0 = 2
                    data_5bb240 = 0x20
                    goto label_41741e
                
            label_4171a5:
                var_24_2 = "GetClient"
                var_28 = 0x74
                var_2c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_4 = "gClient"
            case 6
            label_417419:
                sub_417b50()
            label_41741e:
                eax = sub_417060()
                *(arg1 + 0x42c) = 0
                return eax
            case 7
                sub_417060()
                sub_416f80(0xffffffff)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = ___std_fs_remove@4()
                *(arg1 + 0x42c) = 0
                return eax_1
    
    sub_44e4d0(eax, &data_5559b1, ecx_4, var_2c, var_28, var_24_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
