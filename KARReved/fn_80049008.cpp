//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_80049008(PPC::Runtime::GCContext* context)
{
/*80049008 00045E08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004900C 00045E0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049010 00045E10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049014 00045E14*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80049018 00045E18*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004901C 00045E1C*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*80049020 00045E20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80049024 00045E24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80049028 00045E28*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8004902C 00045E2C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80049030 00045E30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80049034 00045E34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80049038 00045E38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004903C 00045E3C*/ PPC::Runtime::ASM::blr();
}