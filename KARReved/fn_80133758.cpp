//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014CDBC.hpp"
#include "fn_8014D4C0.hpp"
#include "fn_8014D250.hpp"
#include "fn_8014DB98.hpp"



void fn_80133758(PPC::Runtime::GCContext* context)
{
/*80133758 00130558*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013375C 0013055C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133760 00130560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133764 00130564*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133768 00130568*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8013376C 0013056C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80133770 00130570*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80133774 00130574*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133778 00130578*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8013377C 0013057C*/ PPC::Runtime::ASM::bl(fn_8014CDBC);
/*80133780 00130580*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80133784 00130584*/ PPC::Runtime::ASM::bl(fn_8014D4C0);
/*80133788 00130588*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013378C 0013058C*/ PPC::Runtime::ASM::bl(fn_8014D250);
/*80133790 00130590*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80133794 00130594*/ PPC::Runtime::ASM::bl(fn_8014DB98);
/*80133798 00130598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013379C 0013059C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801337A0 001305A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801337A4 001305A4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801337A8 001305A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801337AC 001305AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801337B0 001305B0*/ PPC::Runtime::ASM::blr();
}