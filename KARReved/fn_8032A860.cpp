//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8032A860(PPC::Runtime::GCContext* context)
{
/*8032A860 00327660*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8032A864 00327664*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032A868 00327668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032A86C 0032766C*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*8032A870 00327670*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8032A874 00327674*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032A878 00327678*/ PPC::Runtime::ASM::bctrl();
/*8032A87C 0032767C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032A880 00327680*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032A884 00327684*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8032A888 00327688*/ PPC::Runtime::ASM::blr();
}