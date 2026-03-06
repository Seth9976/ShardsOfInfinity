// 函数名称: sub_4414a0
// 虚拟地址: 0x4414a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4414a0(int32_t arg1, void* arg2, int32_t* arg3, char* arg4, int32_t arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* eax_2 = *(arg2 + 4)
    int32_t eax_3
    int32_t ecx
    char const* const edx
    
    if (eax_2 == 3)
        if (arg4 != eax_2)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        if (data_5bcaf8 == 0)
            if (data_5bccbd != 0)
                if (data_5bb244.d != 0x3e9)
                    ecx = 0
                    edx = "tblCards"
                    
                    if (data_5bb250.d == 0x3e9)
                        ecx = data_5bb250:4
                else
                    ecx = data_5bb244:4
                    edx = "tblCards"
                
                goto label_4414fb
            
            if (data_5bb244.d != 0x14)
                if (data_5bb250.d != 0x14)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_2
                
                ecx = data_5bb250:4
            else
                ecx = data_5bb244:4
            
            if (ecx == 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_2
            
            edx = "tblCards"
        label_4414fb:
            eax_3 = sub_47a160(ecx, edx)
        label_441505:
            eax_2 = sub_479400(eax_3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        if (data_5bb1e4.d != 0x1e)
            ecx = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx = data_5bb1f0:4
        else
            ecx = data_5bb1e4:4
        
        edx = "tbl_player_deck_zoom"
        goto label_4414fb
    
    char const* const var_f0
    int32_t var_ec
    char const* const var_e8_1
    char* ecx_4
    
    if (eax_2 == 1)
        eax_2 = arg4
        
        if (eax_2 != 3)
            if (eax_2 == 4)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_2
            
            if (eax_2 != 2)
                if (eax_2 != 0)
                    if (eax_2 == 1)
                        goto label_441857
                    
                    var_e8_1 = "GameSpecific_DragUpdateAction"
                    var_ec = 0x22b3
                    ecx_4 = "Halt"
                    goto label_4418a2
                
                int32_t ecx_13 = *(arg2 + 8)
                
                if (ecx_13 == 0)
                    goto label_4415d2
                
                uint32_t edx_10 = zx.d(ecx_13.w)
                
                if (edx_10 u>= data_5bcd80)
                    goto label_4416b8
                
                int32_t ebx_1 = data_5bcd7c
                eax_2 = edx_10 * 0x568
                
                if (*(eax_2 + ebx_1 + 0x564) != ecx_13)
                    goto label_4416b8
                
                void* esi_6 = edx_10 * 0x568 + ebx_1
                *(esi_6 + 0x518) = *(esi_6 + 0x10c)
                data_5bcca8 = 0
                *(esi_6 + 0x528) = sub_433eb0(esi_6)
            label_441857:
                data_5bcca8 = *(arg2 + 8)
                data_5bccac = *arg6
                data_5bccb0 = arg6[1]
                data_5bccb4 = *arg7
                int32_t eax_17 = arg7[1]
                data_5bccb8 = eax_17
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_17
            
            int32_t ecx_5 = *(arg2 + 8)
            
            if (ecx_5 == 0)
            label_4415d2:
                var_e8_1 = "DataArray<struct ShGfx>::DataArrayGet"
                var_ec = 0x6c
                var_f0 = "c:\ax2017\engine\dataarray.h"
                ecx_4 = "id != DATAID_NULL"
            else
                uint32_t edx_4 = zx.d(ecx_5.w)
                
                if (edx_4 u< data_5bcd80)
                    int32_t edi_2 = data_5bcd7c
                    eax_2 = edx_4 * 0x568
                    
                    if (*(eax_2 + edi_2 + 0x564) != ecx_5)
                        goto label_4416b8
                    
                    char* esi_4 = edx_4 * 0x568 + edi_2
                    int32_t eax_6
                    int32_t edx_5
                    eax_6, edx_5 = sub_434470()
                    void var_d4
                    int128_t* eax_8 = sub_434630(&var_d4, edx_5, esi_4, &var_d4)
                    int128_t var_74 = *eax_8
                    int128_t var_64_1 = eax_8[1]
                    int128_t var_54_1 = eax_8[2]
                    int128_t var_44_1 = eax_8[3]
                    int32_t var_24_1 = eax_8[5].d
                    int128_t var_34_1 = eax_8[4]
                    eax_2 = sub_432600(&esi_4[0xa0], &var_74)
                    data_5bcca8 = 0
                    *(esi_4 + 0x528) = 0
                    int128_t var_18
                    
                    if (eax_6 != 0)
                        if (eax_6 != 1)
                            var_e8_1 = "GameSpecific_DragUpdateAction"
                            var_ec = 0x229c
                            ecx_4 = "Halt"
                            goto label_4418a2
                        
                        eax_2 = sub_43f2e0(sub_481020(arg3, &var_18:8), &var_18:8, esi_4, 0, 1)
                        
                        if (eax_2 != 2)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                    
                    var_18 = *(esi_4 + 0x518)
                    int128_t* eax_11 = sub_432670(eax_2, &var_18, &esi_4[0xa0], 6, 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_11
                
            label_4416b8:
                var_e8_1 = "DataArray<struct ShGfx>::DataArrayGet"
                var_ec = 0x6d
                var_f0 = "c:\ax2017\engine\dataarray.h"
                ecx_4 = "DataArrayTryToGet(id) != NULL"
        else
            if (data_5bb1e4.d != 0x1e)
                ecx = 0
                
                if (data_5bb1f0.d == 0x1e)
                    ecx = data_5bb1f0:4
            else
                ecx = data_5bb1e4:4
            
            int32_t edx_2 = *(arg2 + 8)
            
            if (edx_2 == 0)
                goto label_4415d2
            
            uint32_t esi_1 = zx.d(edx_2.w)
            
            if (esi_1 u>= data_5bcd80)
                goto label_4416b8
            
            int32_t edi_1 = data_5bcd7c
            eax_2 = esi_1 * 0x568
            
            if (*(eax_2 + edi_1 + 0x564) != edx_2)
                goto label_4416b8
            
            int32_t* edx_3 = esi_1 * 0x568
            
            if (*(edx_3 + edi_1) != 0)
                var_e8_1 = "GameSpecific_DragUpdateAction"
                var_ec = 0x2253
                ecx_4 = "gfx.type == SHGFX_CARD"
                goto label_4418a2
            
            eax_2 = *(edx_3 + edi_1 + 0xc) - 6
            
            switch (eax_2)
                case nullptr
                    eax_3 = sub_47a160(ecx, "tbl_global_play")
                    data_5bcd68 = 1
                    goto label_441505
                case 1
                    edx = "tbl_player_hand"
                    goto label_4414fb
                case 3
                    edx = "tbl_player_discard_zoom"
                    goto label_4414fb
                case 4
                    int32_t esi_2 = data_65aabc
                    
                    if (esi_2 != 0)
                        edx = "tbl_opponent_construct_zoom"
                        
                        if (*(edx_3 + edi_1 + 8) == *(esi_2 + 0x648))
                            edx = "tbl_player_constructs"
                        
                        goto label_4414fb
                    
                    var_e8_1 = "GetClient"
                    var_ec = 0x74
                    var_f0 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                    ecx_4 = "gClient"
                default
                    var_e8_1 = "GameSpecific_DragUpdateAction"
                    var_ec = 0x226e
                    ecx_4 = "Halt"
                    goto label_4418a2
    else
        var_e8_1 = "GameSpecific_DragUpdateAction"
        var_ec = 0x224b
        ecx_4 = "item.type == HIT_GFX"
    label_4418a2:
        var_f0 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_4, var_f0, var_ec, var_e8_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
