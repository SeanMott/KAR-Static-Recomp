//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80286DF0(PPC::Runtime::GCContext* context)
{
/*80286DF0 00283BF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80286DF4 00283BF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80286DF8 00283BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286DFC 00283BFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286E00 00283C00*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DD938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286E04 00283C04*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80286E08 00283C08*/ PPC::Runtime::ASM::beq(.L_80286EFC);
/*80286E0C 00283C0C*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x18);
/*80286E10 00283C10*/ PPC::Runtime::ASM::beq(.L_80286E1C);
/*80286E14 00283C14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80286E18 00283C18*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80286E1C, 0x80286E1C) //this is a jump label
/*80286E1C 00283C1C*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x14);
/*80286E20 00283C20*/ PPC::Runtime::ASM::beq(.L_80286E44);
/*80286E24 00283C24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80286E28 00283C28*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80286E2C 00283C2C*/ PPC::Runtime::ASM::beq(.L_80286E44);
/*80286E30 00283C30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286E34 00283C34*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80286E38 00283C38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80286E3C 00283C3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80286E40 00283C40*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80286E44, 0x80286E44) //this is a jump label
/*80286E44 00283C44*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x10);
/*80286E48 00283C48*/ PPC::Runtime::ASM::beq(.L_80286E6C);
/*80286E4C 00283C4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80286E50 00283C50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80286E54 00283C54*/ PPC::Runtime::ASM::beq(.L_80286E6C);
/*80286E58 00283C58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286E5C 00283C5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80286E60 00283C60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80286E64 00283C64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80286E68 00283C68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80286E6C, 0x80286E6C) //this is a jump label
/*80286E6C 00283C6C*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0xc);
/*80286E70 00283C70*/ PPC::Runtime::ASM::beq(.L_80286E94);
/*80286E74 00283C74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80286E78 00283C78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80286E7C 00283C7C*/ PPC::Runtime::ASM::beq(.L_80286E94);
/*80286E80 00283C80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286E84 00283C84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80286E88 00283C88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80286E8C 00283C8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80286E90 00283C90*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80286E94, 0x80286E94) //this is a jump label
/*80286E94 00283C94*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x8);
/*80286E98 00283C98*/ PPC::Runtime::ASM::beq(.L_80286EBC);
/*80286E9C 00283C9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80286EA0 00283CA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80286EA4 00283CA4*/ PPC::Runtime::ASM::beq(.L_80286EBC);
/*80286EA8 00283CA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286EAC 00283CAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80286EB0 00283CB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80286EB4 00283CB4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80286EB8 00283CB8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80286EBC, 0x80286EBC) //this is a jump label
/*80286EBC 00283CBC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80286EC0 00283CC0*/ PPC::Runtime::ASM::beq(.L_80286EF4);
/*80286EC4 00283CC4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB7CC @ Get_MemoryOffset_HighBit);
/*80286EC8 00283CC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BB7CC @ Get_MemoryOffset_LowBit);
/*80286ECC 00283CCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80286ED0 00283CD0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDCA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286ED4 00283CD4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
/*80286ED8 00283CD8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80286EDC 00283CDC*/ PPC::Runtime::ASM::beq(.L_80286EF4);
/*80286EE0 00283CE0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB7B4 @ Get_MemoryOffset_HighBit);
/*80286EE4 00283CE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80286EE8 00283CE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BB7B4 @ Get_MemoryOffset_LowBit);
/*80286EEC 00283CEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80286EF0 00283CF0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80286EF4, 0x80286EF4) //this is a jump label
/*80286EF4 00283CF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80286EF8 00283CF8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80286EFC, 0x80286EFC) //this is a jump label
/*80286EFC 00283CFC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD934 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286F00 00283D00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80286F04 00283D04*/ PPC::Runtime::ASM::beq(.L_80286F50);
/*80286F08 00283D08*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80286F0C 00283D0C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDCA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286F10 00283D10*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286F14 00283D14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80286F18 00283D18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80286F1C 00283D1C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 30, 2, 29);
/*80286F20 00283D20*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r4, 30, 0, 1);
/*80286F24 00283D24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80286F28 00283D28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80286F2C 00283D2C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 30, 2, 29);
/*80286F30 00283D30*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r4, 30, 0, 1);
/*80286F34 00283D34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80286F38 00283D38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80286F3C 00283D3C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 30, 2, 29);
/*80286F40 00283D40*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 30, 0, 1);
/*80286F44 00283D44*/ PPC::Runtime::ASM::cmplw(context->r0, context->r6);
/*80286F48 00283D48*/ PPC::Runtime::ASM::beq(.L_80286F50);
/*80286F4C 00283D4C*/ PPC::Runtime::ASM::bl(fn_8038C770);
RUNTIME_PPC_JUMP_LABEL(.L_80286F50, 0x80286F50) //this is a jump label
/*80286F50 00283D50*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286F54 00283D54*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*80286F58 00283D58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286F5C 00283D5C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286F60 00283D60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80286F64 00283D64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286F68 00283D68*/ PPC::Runtime::ASM::blr();
}