//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A1680.hpp"



void fn_800A9618(PPC::Runtime::GCContext* context)
{
/*800A9618 000A6418*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800A961C 000A641C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A9620 000A6420*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*800A9624 000A6424*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800A9628 000A6428*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A962C 000A642C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A9630 000A6430*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A9634 000A6434*/ PPC::Runtime::ASM::bl(fn_800A1680);
/*800A9638 000A6438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A963C 000A643C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A9640 000A6440*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800A9644 000A6444*/ PPC::Runtime::ASM::blr();
}