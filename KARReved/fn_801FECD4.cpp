//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801FECD4(PPC::Runtime::GCContext* context)
{
/*801FECD4 001FBAD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FECD8 001FBAD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FECDC 001FBADC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801FECE0 001FBAE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FECE4 001FBAE4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*801FECE8 001FBAE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FECEC 001FBAEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FECF0 001FBAF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FECF4 001FBAF4*/ PPC::Runtime::ASM::blr();
}