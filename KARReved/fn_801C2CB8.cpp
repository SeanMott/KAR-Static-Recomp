//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C2CB8(PPC::Runtime::GCContext* context)
{
/*801C2CB8 001BFAB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a8, context->r3));
/*801C2CBC 001BFABC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801C2CC0 001BFAC0*/ PPC::Runtime::ASM::beqlr();
/*801C2CC4 001BFAC4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801C2CC8 001BFAC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a8, context->r3));
/*801C2CCC 001BFACC*/ PPC::Runtime::ASM::blr();
}