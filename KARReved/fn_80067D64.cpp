//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80067D64(PPC::Runtime::GCContext* context)
{
/*80067D64 00064B64*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80067D68 00064B68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067D6C 00064B6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067D70 00064B70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f1);
/*80067D74 00064B74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DEB40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067D78 00064B78*/ PPC::Runtime::ASM::bge(.L_80067D84);
/*80067D7C 00064B7C*/ PPC::Runtime::ASM::fneg(context->f3, context->f4);
/*80067D80 00064B80*/ PPC::Runtime::ASM::b(.L_80067D88);
RUNTIME_PPC_JUMP_LABEL(.L_80067D84, 0x80067D84) //this is a jump label
/*80067D84 00064B84*/ PPC::Runtime::ASM::fmr(context->f3, context->f4);
RUNTIME_PPC_JUMP_LABEL(.L_80067D88, 0x80067D88) //this is a jump label
/*80067D88 00064B88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067D8C 00064B8C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067D90 00064B90*/ PPC::Runtime::ASM::bge(.L_80067DB8);
/*80067D94 00064B94*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80067D98 00064B98*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80067D9C 00064B9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067DA0 00064BA0*/ PPC::Runtime::ASM::blt(.L_80067DB0);
/*80067DA4 00064BA4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80067DA8 00064BA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80067DAC 00064BAC*/ PPC::Runtime::ASM::bge(.L_80067E34);
RUNTIME_PPC_JUMP_LABEL(.L_80067DB0, 0x80067DB0) //this is a jump label
/*80067DB0 00064BB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067DB4 00064BB4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067DB8, 0x80067DB8) //this is a jump label
/*80067DB8 00064BB8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80067DBC 00064BBC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80067DC0 00064BC0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80067DC4 00064BC4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f5);
/*80067DC8 00064BC8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f5);
/*80067DCC 00064BCC*/ PPC::Runtime::ASM::fdivs(context->f3, context->f3, context->f4);
/*80067DD0 00064BD0*/ PPC::Runtime::ASM::fdivs(context->f4, context->f2, context->f4);
/*80067DD4 00064BD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f3);
/*80067DD8 00064BD8*/ PPC::Runtime::ASM::ble(.L_80067E00);
/*80067DDC 00064BDC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067DE0 00064BE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067DE4 00064BE4*/ PPC::Runtime::ASM::ble(.L_80067DEC);
/*80067DE8 00064BE8*/ PPC::Runtime::ASM::fmr(context->f0, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067DEC, 0x80067DEC) //this is a jump label
/*80067DEC 00064BEC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067DF0 00064BF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f2);
/*80067DF4 00064BF4*/ PPC::Runtime::ASM::bge(.L_80067E20);
/*80067DF8 00064BF8*/ PPC::Runtime::ASM::fmr(context->f1, context->f4);
/*80067DFC 00064BFC*/ PPC::Runtime::ASM::b(.L_80067E20);
RUNTIME_PPC_JUMP_LABEL(.L_80067E00, 0x80067E00) //this is a jump label
/*80067E00 00064C00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067E04 00064C04*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f2);
/*80067E08 00064C08*/ PPC::Runtime::ASM::ble(.L_80067E10);
/*80067E0C 00064C0C*/ PPC::Runtime::ASM::fmr(context->f0, context->f4);
RUNTIME_PPC_JUMP_LABEL(.L_80067E10, 0x80067E10) //this is a jump label
/*80067E10 00064C10*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067E14 00064C14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067E18 00064C18*/ PPC::Runtime::ASM::bge(.L_80067E20);
/*80067E1C 00064C1C*/ PPC::Runtime::ASM::fmr(context->f1, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067E20, 0x80067E20) //this is a jump label
/*80067E20 00064C20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80067E24 00064C24*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80067E28 00064C28*/ PPC::Runtime::ASM::beq(.L_80067E34);
/*80067E2C 00064C2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067E30 00064C30*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067E34, 0x80067E34) //this is a jump label
/*80067E34 00064C34*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80067E38 00064C38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067E3C 00064C3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f2);
/*80067E40 00064C40*/ PPC::Runtime::ASM::bge(.L_80067E4C);
/*80067E44 00064C44*/ PPC::Runtime::ASM::fneg(context->f3, context->f4);
/*80067E48 00064C48*/ PPC::Runtime::ASM::b(.L_80067E50);
RUNTIME_PPC_JUMP_LABEL(.L_80067E4C, 0x80067E4C) //this is a jump label
/*80067E4C 00064C4C*/ PPC::Runtime::ASM::fmr(context->f3, context->f4);
RUNTIME_PPC_JUMP_LABEL(.L_80067E50, 0x80067E50) //this is a jump label
/*80067E50 00064C50*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067E54 00064C54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067E58 00064C58*/ PPC::Runtime::ASM::bge(.L_80067E80);
/*80067E5C 00064C5C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80067E60 00064C60*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80067E64 00064C64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067E68 00064C68*/ PPC::Runtime::ASM::blt(.L_80067E78);
/*80067E6C 00064C6C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80067E70 00064C70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80067E74 00064C74*/ PPC::Runtime::ASM::bge(.L_80067EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80067E78, 0x80067E78) //this is a jump label
/*80067E78 00064C78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067E7C 00064C7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067E80, 0x80067E80) //this is a jump label
/*80067E80 00064C80*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80067E84 00064C84*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80067E88 00064C88*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80067E8C 00064C8C*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f5);
/*80067E90 00064C90*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f5);
/*80067E94 00064C94*/ PPC::Runtime::ASM::fdivs(context->f3, context->f3, context->f4);
/*80067E98 00064C98*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f4);
/*80067E9C 00064C9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80067EA0 00064CA0*/ PPC::Runtime::ASM::ble(.L_80067EC0);
/*80067EA4 00064CA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80067EA8 00064CA8*/ PPC::Runtime::ASM::ble(.L_80067EB0);
/*80067EAC 00064CAC*/ PPC::Runtime::ASM::fmr(context->f0, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067EB0, 0x80067EB0) //this is a jump label
/*80067EB0 00064CB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*80067EB4 00064CB4*/ PPC::Runtime::ASM::bge(.L_80067ED8);
/*80067EB8 00064CB8*/ PPC::Runtime::ASM::fmr(context->f1, context->f2);
/*80067EBC 00064CBC*/ PPC::Runtime::ASM::b(.L_80067ED8);
RUNTIME_PPC_JUMP_LABEL(.L_80067EC0, 0x80067EC0) //this is a jump label
/*80067EC0 00064CC0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80067EC4 00064CC4*/ PPC::Runtime::ASM::ble(.L_80067ECC);
/*80067EC8 00064CC8*/ PPC::Runtime::ASM::fmr(context->f0, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80067ECC, 0x80067ECC) //this is a jump label
/*80067ECC 00064CCC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80067ED0 00064CD0*/ PPC::Runtime::ASM::bge(.L_80067ED8);
/*80067ED4 00064CD4*/ PPC::Runtime::ASM::fmr(context->f1, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067ED8, 0x80067ED8) //this is a jump label
/*80067ED8 00064CD8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80067EDC 00064CDC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80067EE0 00064CE0*/ PPC::Runtime::ASM::beq(.L_80067EEC);
/*80067EE4 00064CE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067EE8 00064CE8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067EEC, 0x80067EEC) //this is a jump label
/*80067EEC 00064CEC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80067EF0 00064CF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067EF4 00064CF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f2);
/*80067EF8 00064CF8*/ PPC::Runtime::ASM::bge(.L_80067F04);
/*80067EFC 00064CFC*/ PPC::Runtime::ASM::fneg(context->f3, context->f4);
/*80067F00 00064D00*/ PPC::Runtime::ASM::b(.L_80067F08);
RUNTIME_PPC_JUMP_LABEL(.L_80067F04, 0x80067F04) //this is a jump label
/*80067F04 00064D04*/ PPC::Runtime::ASM::fmr(context->f3, context->f4);
RUNTIME_PPC_JUMP_LABEL(.L_80067F08, 0x80067F08) //this is a jump label
/*80067F08 00064D08*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067F0C 00064D0C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067F10 00064D10*/ PPC::Runtime::ASM::bge(.L_80067F38);
/*80067F14 00064D14*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80067F18 00064D18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80067F1C 00064D1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f2);
/*80067F20 00064D20*/ PPC::Runtime::ASM::blt(.L_80067F30);
/*80067F24 00064D24*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80067F28 00064D28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80067F2C 00064D2C*/ PPC::Runtime::ASM::bge(.L_80067FA4);
RUNTIME_PPC_JUMP_LABEL(.L_80067F30, 0x80067F30) //this is a jump label
/*80067F30 00064D30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067F34 00064D34*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067F38, 0x80067F38) //this is a jump label
/*80067F38 00064D38*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80067F3C 00064D3C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80067F40 00064D40*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80067F44 00064D44*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f5);
/*80067F48 00064D48*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f5);
/*80067F4C 00064D4C*/ PPC::Runtime::ASM::fdivs(context->f3, context->f3, context->f4);
/*80067F50 00064D50*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f4);
/*80067F54 00064D54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80067F58 00064D58*/ PPC::Runtime::ASM::ble(.L_80067F78);
/*80067F5C 00064D5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80067F60 00064D60*/ PPC::Runtime::ASM::ble(.L_80067F68);
/*80067F64 00064D64*/ PPC::Runtime::ASM::fmr(context->f0, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067F68, 0x80067F68) //this is a jump label
/*80067F68 00064D68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*80067F6C 00064D6C*/ PPC::Runtime::ASM::bge(.L_80067F90);
/*80067F70 00064D70*/ PPC::Runtime::ASM::fmr(context->f1, context->f2);
/*80067F74 00064D74*/ PPC::Runtime::ASM::b(.L_80067F90);
RUNTIME_PPC_JUMP_LABEL(.L_80067F78, 0x80067F78) //this is a jump label
/*80067F78 00064D78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80067F7C 00064D7C*/ PPC::Runtime::ASM::ble(.L_80067F84);
/*80067F80 00064D80*/ PPC::Runtime::ASM::fmr(context->f0, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80067F84, 0x80067F84) //this is a jump label
/*80067F84 00064D84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80067F88 00064D88*/ PPC::Runtime::ASM::bge(.L_80067F90);
/*80067F8C 00064D8C*/ PPC::Runtime::ASM::fmr(context->f1, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80067F90, 0x80067F90) //this is a jump label
/*80067F90 00064D90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80067F94 00064D94*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80067F98 00064D98*/ PPC::Runtime::ASM::beq(.L_80067FA4);
/*80067F9C 00064D9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067FA0 00064DA0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067FA4, 0x80067FA4) //this is a jump label
/*80067FA4 00064DA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067FA8 00064DA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80067FAC 00064DAC*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80067FB0 00064DB0*/ PPC::Runtime::ASM::beq(.L_80067FC0);
/*80067FB4 00064DB4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*80067FB8 00064DB8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80067FBC 00064DBC*/ PPC::Runtime::ASM::bne(.L_80067FC8);
RUNTIME_PPC_JUMP_LABEL(.L_80067FC0, 0x80067FC0) //this is a jump label
/*80067FC0 00064DC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80067FC4 00064DC4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80067FC8, 0x80067FC8) //this is a jump label
/*80067FC8 00064DC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067FCC 00064DCC*/ PPC::Runtime::ASM::blr();
}