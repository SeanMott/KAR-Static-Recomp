//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802823D8(PPC::Runtime::GCContext* context)
{
/*802823D8 0027F1D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802823DC 0027F1DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802823E0 0027F1E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802823E4 0027F1E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802823E8 0027F1E8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*802823EC 0027F1EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802823F0 0027F1F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802823F4 0027F1F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802823F8 0027F1F8*/ PPC::Runtime::ASM::blr();
}