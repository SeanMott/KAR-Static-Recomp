//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802401AC(PPC::Runtime::GCContext* context)
{
/*802401AC 0023CFAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802401B0 0023CFB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802401B4 0023CFB4*/ PPC::Runtime::ASM::li(context->r4, 0x7ff);
/*802401B8 0023CFB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802401BC 0023CFBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802401C0 0023CFC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802401C4 0023CFC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802401C8 0023CFC8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAllByFlags);
/*802401CC 0023CFCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802401D0 0023CFD0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*802401D4 0023CFD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802401D8 0023CFD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802401DC 0023CFDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802401E0 0023CFE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802401E4 0023CFE4*/ PPC::Runtime::ASM::blr();
}