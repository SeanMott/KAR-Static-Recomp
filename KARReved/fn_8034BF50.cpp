//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034AD08.hpp"
#include "fn_8034CE94.hpp"
#include "fn_8037B33C.hpp"



void fn_8034BF50(PPC::Runtime::GCContext* context)
{
/*8034BF50 00348D50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x120, context->r1));
/*8034BF54 00348D54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034BF58 00348D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r1));
/*8034BF5C 00348D5C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x120);
/*8034BF60 00348D60*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8034BF64 00348D64*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8034BF68 00348D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8034BF6C 00348D6C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8034BF70 00348D70*/ PPC::Runtime::ASM::mr(context->r9, context->r8);
/*8034BF74 00348D74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8034BF78 00348D78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8034BF7C 00348D7C*/ PPC::Runtime::ASM::beq(.L_8034C118);
/*8034BF80 00348D80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8034BF84 00348D84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8034BF88 00348D88*/ PPC::Runtime::ASM::bne(.L_8034BF90);
/*8034BF8C 00348D8C*/ PPC::Runtime::ASM::b(.L_8034C118);
RUNTIME_PPC_JUMP_LABEL(.L_8034BF90, 0x8034BF90) //this is a jump label
/*8034BF90 00348D90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8034BF94 00348D94*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x50);
/*8034BF98 00348D98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8034BF9C 00348D9C*/ PPC::Runtime::ASM::beq(.L_8034C118);
/*8034BFA0 00348DA0*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*8034BFA4 00348DA4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8034BFA8 00348DA8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8034BFAC 00348DAC*/ PPC::Runtime::ASM::bl(fn_8034AD08);
/*8034BFB0 00348DB0*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x1c);
/*8034BFB4 00348DB4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8034BFB8 00348DB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034BFBC 00348DBC*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x10);
/*8034BFC0 00348DC0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8034BFC4 00348DC4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8034BFC8 00348DC8*/ PPC::Runtime::ASM::bl(fn_8034CE94);
/*8034BFCC 00348DCC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF52C @ Get_MemoryOffset_HighBit);
/*8034BFD0 00348DD0*/ PPC::Runtime::ASM::addic.(context->r3, context->r1, 0xd4);
/*8034BFD4 00348DD4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804BF52C @ Get_MemoryOffset_LowBit);
/*8034BFD8 00348DD8*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x24);
/*8034BFDC 00348DDC*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x28);
/*8034BFE0 00348DE0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8034BFE4 00348DE4*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x68);
/*8034BFE8 00348DE8*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x64);
/*8034BFEC 00348DEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8034BFF0 00348DF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8034BFF4 00348DF4*/ PPC::Runtime::ASM::beq(.L_8034C028);
/*8034BFF8 00348DF8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8034BFFC 00348DFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8034C000 00348E00*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*8034C004 00348E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034C008 00348E08*/ PPC::Runtime::ASM::beq(.L_8034C028);
/*8034C00C 00348E0C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8034C010 00348E10*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*8034C014 00348E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034C018 00348E18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034C01C 00348E1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8034C020 00348E20*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034C024 00348E24*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034C028, 0x8034C028) //this is a jump label
/*8034C028 00348E28*/ PPC::Runtime::ASM::addic.(context->r27, context->r1, 0x88);
/*8034C02C 00348E2C*/ PPC::Runtime::ASM::beq(.L_8034C070);
/*8034C030 00348E30*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8034C034 00348E34*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8034C038 00348E38*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8034C03C 00348E3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8034C040 00348E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8034C044 00348E44*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8034C048 00348E48*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8034C04C 00348E4C*/ PPC::Runtime::ASM::beq(.L_8034C070);
/*8034C050 00348E50*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8034C054 00348E54*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8034C058 00348E58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8034C05C 00348E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8034C060 00348E60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8034C064 00348E64*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8034C068 00348E68*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034C06C 00348E6C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034C070, 0x8034C070) //this is a jump label
/*8034C070 00348E70*/ PPC::Runtime::ASM::addic.(context->r4, context->r1, 0x7c);
/*8034C074 00348E74*/ PPC::Runtime::ASM::beq(.L_8034C094);
/*8034C078 00348E78*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*8034C07C 00348E7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*8034C080 00348E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8034C084 00348E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8034C088 00348E88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8034C08C 00348E8C*/ PPC::Runtime::ASM::beq(.L_8034C094);
/*8034C090 00348E90*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_8034C094, 0x8034C094) //this is a jump label
/*8034C094 00348E94*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8034C098 00348E98*/ PPC::Runtime::ASM::beq(.L_8034C0BC);
/*8034C09C 00348E9C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF504 @ Get_MemoryOffset_HighBit);
/*8034C0A0 00348EA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8034C0A4 00348EA4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF504 @ Get_MemoryOffset_LowBit);
/*8034C0A8 00348EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8034C0AC 00348EAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8034C0B0 00348EB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8034C0B4 00348EB4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034C0B8 00348EB8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034C0BC, 0x8034C0BC) //this is a jump label
/*8034C0BC 00348EBC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*8034C0C0 00348EC0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8034C0C4 00348EC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*8034C0C8 00348EC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8034C0CC 00348ECC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8034C0D0 00348ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8034C0D4 00348ED4*/ PPC::Runtime::ASM::beq(.L_8034C0F8);
/*8034C0D8 00348ED8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*8034C0DC 00348EDC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8034C0E0 00348EE0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*8034C0E4 00348EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8034C0E8 00348EE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8034C0EC 00348EEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8034C0F0 00348EF0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034C0F4 00348EF4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034C0F8, 0x8034C0F8) //this is a jump label
/*8034C0F8 00348EF8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*8034C0FC 00348EFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 1);
/*8034C100 00348F00*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*8034C104 00348F04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8034C108 00348F08*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r0);
/*8034C10C 00348F0C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8034C110 00348F10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8034C114 00348F14*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8034C118, 0x8034C118) //this is a jump label
/*8034C118 00348F18*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x120);
/*8034C11C 00348F1C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8034C120 00348F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r1));
/*8034C124 00348F24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034C128 00348F28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x120);
/*8034C12C 00348F2C*/ PPC::Runtime::ASM::blr();
}