//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3DC.hpp"



void fn_801C11FC(PPC::Runtime::GCContext* context)
{
/*801C11FC 001BDFFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1200 001BE000*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1204 001BE004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1208 001BE008*/ PPC::Runtime::ASM::bl(fn_8019F3DC);
/*801C120C 001BE00C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1210 001BE010*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1214 001BE014*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1218 001BE018*/ PPC::Runtime::ASM::blr();
}