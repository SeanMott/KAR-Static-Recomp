//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80185DE0(PPC::Runtime::GCContext* context)
{
/*80185DE0 00182BE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80185DE4 00182BE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80185DE8 00182BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185DEC 00182BEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80185DF0 00182BF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80185DF4 00182BF4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80185DF8 00182BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185DFC 00182BFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185E00 00182C00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80185E04 00182C04*/ PPC::Runtime::ASM::blr();
}