//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006580C.hpp"
#include "fn_800665F8.hpp"



void fn_80065FFC(PPC::Runtime::GCContext* context)
{
/*80065FFC 00062DFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80066000 00062E00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80066004 00062E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80066008 00062E08*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8006600C 00062E0C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 80066010 00062E10  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80066014 00062E14*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_217 @ Get_MemoryOffset_HighBit);
/*80066018 00062E18*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8006601C 00062E1C*/ PPC::Runtime::ASM::addi(context->r28, context->r3, MemoryOffset_217 @ Get_MemoryOffset_LowBit);
/*80066020 00062E20*/ PPC::Runtime::ASM::bne(.L_8006602C);
/*80066024 00062E24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80066028 00062E28*/ PPC::Runtime::ASM::b(.L_80066198);
RUNTIME_PPC_JUMP_LABEL(.L_8006602C, 0x8006602C) //this is a jump label
/*8006602C 00062E2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80066030 00062E30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*80066034 00062E34*/ PPC::Runtime::ASM::b(.L_8006604C);
RUNTIME_PPC_JUMP_LABEL(.L_80066038, 0x80066038) //this is a jump label
/*80066038 00062E38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8006603C 00062E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80066040 00062E40*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*80066044 00062E44*/ PPC::Runtime::ASM::beq(.L_80066054);
/*80066048 00062E48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8006604C, 0x8006604C) //this is a jump label
/*8006604C 00062E4C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80066050 00062E50*/ PPC::Runtime::ASM::bne(.L_80066038);
RUNTIME_PPC_JUMP_LABEL(.L_80066054, 0x80066054) //this is a jump label
/*80066054 00062E54*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80066058 00062E58*/ PPC::Runtime::ASM::beq(.L_80066060);
/*8006605C 00062E5C*/ PPC::Runtime::ASM::b(.L_80066198);
RUNTIME_PPC_JUMP_LABEL(.L_80066060, 0x80066060) //this is a jump label
/*80066060 00062E60*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x3);
/*80066064 00062E64*/ PPC::Runtime::ASM::bge(.L_80066198);
/*80066068 00062E68*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006606C 00062E6C*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*80066070 00062E70*/ PPC::Runtime::ASM::bl(fn_8006580C);
/* 80066074 00062E74  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80066078 00062E78*/ PPC::Runtime::ASM::bne(.L_80066198);
/*8006607C 00062E7C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80066080 00062E80*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80066084 00062E84*/ PPC::Runtime::ASM::ble(.L_80066094);
/*80066088 00062E88*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8006608C 00062E8C*/ PPC::Runtime::ASM::bge(.L_80066094);
/*80066090 00062E90*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80066094, 0x80066094) //this is a jump label
/*80066094 00062E94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80066098 00062E98*/ PPC::Runtime::ASM::bne(.L_800660AC);
/*8006609C 00062E9C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*800660A0 00062EA0*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x84);
/*800660A4 00062EA4*/ PPC::Runtime::ASM::li(context->r4, 0x171);
/*800660A8 00062EA8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800660AC, 0x800660AC) //this is a jump label
/*800660AC 00062EAC*/ PPC::Runtime::ASM::addi(context->r27, context->r28, 0x60);
/*800660B0 00062EB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800660B4 00062EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800660B8 00062EB8*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800660BC 00062EBC*/ PPC::Runtime::ASM::bne(.L_800660D0);
/*800660C0 00062EC0*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x18);
/*800660C4 00062EC4*/ PPC::Runtime::ASM::add(context->r3, context->r27, context->r0);
/*800660C8 00062EC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800660CC 00062ECC*/ PPC::Runtime::ASM::b(.L_800660F4);
RUNTIME_PPC_JUMP_LABEL(.L_800660D0, 0x800660D0) //this is a jump label
/*800660D0 00062ED0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800660D4 00062ED4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xb4);
/*800660D8 00062ED8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800660DC 00062EDC*/ PPC::Runtime::ASM::bl(OSReport);
/*800660E0 00062EE0*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*800660E4 00062EE4*/ PPC::Runtime::ASM::li(context->r4, 0x177);
/*800660E8 00062EE8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52EC @ Get_MemoryOffset_SDA21);
/*800660EC 00062EEC*/ PPC::Runtime::ASM::bl(fn___assert);
/*800660F0 00062EF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800660F4, 0x800660F4) //this is a jump label
/*800660F4 00062EF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800660F8 00062EF8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800660FC 00062EFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80066100 00062F00*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80066104 00062F04*/ PPC::Runtime::ASM::ble(.L_80066114);
/*80066108 00062F08*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8006610C 00062F0C*/ PPC::Runtime::ASM::bge(.L_80066114);
/*80066110 00062F10*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80066114, 0x80066114) //this is a jump label
/*80066114 00062F14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80066118 00062F18*/ PPC::Runtime::ASM::bne(.L_8006612C);
/*8006611C 00062F1C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*80066120 00062F20*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x84);
/*80066124 00062F24*/ PPC::Runtime::ASM::li(context->r4, 0x181);
/*80066128 00062F28*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8006612C, 0x8006612C) //this is a jump label
/*8006612C 00062F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80066130 00062F30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80066134 00062F34*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80066138 00062F38*/ PPC::Runtime::ASM::bne(.L_80066150);
/*8006613C 00062F3C*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x18);
/*80066140 00062F40*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x60);
/*80066144 00062F44*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x8);
/*80066148 00062F48*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*8006614C 00062F4C*/ PPC::Runtime::ASM::b(.L_80066174);
RUNTIME_PPC_JUMP_LABEL(.L_80066150, 0x80066150) //this is a jump label
/*80066150 00062F50*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80066154 00062F54*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xb4);
/*80066158 00062F58*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8006615C 00062F5C*/ PPC::Runtime::ASM::bl(OSReport);
/*80066160 00062F60*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*80066164 00062F64*/ PPC::Runtime::ASM::li(context->r4, 0x187);
/*80066168 00062F68*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52EC @ Get_MemoryOffset_SDA21);
/*8006616C 00062F6C*/ PPC::Runtime::ASM::bl(fn___assert);
/*80066170 00062F70*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80066174, 0x80066174) //this is a jump label
/*80066174 00062F74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80066178 00062F78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8006617C 00062F7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80066180 00062F80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80066184 00062F84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80066188 00062F88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8006618C 00062F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80066190 00062F90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80066194 00062F94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80066198, 0x80066198) //this is a jump label
/*80066198 00062F98*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8006619C 00062F9C*/ PPC::Runtime::ASM::beq(.L_800661E4);
/*800661A0 00062FA0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*800661A4 00062FA4*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800661A8 00062FA8*/ PPC::Runtime::ASM::bge(.L_800661B0);
/*800661AC 00062FAC*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800661B0, 0x800661B0) //this is a jump label
/*800661B0 00062FB0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800661B4 00062FB4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800661B8 00062FB8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D52D8 @ Get_MemoryOffset_SDA21);
/*800661BC 00062FBC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52DC @ Get_MemoryOffset_SDA21);
/*800661C0 00062FC0*/ PPC::Runtime::ASM::bl(fn_800665F8);
/*800661C4 00062FC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*800661C8 00062FC8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800661CC 00062FCC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 25, 31);
/*800661D0 00062FD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800661D4 00062FD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*800661D8 00062FD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r27));
/*800661DC 00062FDC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*800661E0 00062FE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_800661E4, 0x800661E4) //this is a jump label
/*800661E4 00062FE4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800661E8 00062FE8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800661EC 00062FEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800661F0 00062FF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800661F4 00062FF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800661F8 00062FF8*/ PPC::Runtime::ASM::blr();
}