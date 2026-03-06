// 函数名称: sub_432dc0
// 虚拟地址: 0x432dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_432dc0(void* arg1, char* arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg3
    int32_t* ebx = arg3
    char const* const var_7c
    int32_t var_78
    char const* const var_74
    char* ecx
    int32_t esi_1
    
    if (data_5bb1e4.d != 0x1e)
        if (data_5bb1f0.d == 0x1e)
            esi_1 = data_5bb1f0:4
            goto label_432def
        
    label_43327d:
        var_74 = "CalcTransform"
        var_78 = 0x305
        ecx = "ui != UI2_NULL"
    label_43328c:
        var_7c = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    label_433296:
        sub_44e4d0(arg1, &data_5559b1, ecx, var_7c, var_78, var_74)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    esi_1 = data_5bb1e4:4
    label_432def:
    int32_t var_8_1 = esi_1
    
    if (esi_1 == 0)
        goto label_43327d
    
    if (arg2 != 0)
        *arg2 = 0
    
    arg1 = *ebx - 1
    
    if (arg1 u> 0x15)
    label_43326c:
        var_74 = "CalcTransform"
        var_78 = 0x3a8
        ecx = "Halt"
        goto label_43328c
    
    int32_t var_78_1
    int128_t var_64
    int128_t* eax_1
    int32_t eax_19
    
    switch (arg1)
        case nullptr
            int32_t* var_74_4 = arg3
            var_78_1 = ebx[2] + 1
        case 1
            arg1 = data_65aabc
            
            if (arg1 == 0)
            label_432e1d:
                var_74 = "GetClient"
                var_78 = 0x74
                var_7c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx = "gClient"
                goto label_433296
            
            arg3 = ebx[1]
            
            if (arg3 == *(arg1 + 0x648))
                goto label_432e43
            
            sub_47a240(sub_41aec0(arg3) - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 2
            int32_t ecx_5
            
            if (data_5bb244.d != 0x3eb)
                if (data_5bb250.d != 0x3eb)
                label_432ef9:
                    _memset(&var_64, 0, 0x54)
                    *arg4 = var_64
                    int128_t var_54
                    arg4[1] = var_54
                    int128_t var_44
                    arg4[2] = var_44
                    int128_t var_34
                    arg4[3] = var_34
                    int128_t var_24
                    arg4[4] = var_24
                    int32_t var_14
                    arg4[5].d = var_14
                    return arg4
                
                ecx_5 = data_5bb250:4
            else
                ecx_5 = data_5bb244:4
            
            if (ecx_5 == 0)
                goto label_432ef9
            
            eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
            goto label_432e5a
        case 5
            int32_t* var_74_5 = arg3
            var_78_1 = ebx[2]
        case 6
            eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
            goto label_432e5a
        case 7
            if (arg2 != 0)
                *arg2 = 1
            
            goto label_432e43
        case 8
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            arg3 = ebx[1]
            
            if (arg3 != *(arg1 + 0x648))
                goto label_432fff
            
            goto label_432e43
        case 0xa
        label_432e43:
            int32_t* var_74_1 = arg3
            var_78_1 = 0
        case 0xc
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            arg3 = ebx[1]
            
            if (arg3 == *(arg1 + 0x648))
                goto label_432e43
            
            sub_47a240(sub_41aec0(arg3) - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 0xd, 0xf
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            arg3 = ebx[1]
            
            if (arg3 == *(arg1 + 0x648))
                goto label_432e43
            
            sub_47a240(sub_41aec0(arg3) - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 0xe
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            arg3 = ebx[1]
            
            if (arg3 == *(arg1 + 0x648))
                goto label_432e43
            
            sub_47a240(sub_41aec0(arg3) - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 0x10
            eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
        label_432e5a:
            *arg4 = *eax_1
            arg4[1] = eax_1[1]
            arg4[2] = eax_1[2]
            arg4[3] = eax_1[3]
            arg4[4] = eax_1[4]
            arg4[5].d = eax_1[5].d
            return arg4
        case 0x11
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            arg3 = ebx[1]
            
            if (arg3 == *(arg1 + 0x648))
                eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
                goto label_432e5a
            
        label_432fff:
            eax_19 = sub_41aec0(arg3)
        label_43300d:
            sub_47a240(eax_19 - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 0x12
            void* esi_2 = data_65aabc
            
            if (esi_2 == 0)
                goto label_432e1d
            
            int32_t edi_1 = ebx[1]
            int32_t esi_3 = *(esi_2 + 0x648)
            char eax_18 = sub_432d60(edi_1)
            
            if (edi_1 != esi_3)
                if (eax_18 == 0)
                    eax_19 = sub_41aec0(ebx[1])
                    goto label_43300d
                
                eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
                goto label_432e5a
            
            if (eax_18 != 0)
                eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
                goto label_432e5a
            
            int32_t var_74_16 = edi_1
            var_78_1 = 0
        case 0x13
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            int32_t ecx_7 = ebx[1]
            
            if (ecx_7 == *(arg1 + 0x648))
                var_74 = "CalcTransform"
                var_78 = 0x327
                ecx = "Halt"
                goto label_43328c
            
            sub_47a240(sub_41aec0(ecx_7) - 1)
            eax_1 = sub_47a660(&var_64, 0)
            goto label_432e5a
        case 0x14
            goto label_43326c
        case 0x15
            arg1 = data_65aabc
            
            if (arg1 == 0)
                goto label_432e1d
            
            int32_t ecx_14 = ebx[1]
            
            if (ecx_14 != *(arg1 + 0x648))
                if (sub_432d00(ecx_14) == 0)
                    sub_47a240(sub_41aec0(ebx[1]) - 1)
                    eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
                else
                    eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
            else
                eax_1 = sub_47a4c0(&var_64, ebx[2], ebx[3])
            
            goto label_432e5a
    
    eax_1 = sub_47a660(&var_64, var_78_1)
    goto label_432e5a
}
