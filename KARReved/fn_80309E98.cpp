//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_80379424.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379784.hpp"
#include "fn_80379784.hpp"
#include "fn_80381D6C.hpp"
#include "fn_80377C10.hpp"



void fn_80309E98(PPC::Runtime::GCContext* context)
{
/*80309E98 00306C98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80309E9C 00306C9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80309EA0 00306CA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80309EA4 00306CA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80309EA8 00306CA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80309EAC 00306CAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80309EB0 00306CB0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80309EB4 00306CB4*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*80309EB8 00306CB8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804DCA14 @ Get_MemoryOffset_HighBit);
/*80309EBC 00306CBC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*80309EC0 00306CC0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804DCA14 @ Get_MemoryOffset_LowBit);
/*80309EC4 00306CC4*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x8);
/*80309EC8 00306CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80309ECC 00306CCC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*80309ED0 00306CD0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80309ED4 00306CD4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80309ED8 00306CD8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80309EDC 00306CDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80309EE0 00306CE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80309EE4 00306CE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80309EE8 00306CE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80309EEC 00306CEC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80309EF0 00306CF0*/ PPC::Runtime::ASM::bctrl();
/*80309EF4 00306CF4*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*80309EF8 00306CF8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5208 @ Get_MemoryOffset_HighBit);
/*80309EFC 00306CFC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*80309F00 00306D00*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF3C0 @ Get_MemoryOffset_HighBit);
/*80309F04 00306D04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80309F08 00306D08*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80309F0C 00306D0C*/ PPC::Runtime::ASM::lis(context->r3, Struct_FuncPtrs_Offset_5 @ Get_MemoryOffset_HighBit);
/*80309F10 00306D10*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F5208 @ Get_MemoryOffset_LowBit);
/*80309F14 00306D14*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80309F18 00306D18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_FuncPtrs_Offset_5 @ Get_MemoryOffset_LowBit);
/*80309F1C 00306D1C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BF3C0 @ Get_MemoryOffset_LowBit);
/*80309F20 00306D20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3CB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309F24 00306D24*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80309F28 00306D28*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x38);
/*80309F2C 00306D2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3CC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80309F30 00306D30*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80309F34 00306D34*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80309F38 00306D38*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80309F3C 00306D3C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80309F40 00306D40*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80309F44 00306D44*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80309F48 00306D48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80309F4C 00306D4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80309F50 00306D50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80309F54 00306D54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*80309F58 00306D58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80309F5C 00306D5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80309F60 00306D60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80309F64 00306D64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*80309F68 00306D68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80309F6C 00306D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80309F70 00306D70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80309F74 00306D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80309F78 00306D78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80309F7C 00306D7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*80309F80 00306D80*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80309F84 00306D84*/ PPC::Runtime::ASM::bctrl();
/*80309F88 00306D88*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80309F8C 00306D8C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*80309F90 00306D90*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80309F94 00306D94*/ PPC::Runtime::ASM::bl(fn_80379424);
/*80309F98 00306D98*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80309F9C 00306D9C*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x90);
/*80309FA0 00306DA0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80309FA4 00306DA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80309FA8 00306DA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*80309FAC 00306DAC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80309FB0 00306DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*80309FB4 00306DB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*80309FB8 00306DB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80309FBC 00306DBC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80309FC0 00306DC0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80309FC4 00306DC4*/ PPC::Runtime::ASM::bctrl();
/*80309FC8 00306DC8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80309FCC 00306DCC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80309FD0 00306DD0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80309FD4 00306DD4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80309FD8 00306DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80309FDC 00306DDC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80309FE0 00306DE0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80309FE4 00306DE4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80309FE8 00306DE8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80309FEC 00306DEC*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*80309FF0 00306DF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80309FF4 00306DF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80309FF8 00306DF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80309FFC 00306DFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A000 00306E00*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A004 00306E04*/ PPC::Runtime::ASM::bctrl();
/*8030A008 00306E08*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*8030A00C 00306E0C*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0xdc);
/*8030A010 00306E10*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*8030A014 00306E14*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8030A018 00306E18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*8030A01C 00306E1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030A020 00306E20*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A024 00306E24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*8030A028 00306E28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*8030A02C 00306E2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A030 00306E30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8030A034 00306E34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A038 00306E38*/ PPC::Runtime::ASM::bctrl();
/*8030A03C 00306E3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*8030A040 00306E40*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*8030A044 00306E44*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*8030A048 00306E48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8030A04C 00306E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A050 00306E50*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*8030A054 00306E54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3CB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030A058 00306E58*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A05C 00306E5C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8030A060 00306E60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8030A064 00306E64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8030A068 00306E68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A06C 00306E6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A070 00306E70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8030A074 00306E74*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A078 00306E78*/ PPC::Runtime::ASM::bctrl();
/*8030A07C 00306E7C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030A080 00306E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8030A084 00306E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A088 00306E88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A08C 00306E8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A090 00306E90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A094 00306E94*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A098 00306E98*/ PPC::Runtime::ASM::bctrl();
/*8030A09C 00306E9C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8030A0A0 00306EA0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A0A4 00306EA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A0A8 00306EA8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r3));
/*8030A0AC 00306EAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r3));
/*8030A0B0 00306EB0*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x44);
/*8030A0B4 00306EB4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8030A0B8 00306EB8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8030A0BC 00306EBC*/ PPC::Runtime::ASM::bne(.L_8030A0D0);
/*8030A0C0 00306EC0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A0C4 00306EC4*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*8030A0C8 00306EC8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9B88 @ Get_MemoryOffset_SDA21);
/*8030A0CC 00306ECC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A0D0, 0x8030A0D0) //this is a jump label
/*8030A0D0 00306ED0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8030A0D4 00306ED4*/ PPC::Runtime::ASM::bne(.L_8030A0E8);
/*8030A0D8 00306ED8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A0DC 00306EDC*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*8030A0E0 00306EE0*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 6 @ Get_MemoryOffset_SDA21);
/*8030A0E4 00306EE4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A0E8, 0x8030A0E8) //this is a jump label
/*8030A0E8 00306EE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A0EC 00306EEC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*8030A0F0 00306EF0*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*8030A0F4 00306EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A0F8 00306EF8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8030A0FC 00306EFC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*8030A100 00306F00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A104 00306F04*/ PPC::Runtime::ASM::beq(.L_8030A148);
/*8030A108 00306F08*/ PPC::Runtime::ASM::bne(.L_8030A11C);
/*8030A10C 00306F0C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A110 00306F10*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8030A114 00306F14*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9B88 @ Get_MemoryOffset_SDA21);
/*8030A118 00306F18*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A11C, 0x8030A11C) //this is a jump label
/*8030A11C 00306F1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A120 00306F20*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8030A124 00306F24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8030A128 00306F28*/ PPC::Runtime::ASM::bne(.L_8030A138);
/*8030A12C 00306F2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8030A130 00306F30*/ PPC::Runtime::ASM::beq(.L_8030A138);
/*8030A134 00306F34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8030A138, 0x8030A138) //this is a jump label
/* 8030A138 00306F38  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8030A13C 00306F3C*/ PPC::Runtime::ASM::bne(.L_8030A148);
/*8030A140 00306F40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8030A144 00306F44*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8030A148, 0x8030A148) //this is a jump label
/*8030A148 00306F48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A14C 00306F4C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A150 00306F50*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8030A154 00306F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r3));
/*8030A158 00306F58*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*8030A15C 00306F5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A160 00306F60*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*8030A164 00306F64*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*8030A168 00306F68*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3CC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030A16C 00306F6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r4));
/*8030A170 00306F70*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8030A174 00306F74*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*8030A178 00306F78*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8030A17C 00306F7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8030A180 00306F80*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/* 8030A184 00306F84  4C C6 32 42 */ crset context->cr1eq
/*8030A188 00306F88*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*8030A18C 00306F8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A190 00306F90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r3));
/*8030A194 00306F94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A198 00306F98*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8030A19C 00306F9C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A1A0 00306FA0*/ PPC::Runtime::ASM::bctrl();
/*8030A1A4 00306FA4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A1A8 00306FA8*/ PPC::Runtime::ASM::lis(context->r3, 0x7);
/*8030A1AC 00306FAC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x10);
/*8030A1B0 00306FB0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8030A1B4 00306FB4*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*8030A1B8 00306FB8*/ PPC::Runtime::ASM::bl(fn_80379784);
/*8030A1BC 00306FBC*/ PPC::Runtime::ASM::lis(context->r4, 0x7);
/*8030A1C0 00306FC0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*8030A1C4 00306FC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x11);
/*8030A1C8 00306FC8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8030A1CC 00306FCC*/ PPC::Runtime::ASM::bl(fn_80379784);
/*8030A1D0 00306FD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A1D4 00306FD4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A1D8 00306FD8*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8030A1DC 00306FDC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xbb4);
/*8030A1E0 00306FE0*/ PPC::Runtime::ASM::bl(fn_80381D6C);
/*8030A1E4 00306FE4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030A1E8 00306FE8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A1EC 00306FEC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9BAC @ Get_MemoryOffset_SDA21);
/*8030A1F0 00306FF0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9BA4 @ Get_MemoryOffset_SDA21);
/*8030A1F4 00306FF4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8030A1F8 00306FF8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8030A1FC 00306FFC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8030A200 00307000*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8030A204 00307004*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9BDC @ Get_MemoryOffset_SDA21);
/*8030A208 00307008*/ PPC::Runtime::ASM::bl(fn_80377C10);
/*8030A20C 0030700C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*8030A210 00307010*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8030A214 00307014*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*8030A218 00307018*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8030A21C 0030701C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*8030A220 00307020*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A224 00307024*/ PPC::Runtime::ASM::bctrl();
/*8030A228 00307028*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030A22C 0030702C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8030A230 00307030*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8030A234 00307034*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8030A238 00307038*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030A23C 0030703C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030A240 00307040*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8030A244 00307044*/ PPC::Runtime::ASM::blr();
}