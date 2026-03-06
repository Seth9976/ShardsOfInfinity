// 函数名称: sub_47f410
// 虚拟地址: 0x47f410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_47f410()
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_14
    char const* const var_10
    void* eax
    char* ecx_1
    
    if (data_cdf428 == 0)
        int32_t* eax_1 = sub_45cfa0(0x38)
        eax_1[3] += 1
        int32_t* edi_1 = *eax_1
        
        if (edi_1 == 0)
            sub_45ce30(eax_1)
            edi_1 = *eax_1
        
        *eax_1 = *edi_1
        _memset(edi_1, 0, 0x38)
        data_cdf428 = edi_1
        edi_1[0xd] = 0x3b83126f
        int32_t* eax_3 = sub_45cfa0(0x20)
        eax_3[3] += 1
        int32_t* ecx_3 = *eax_3
        
        if (ecx_3 == 0)
            sub_45ce30(eax_3)
            ecx_3 = *eax_3
        
        eax = *ecx_3
        *eax_3 = eax
        void* esi_3 = data_cdf428
        __builtin_memset(ecx_3, 0, 0x20)
        edi_1[1] = ecx_3
        
        if (esi_3 != 0)
            int32_t* esi_4 = *(esi_3 + 4)
            *esi_4 = 0
            esi_4[1] = 0
            esi_4[2] = 0x40
            esi_4[3] = 0
            sub_4bc5d0(esi_4)
            esi_4[4] = 0
            esi_4[5] = 0
            esi_4[6] = 0x40
            esi_4[7] = 0
            eax = sub_4bc650(&esi_4[4])
            void*** ebx_1 = data_cdf428
            
            if (ebx_1 == 0)
                goto label_47f4a7
            
            int32_t* eax_4 = sub_45cfa0(0x1c)
            eax_4[3] += 1
            void** esi_5 = *eax_4
            
            if (esi_5 == 0)
                sub_45ce30(eax_4)
                esi_5 = *eax_4
            
            eax = *esi_5
            *eax_4 = eax
            __builtin_memset(esi_5, 0, 0x14)
            esi_5[5] = 1
            esi_5[6] = 0
            *ebx_1 = esi_5
            
            if (*esi_5 == 0)
                void* eax_5 = sub_45cd70(0x1b000)
                void* ebx_2 = data_cdf428
                *esi_5 = eax_5
                esi_5[2] = 0x400
                eax = 0xd7e8
                esi_5[6] = "Structures"
                esi_5[5] = 0xd7e8
                
                if (ebx_2 == 0)
                    goto label_47f4a7
                
                int32_t* eax_6 = sub_45cfa0(0x1c)
                eax_6[3] += 1
                void** esi_6 = *eax_6
                
                if (esi_6 == 0)
                    sub_45ce30(eax_6)
                    esi_6 = *eax_6
                
                eax = *esi_6
                *eax_6 = eax
                __builtin_memset(esi_6, 0, 0x14)
                esi_6[5] = 1
                esi_6[6] = 0
                *(ebx_2 + 0xc) = esi_6
                
                if (*esi_6 == 0)
                    void* eax_7 = sub_45cd70(0x25000)
                    void* ebx_3 = data_cdf428
                    *esi_6 = eax_7
                    esi_6[2] = 0x400
                    eax = 0xdb60
                    esi_6[6] = "Flanims"
                    esi_6[5] = 0xdb60
                    
                    if (ebx_3 == 0)
                        goto label_47f4a7
                    
                    int32_t* eax_8 = sub_45cfa0(0x30)
                    eax_8[3] += 1
                    void** esi_7 = *eax_8
                    
                    if (esi_7 == 0)
                        sub_45ce30(eax_8)
                        esi_7 = *eax_8
                    
                    eax = *esi_7
                    *eax_8 = eax
                    __builtin_memset(esi_7, 0, 0x14)
                    esi_7[5] = 1
                    __builtin_memset(&esi_7[6], 0, 0x18)
                    *(ebx_3 + 0x10) = esi_7
                    
                    if (*esi_7 == 0)
                        void* eax_9 = sub_45cd70(0x1f000)
                        void* ebx_4 = data_cdf428
                        *esi_7 = eax_9
                        esi_7[2] = 0x400
                        eax = 0xd61c
                        esi_7[6] = "Particles"
                        esi_7[5] = 0xd61c
                        
                        if (ebx_4 == 0)
                            goto label_47f4a7
                        
                        void** eax_10 = sub_45cfa0(0x1c)
                        eax_10[3] += 1
                        void* esi_8 = *eax_10
                        
                        if (esi_8 == 0)
                            sub_45ce30(eax_10)
                            esi_8 = *eax_10
                        
                        eax = *esi_8
                        *eax_10 = eax
                        __builtin_memset(esi_8, 0, 0x14)
                        *(esi_8 + 0x14) = 1
                        *(esi_8 + 0x18) = 0
                        *(ebx_4 + 0x14) = esi_8
                        
                        if (*esi_8 == 0)
                            *esi_8 = sub_45cd70(0xd000)
                            *(esi_8 + 8) = 0x400
                            *(esi_8 + 0x18) = "Attachments"
                            bool cond:1 = data_ce19bc != 0
                            *(esi_8 + 0x14) = 0xd760
                            
                            if (cond:1)
                                return 0xd760
                            
                            jump(*(*data_65ae00 + 8))
                        
                        var_10 = "DataArray<struct Attachment>::DataArrayInitialize"
                    else
                        var_10 = "DataArray<struct ParticleSystem>::DataArrayInitialize"
                else
                    var_10 = "DataArray<struct Flanim>::DataArrayInitialize"
            else
                var_10 = "DataArray<struct Structure>::DataArrayInitialize"
            
            var_14 = 0xce
            ecx_1 = "mpBlock == NULL"
            var_18 = "c:\ax2017\engine\dataarray.h"
        else
        label_47f4a7:
            var_10 = "GetGameData"
            var_14 = 0x45
            var_18 = "c:\ax2017\engine\game.h"
            ecx_1 = "gpGameData"
    else
        var_10 = "GameInitialize"
        var_14 = 0x2b
        var_18 = "c:\ax2017\engine\game.cpp"
        ecx_1 = "gpGameData == NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
