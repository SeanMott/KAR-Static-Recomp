//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_800490F8(PPC::Runtime::GCContext* context)
{
/*800490F8 00045EF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800490FC 00045EFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049100 00045F00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049104 00045F04*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80049108 00045F08*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8004910C 00045F0C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80049110 00045F10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049114 00045F14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80049118 00045F18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004911C 00045F1C*/ PPC::Runtime::ASM::blr();
}