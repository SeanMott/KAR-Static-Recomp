//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetTexRegionCallback(PPC::Runtime::GCContext* context)
{
/*803CE0CC 003CAECC*/ PPC::Runtime::ASM::lwz(context->r4, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CE0D0 003CAED0*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r4));
/*803CE0D4 003CAED4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CE0D8 003CAED8*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*803CE0DC 003CAEDC*/ PPC::Runtime::ASM::blr();
}