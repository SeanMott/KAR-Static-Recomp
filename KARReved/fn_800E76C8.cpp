//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E76C8(PPC::Runtime::GCContext* context)
{
/*800E76C8 000E44C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E76CC 000E44CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E76D0 000E44D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E76D4 000E44D4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E76D8 000E44D8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800E76DC 000E44DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E76E0 000E44E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E76E4 000E44E4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800E76E8 000E44E8*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "grairflow." Get_MemoryOffset_HighBit);
/*800E76EC 000E44EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800E76F0 000E44F0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, String_Debug_ "grairflow." Get_MemoryOffset_LowBit);
/*800E76F4 000E44F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xd);
/*800E76F8 000E44F8*/ PPC::Runtime::ASM::beq(.L_800E770C);
/*800E76FC 000E44FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E7700 000E4500*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x58);
/*800E7704 000E4504*/ PPC::Runtime::ASM::li(context->r4, 0x1cb);
/*800E7708 000E4508*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E770C, 0x800E770C) //this is a jump label
/*800E770C 000E450C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800E7710 000E4510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800E7714 000E4514*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800E7718 000E4518*/ PPC::Runtime::ASM::beq(.L_800E772C);
/*800E771C 000E451C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E7720 000E4520*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xb0);
/*800E7724 000E4524*/ PPC::Runtime::ASM::li(context->r4, 0x1cf);
/*800E7728 000E4528*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E772C, 0x800E772C) //this is a jump label
/*800E772C 000E452C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800E7730 000E4530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E7734 000E4534*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E7738 000E4538*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E773C 000E453C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E7740 000E4540*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E7744 000E4544*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800E7748 000E4548*/ PPC::Runtime::ASM::blr();
}