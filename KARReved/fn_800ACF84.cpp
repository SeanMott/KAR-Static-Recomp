//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800ACF84(PPC::Runtime::GCContext* context)
{
/*800ACF84 000A9D84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800ACF88 000A9D88*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ACF8C 000A9D8C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_HighBit);
/*800ACF90 000A9D90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800ACF94 000A9D94*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_LowBit);
/*800ACF98 000A9D98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800ACF9C 000A9D9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800ACFA0 000A9DA0*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DD6A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ACFA4 000A9DA4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 28, 28);
/*800ACFA8 000A9DA8*/ PPC::Runtime::ASM::beq(.L_800ACFC8);
/*800ACFAC 000A9DAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557090 @ Get_MemoryOffset_HighBit);
/*800ACFB0 000A9DB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ACFB4 000A9DB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557090 @ Get_MemoryOffset_LowBit);
/*800ACFB8 000A9DB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800ACFBC 000A9DBC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800ACFC0 000A9DC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800ACFC4 000A9DC4*/ PPC::Runtime::ASM::b(.L_800AD030);
RUNTIME_PPC_JUMP_LABEL(.L_800ACFC8, 0x800ACFC8) //this is a jump label
/*800ACFC8 000A9DC8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 29, 29);
/*800ACFCC 000A9DCC*/ PPC::Runtime::ASM::beq(.L_800ACFEC);
/*800ACFD0 000A9DD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557090 @ Get_MemoryOffset_HighBit);
/*800ACFD4 000A9DD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ACFD8 000A9DD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557090 @ Get_MemoryOffset_LowBit);
/*800ACFDC 000A9DDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800ACFE0 000A9DE0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800ACFE4 000A9DE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800ACFE8 000A9DE8*/ PPC::Runtime::ASM::b(.L_800AD030);
RUNTIME_PPC_JUMP_LABEL(.L_800ACFEC, 0x800ACFEC) //this is a jump label
/*800ACFEC 000A9DEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 20, 20);
/*800ACFF0 000A9DF0*/ PPC::Runtime::ASM::beq(.L_800AD010);
/*800ACFF4 000A9DF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557090 @ Get_MemoryOffset_HighBit);
/*800ACFF8 000A9DF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ACFFC 000A9DFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557090 @ Get_MemoryOffset_LowBit);
/*800AD000 000A9E00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD004 000A9E04*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800AD008 000A9E08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD00C 000A9E0C*/ PPC::Runtime::ASM::b(.L_800AD030);
RUNTIME_PPC_JUMP_LABEL(.L_800AD010, 0x800AD010) //this is a jump label
/*800AD010 000A9E10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 21, 21);
/*800AD014 000A9E14*/ PPC::Runtime::ASM::beq(.L_800AD030);
/*800AD018 000A9E18*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557090 @ Get_MemoryOffset_HighBit);
/*800AD01C 000A9E1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD020 000A9E20*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557090 @ Get_MemoryOffset_LowBit);
/*800AD024 000A9E24*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD028 000A9E28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800AD02C 000A9E2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800AD030, 0x800AD030) //this is a jump label
/*800AD030 000A9E30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AD034 000A9E34*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800AD038 000A9E38*/ PPC::Runtime::ASM::bl(fn_8044F9D4);
/*800AD03C 000A9E3C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*800AD040 000A9E40*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800AD044 000A9E44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AD048 000A9E48*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557090 @ Get_MemoryOffset_HighBit);
/*800AD04C 000A9E4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557090 @ Get_MemoryOffset_LowBit);
/*800AD050 000A9E50*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DF1C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD054 000A9E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AD058 000A9E58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF1B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD05C 000A9E5C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AD060 000A9E60*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD064 000A9E64*/ PPC::Runtime::ASM::fsubs(context->f3, context->f0, context->f1);
/*800AD068 000A9E68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD06C 000A9E6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD070 000A9E70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*800AD074 000A9E74*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*800AD078 000A9E78*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800AD07C 000A9E7C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800AD080 000A9E80*/ PPC::Runtime::ASM::bne(.L_800AD08C);
/*800AD084 000A9E84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD088 000A9E88*/ PPC::Runtime::ASM::b(.L_800AD09C);
RUNTIME_PPC_JUMP_LABEL(.L_800AD08C, 0x800AD08C) //this is a jump label
/*800AD08C 000A9E8C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f1);
/*800AD090 000A9E90*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800AD094 000A9E94*/ PPC::Runtime::ASM::bne(.L_800AD09C);
/*800AD098 000A9E98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800AD09C, 0x800AD09C) //this is a jump label
/*800AD09C 000A9E9C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AD0A0 000A9EA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD0A4 000A9EA4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AD0A8 000A9EA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800AD0AC 000A9EAC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800AD0B0 000A9EB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800AD0B4 000A9EB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800AD0B8 000A9EB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800AD0BC 000A9EBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AD0C0 000A9EC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800AD0C4 000A9EC4*/ PPC::Runtime::ASM::blr();
}