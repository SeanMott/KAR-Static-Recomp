//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013127C.hpp"
#include "fn_80059520.hpp"



void fn_80174014(PPC::Runtime::GCContext* context)
{
/*80174014 00170E14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80174018 00170E18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017401C 00170E1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174020 00170E20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80174024 00170E24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80174028 00170E28*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017402C 00170E2C*/ PPC::Runtime::ASM::bl(fn_8013127C);
/*80174030 00170E30*/ PPC::Runtime::ASM::lis(context->r4, lbl_804ACE84 @ Get_MemoryOffset_HighBit);
/*80174034 00170E34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80174038 00170E38*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804ACE84 @ Get_MemoryOffset_LowBit);
/*8017403C 00170E3C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80174040 00170E40*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xcc4);
/*80174044 00170E44*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80174048 00170E48*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8017404C 00170E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174050 00170E50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80174054 00170E54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80174058 00170E58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017405C 00170E5C*/ PPC::Runtime::ASM::blr();
}