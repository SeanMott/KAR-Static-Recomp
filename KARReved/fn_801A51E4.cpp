//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A4610.hpp"



void fn_801A51E4(PPC::Runtime::GCContext* context)
{
/*801A51E4 001A1FE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A51E8 001A1FE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A51EC 001A1FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A51F0 001A1FF0*/ PPC::Runtime::ASM::bl(fn_801A4610);
/*801A51F4 001A1FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A51F8 001A1FF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A51FC 001A1FFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A5200 001A2000*/ PPC::Runtime::ASM::blr();
}