// 函数名称: sub_4be160
// 虚拟地址: 0x4be160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4be160(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Schedule@_TaskCollection@details@Concurrency@@QAEXPAV_UnrealizedChore@23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_7c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_44
    sub_4bdf50(&var_44, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_44
    int32_t* result
    int32_t var_5c
    char* var_54
    
    if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
        sub_4bdc10(&var_5c, arg2)
        var_8_1.b = 2
        int32_t eax_80 = var_5c
        
        if (eax_80 == 2 || eax_80 == 3 || eax_80 == 4)
            result = arg1
            *result = eax_80
            int32_t var_58
            result[1] = var_58
            char* eax_84 = var_54
            result[2] = eax_84
            
            if (eax_84 != 0 && *eax_84 != 0)
                char* eax_85 = sub_44f000(&result[2])
                *(eax_85 + 4) += 1
                eax_84 = var_54
            
            int32_t var_14_8 = 1
            var_8_1.b = 5
            
            if (data_cdf414 != 0 && eax_84 != 0 && *eax_84 != 0)
                char* eax_86 = sub_44f000(&var_54)
                int32_t temp0_1 = *(eax_86 + 4)
                *(eax_86 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_86, *(eax_86 + 0xc) + 0x10)
                    var_54 = &data_5559b1
            
            int32_t var_8_9 = 6
        else
            result = arg1
            result[2] = &data_5559b1
            *result = 1
            int32_t var_14_7 = 1
            var_8_1.b = 3
            
            if (data_cdf414 != 0)
                char* eax_81 = var_54
                
                if (eax_81 != 0 && *eax_81 != 0)
                    char* eax_82 = sub_44f000(&var_54)
                    int32_t temp1_1 = *(eax_82 + 4)
                    *(eax_82 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_82, *(eax_82 + 0xc) + 0x10)
                        var_54 = &data_5559b1
            
            int32_t var_8_8 = 4
    else
        int32_t var_38
        sub_4bde40(&var_38, arg2)
        var_8_1.b = 7
        int32_t eax_4 = var_38
        char* const var_30
        
        if (eax_4 == 2 || eax_4 == 3 || eax_4 == 4)
            sub_4bd500(eax_4.b, arg2, &var_5c, &data_556c38)
            var_8_1.b = 0xa
            int32_t eax_12 = var_5c
            
            if (eax_12 == 2 || eax_12 == 3 || eax_12 == 4)
                int32_t var_50
                sub_4bde40(&var_50, arg2)
                var_8_1.b = 0xe
                int32_t eax_18 = var_50
                char* const var_48
                
                if (eax_18 == 2 || eax_18 == 3 || eax_18 == 4)
                    int32_t var_74
                    sub_4bd500(eax_18.b, arg2, &var_74, U"e")
                    var_8_1.b = 0xf
                    int32_t eax_26 = var_74
                    char* var_6c
                    char* var_20
                    char* const var_1c
                    char* const var_18
                    
                    if (eax_26 == 2 || eax_26 == 3 || eax_26 == 4)
                        void var_68
                        sub_4bde40(&var_68, arg2)
                        var_8_1.b = 0x10
                        char* const var_60
                        
                        if (sub_4bd650(&var_68) == 0)
                            result = arg1
                            int32_t var_14_6 = 1
                            result[2] = &data_5559b1
                            *result = 1
                            var_8_1.b = 0x28
                            
                            if (data_cdf414 != 0)
                                char* const eax_70 = var_60
                                
                                if (eax_70 != 0 && *eax_70 != 0)
                                    char* eax_71 = sub_44f000(&var_60)
                                    int32_t temp5_1 = *(eax_71 + 4)
                                    *(eax_71 + 4) -= 1
                                    
                                    if (temp5_1 == 1)
                                        sub_45d050(eax_71, *(eax_71 + 0xc) + 0x10)
                                        var_60 = &data_5559b1
                            
                            var_8_1.b = 0x29
                            
                            if (data_cdf414 != 0)
                                char* eax_72 = var_6c
                                
                                if (eax_72 != 0 && *eax_72 != 0)
                                    char* eax_73 = sub_44f000(&var_6c)
                                    int32_t temp9_1 = *(eax_73 + 4)
                                    *(eax_73 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_45d050(eax_73, *(eax_73 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x2a
                            
                            if (data_cdf414 != 0)
                                char* const eax_74 = var_48
                                
                                if (eax_74 != 0 && *eax_74 != 0)
                                    char* eax_75 = sub_44f000(&var_48)
                                    int32_t temp13_1 = *(eax_75 + 4)
                                    *(eax_75 + 4) -= 1
                                    
                                    if (temp13_1 == 1)
                                        sub_45d050(eax_75, *(eax_75 + 0xc) + 0x10)
                                        var_48 = &data_5559b1
                            
                            var_8_1.b = 0x2b
                            
                            if (data_cdf414 != 0)
                                char* eax_76 = var_54
                                
                                if (eax_76 != 0 && *eax_76 != 0)
                                    char* eax_77 = sub_44f000(&var_54)
                                    int32_t temp17_1 = *(eax_77 + 4)
                                    *(eax_77 + 4) -= 1
                                    
                                    if (temp17_1 == 1)
                                        sub_45d050(eax_77, *(eax_77 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x2c
                            
                            if (data_cdf414 != 0)
                                char* const eax_78 = var_30
                                
                                if (eax_78 != 0 && *eax_78 != 0)
                                    char* eax_79 = sub_44f000(&var_30)
                                    int32_t temp20_1 = *(eax_79 + 4)
                                    *(eax_79 + 4) -= 1
                                    
                                    if (temp20_1 == 1)
                                        sub_45d050(eax_79, *(eax_79 + 0xc) + 0x10)
                                        var_30 = &data_5559b1
                            
                            int32_t var_8_7 = 0x2d
                        else
                            char* var_2c
                            sub_44f240(&var_2c, U"e")
                            var_8_1.b = 0x11
                            char* var_28
                            sub_44f240(&var_28, &data_556c38)
                            var_8_1.b = 0x12
                            var_8_1.b = 0x13
                            var_8_1.b = 0x14
                            var_8_1.b = 0x15
                            char* const var_24
                            sub_44f810(
                                sub_44f810(
                                    sub_44f810(sub_44f810(&var_30, &var_24, &var_28), &var_1c, 
                                        &var_48), 
                                    &var_20, &var_2c), 
                                &var_18, &var_60)
                            var_8_1.b = 0x18
                            
                            if (data_cdf414 != 0)
                                char* eax_47 = var_20
                                
                                if (eax_47 != 0 && *eax_47 != 0)
                                    char* eax_48 = sub_44f000(&var_20)
                                    int32_t temp6_1 = *(eax_48 + 4)
                                    *(eax_48 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_45d050(eax_48, *(eax_48 + 0xc) + 0x10)
                                        var_20 = &data_5559b1
                            
                            var_8_1.b = 0x1a
                            
                            if (data_cdf414 != 0)
                                char* const eax_49 = var_1c
                                
                                if (eax_49 != 0 && *eax_49 != 0)
                                    char* eax_50 = sub_44f000(&var_1c)
                                    int32_t temp10_1 = *(eax_50 + 4)
                                    *(eax_50 + 4) -= 1
                                    
                                    if (temp10_1 == 1)
                                        sub_45d050(eax_50, *(eax_50 + 0xc) + 0x10)
                                        var_1c = &data_5559b1
                            
                            var_8_1.b = 0x1c
                            
                            if (data_cdf414 != 0)
                                char* eax_51 = var_24
                                
                                if (eax_51 != 0 && *eax_51 != 0)
                                    char* eax_52 = sub_44f000(&var_24)
                                    int32_t temp14_1 = *(eax_52 + 4)
                                    *(eax_52 + 4) -= 1
                                    
                                    if (temp14_1 == 1)
                                        sub_45d050(eax_52, *(eax_52 + 0xc) + 0x10)
                                        var_24 = &data_5559b1
                            
                            var_8_1.b = 0x1e
                            
                            if (data_cdf414 != 0)
                                char* eax_53 = var_28
                                
                                if (eax_53 != 0 && *eax_53 != 0)
                                    char* eax_54 = sub_44f000(&var_28)
                                    int32_t temp18_1 = *(eax_54 + 4)
                                    *(eax_54 + 4) -= 1
                                    
                                    if (temp18_1 == 1)
                                        sub_45d050(eax_54, *(eax_54 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x20
                            
                            if (data_cdf414 != 0)
                                char* eax_55 = var_2c
                                
                                if (eax_55 != 0 && *eax_55 != 0)
                                    char* eax_56 = sub_44f000(&var_2c)
                                    int32_t temp21_1 = *(eax_56 + 4)
                                    *(eax_56 + 4) -= 1
                                    
                                    if (temp21_1 == 1)
                                        sub_45d050(eax_56, *(eax_56 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x1f
                            result = arg1
                            sub_4bdde0(&var_18, *arg2, result, &var_18)
                            int32_t var_14_5 = 1
                            var_8_1.b = 0x21
                            
                            if (data_cdf414 != 0)
                                char* const eax_58 = var_18
                                
                                if (eax_58 != 0 && *eax_58 != 0)
                                    char* eax_59 = sub_44f000(&var_18)
                                    int32_t temp23_1 = *(eax_59 + 4)
                                    *(eax_59 + 4) -= 1
                                    
                                    if (temp23_1 == 1)
                                        sub_45d050(eax_59, *(eax_59 + 0xc) + 0x10)
                                        var_18 = &data_5559b1
                            
                            var_8_1.b = 0x22
                            
                            if (data_cdf414 != 0)
                                char* eax_60 = var_60
                                
                                if (eax_60 != 0 && *eax_60 != 0)
                                    char* eax_61 = sub_44f000(&var_60)
                                    int32_t temp25_1 = *(eax_61 + 4)
                                    *(eax_61 + 4) -= 1
                                    
                                    if (temp25_1 == 1)
                                        sub_45d050(eax_61, *(eax_61 + 0xc) + 0x10)
                                        var_60 = &data_5559b1
                            
                            var_8_1.b = 0x23
                            
                            if (data_cdf414 != 0)
                                char* eax_62 = var_6c
                                
                                if (eax_62 != 0 && *eax_62 != 0)
                                    char* eax_63 = sub_44f000(&var_6c)
                                    int32_t temp27_1 = *(eax_63 + 4)
                                    *(eax_63 + 4) -= 1
                                    
                                    if (temp27_1 == 1)
                                        sub_45d050(eax_63, *(eax_63 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x24
                            
                            if (data_cdf414 != 0)
                                char* const eax_64 = var_48
                                
                                if (eax_64 != 0 && *eax_64 != 0)
                                    char* eax_65 = sub_44f000(&var_48)
                                    int32_t temp29_1 = *(eax_65 + 4)
                                    *(eax_65 + 4) -= 1
                                    
                                    if (temp29_1 == 1)
                                        sub_45d050(eax_65, *(eax_65 + 0xc) + 0x10)
                                        var_48 = &data_5559b1
                            
                            var_8_1.b = 0x25
                            
                            if (data_cdf414 != 0)
                                char* eax_66 = var_54
                                
                                if (eax_66 != 0 && *eax_66 != 0)
                                    char* eax_67 = sub_44f000(&var_54)
                                    int32_t temp30_1 = *(eax_67 + 4)
                                    *(eax_67 + 4) -= 1
                                    
                                    if (temp30_1 == 1)
                                        sub_45d050(eax_67, *(eax_67 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x26
                            
                            if (data_cdf414 != 0)
                                char* const eax_68 = var_30
                                
                                if (eax_68 != 0 && *eax_68 != 0)
                                    char* eax_69 = sub_44f000(&var_30)
                                    int32_t temp31_1 = *(eax_69 + 4)
                                    *(eax_69 + 4) -= 1
                                    
                                    if (temp31_1 == 1)
                                        sub_45d050(eax_69, *(eax_69 + 0xc) + 0x10)
                                        var_30 = &data_5559b1
                            
                            int32_t var_8_6 = 0x27
                    else
                        sub_44f240(&var_20, &data_556c38)
                        var_8_1.b = 0x2f
                        var_8_1.b = 0x30
                        sub_44f810(sub_44f810(&var_30, &var_1c, &var_20), &var_18, &var_48)
                        var_8_1.b = 0x33
                        
                        if (data_cdf414 != 0)
                            char* eax_28 = var_1c
                            
                            if (eax_28 != 0 && *eax_28 != 0)
                                char* eax_29 = sub_44f000(&var_1c)
                                int32_t temp11_1 = *(eax_29 + 4)
                                *(eax_29 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                                    var_1c = &data_5559b1
                        
                        var_8_1.b = 0x35
                        
                        if (data_cdf414 != 0)
                            char* eax_30 = var_20
                            
                            if (eax_30 != 0 && *eax_30 != 0)
                                char* eax_31 = sub_44f000(&var_20)
                                int32_t temp15_1 = *(eax_31 + 4)
                                *(eax_31 + 4) -= 1
                                
                                if (temp15_1 == 1)
                                    sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x34
                        result = arg1
                        sub_4bdde0(&var_18, *arg2, result, &var_18)
                        int32_t var_14_4 = 1
                        var_8_1.b = 0x36
                        
                        if (data_cdf414 != 0)
                            char* eax_33 = var_18
                            
                            if (eax_33 != 0 && *eax_33 != 0)
                                char* eax_34 = sub_44f000(&var_18)
                                int32_t temp19_1 = *(eax_34 + 4)
                                *(eax_34 + 4) -= 1
                                
                                if (temp19_1 == 1)
                                    sub_45d050(eax_34, *(eax_34 + 0xc) + 0x10)
                                    var_18 = &data_5559b1
                        
                        var_8_1.b = 0x37
                        
                        if (data_cdf414 != 0)
                            char* eax_35 = var_6c
                            
                            if (eax_35 != 0 && *eax_35 != 0)
                                char* eax_36 = sub_44f000(&var_6c)
                                int32_t temp22_1 = *(eax_36 + 4)
                                *(eax_36 + 4) -= 1
                                
                                if (temp22_1 == 1)
                                    sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x38
                        
                        if (data_cdf414 != 0)
                            char* const eax_37 = var_48
                            
                            if (eax_37 != 0 && *eax_37 != 0)
                                char* eax_38 = sub_44f000(&var_48)
                                int32_t temp24_1 = *(eax_38 + 4)
                                *(eax_38 + 4) -= 1
                                
                                if (temp24_1 == 1)
                                    sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                                    var_48 = &data_5559b1
                        
                        var_8_1.b = 0x39
                        
                        if (data_cdf414 != 0)
                            char* eax_39 = var_54
                            
                            if (eax_39 != 0 && *eax_39 != 0)
                                char* eax_40 = sub_44f000(&var_54)
                                int32_t temp26_1 = *(eax_40 + 4)
                                *(eax_40 + 4) -= 1
                                
                                if (temp26_1 == 1)
                                    sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x3a
                        
                        if (data_cdf414 != 0)
                            char* const eax_41 = var_30
                            
                            if (eax_41 != 0 && *eax_41 != 0)
                                char* eax_42 = sub_44f000(&var_30)
                                int32_t temp28_1 = *(eax_42 + 4)
                                *(eax_42 + 4) -= 1
                                
                                if (temp28_1 == 1)
                                    sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                                    var_30 = &data_5559b1
                        
                        int32_t var_8_5 = 0x3b
                else
                    result = arg1
                    sub_4bdde0(&var_30, *arg2, result, &var_30)
                    int32_t var_14_3 = 1
                    var_8_1.b = 0x3d
                    
                    if (data_cdf414 != 0)
                        char* eax_20 = var_48
                        
                        if (eax_20 != 0 && *eax_20 != 0)
                            char* eax_21 = sub_44f000(&var_48)
                            int32_t temp7_1 = *(eax_21 + 4)
                            *(eax_21 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                                var_48 = &data_5559b1
                    
                    var_8_1.b = 0x3e
                    
                    if (data_cdf414 != 0)
                        char* eax_22 = var_54
                        
                        if (eax_22 != 0 && *eax_22 != 0)
                            char* eax_23 = sub_44f000(&var_54)
                            int32_t temp12_1 = *(eax_23 + 4)
                            *(eax_23 + 4) -= 1
                            
                            if (temp12_1 == 1)
                                sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x3f
                    
                    if (data_cdf414 != 0)
                        char* const eax_24 = var_30
                        
                        if (eax_24 != 0 && *eax_24 != 0)
                            char* eax_25 = sub_44f000(&var_30)
                            int32_t temp16_1 = *(eax_25 + 4)
                            *(eax_25 + 4) -= 1
                            
                            if (temp16_1 == 1)
                                sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                                var_30 = &data_5559b1
                    
                    int32_t var_8_4 = 0x40
            else
                result = arg1
                sub_4bdd80(&var_30, *arg2, result, &var_30)
                int32_t var_14_2 = 1
                var_8_1.b = 0xb
                
                if (data_cdf414 != 0)
                    char* eax_14 = var_54
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_44f000(&var_54)
                        int32_t temp3_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                
                var_8_1.b = 0xc
                
                if (data_cdf414 != 0)
                    char* const eax_16 = var_30
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        char* eax_17 = sub_44f000(&var_30)
                        int32_t temp8_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                            var_30 = &data_5559b1
                
                int32_t var_8_3 = 0xd
        else
            result = arg1
            *result = data_e47140
            result[1] = data_e47144
            result[2] = data_e47148
            char* eax_8 = data_e47148
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&result[2])
                *(eax_9 + 4) += 1
            
            int32_t var_14_1 = 1
            var_8_1.b = 8
            
            if (data_cdf414 != 0)
                char* eax_10 = var_30
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_44f000(&var_30)
                    int32_t temp4_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                        var_30 = &data_5559b1
            
            int32_t var_8_2 = 9
    
    if (data_cdf414 != 0)
        char* var_3c
        char* eax_87 = var_3c
        
        if (eax_87 != 0 && *eax_87 != 0)
            char* eax_88 = sub_44f000(&var_3c)
            int32_t temp2_1 = *(eax_88 + 4)
            *(eax_88 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_88, *(eax_88 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
