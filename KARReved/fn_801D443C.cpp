//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D4150.hpp"
#include "fn_801D59D4.hpp"



void fn_801D443C(PPC::Runtime::GCContext* context)
{
/*801D443C 001D123C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D4440 001D1240*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D4444 001D1244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D4448 001D1248*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D444C 001D124C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801D4450 001D1250*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D4454 001D1254*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D4458 001D1258*/ PPC::Runtime::ASM::bl(fn_801D4150);
/*801D445C 001D125C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801D4460 001D1260*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801D4464 001D1264*/ PPC::Runtime::ASM::bl(fn_801D59D4);
/*801D4468 001D1268*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D446C 001D126C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D4470 001D1270*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D4474 001D1274*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D4478 001D1278*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D447C 001D127C*/ PPC::Runtime::ASM::blr();
}