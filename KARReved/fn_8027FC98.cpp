//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027FC98(PPC::Runtime::GCContext* context)
{
/*8027FC98 0027CA98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027FC9C 0027CA9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027FCA0 0027CAA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027FCA4 0027CAA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027FCA8 0027CAA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8027FCAC 0027CAAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027FCB0 0027CAB0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8027FCB4 0027CAB4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027FCB8 0027CAB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FCBC 0027CABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027FCC0 0027CAC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027FCC4 0027CAC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027FCC8 0027CAC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027FCCC 0027CACC*/ PPC::Runtime::ASM::blr();
}