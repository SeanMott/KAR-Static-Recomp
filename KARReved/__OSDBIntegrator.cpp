//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __OSDBIntegrator(PPC::Runtime::GCContext* context)
{
/*803D2C54 003CFA54*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803D2C58 003CFA58*/ PPC::Runtime::ASM::mflr(context->r3);
/*803D2C5C 003CFA5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*803D2C60 003CFA60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803D2C64 003CFA64*/ PPC::Runtime::ASM::oris(context->r3, context->r3, 0x8000);
/*803D2C68 003CFA68*/ PPC::Runtime::ASM::mtlr(context->r3);
/*803D2C6C 003CFA6C*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*803D2C70 003CFA70*/ PPC::Runtime::ASM::mtmsr(context->r3);
/*803D2C74 003CFA74*/ PPC::Runtime::ASM::blr();
}