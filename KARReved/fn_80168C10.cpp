//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80168C10(PPC::Runtime::GCContext* context)
{
/*80168C10 00165A10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80168C14 00165A14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80168C18 00165A18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168C1C 00165A1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80168C20 00165A20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80168C24 00165A24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80168C28 00165A28*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80168C2C 00165A2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80168C30 00165A30*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80168C34 00165A34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xadc, context->r3));
/*80168C38 00165A38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80168C3C 00165A3C*/ PPC::Runtime::ASM::beq(.L_80168C50);
/*80168C40 00165A40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80168C44 00165A44*/ PPC::Runtime::ASM::li(context->r4, 0x32);
/*80168C48 00165A48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80168C4C 00165A4C*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80168C50, 0x80168C50) //this is a jump label
/*80168C50 00165A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168C54 00165A54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80168C58 00165A58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80168C5C 00165A5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80168C60 00165A60*/ PPC::Runtime::ASM::blr();
}