//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8019AA54(PPC::Runtime::GCContext* context)
{
/*8019AA54 00197854*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r3));
/*8019AA58 00197858*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 27);
/*8019AA5C 0019785C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8019AA60 00197860*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8019AA64 00197864*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8019AA68 00197868*/ PPC::Runtime::ASM::blr();
}