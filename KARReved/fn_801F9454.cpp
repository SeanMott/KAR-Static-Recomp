//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801C992C.hpp"



void fn_801F9454(PPC::Runtime::GCContext* context)
{
/*801F9454 001F6254*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9458 001F6258*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F945C 001F625C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F9460 001F6260*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801F9464 001F6264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9468 001F6268*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F946C 001F626C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2154 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F9470 001F6270*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801F9474 001F6274*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F9478 001F6278*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F947C 001F627C*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F9480 001F6280*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F9484 001F6284*/ PPC::Runtime::ASM::bl(fn_801C992C);
/*801F9488 001F6288*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F948C 001F628C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F9490 001F6290*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9494 001F6294*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9498 001F6298*/ PPC::Runtime::ASM::blr();
}