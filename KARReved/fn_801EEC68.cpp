//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801C992C.hpp"



void fn_801EEC68(PPC::Runtime::GCContext* context)
{
/*801EEC68 001EBA68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EEC6C 001EBA6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EEC70 001EBA70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EEC74 001EBA74*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*801EEC78 001EBA78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EEC7C 001EBA7C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801EEC80 001EBA80*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EEC84 001EBA84*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801EEC88 001EBA88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EEC8C 001EBA8C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EEC90 001EBA90*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801EEC94 001EBA94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EEC98 001EBA98*/ PPC::Runtime::ASM::bl(fn_801C992C);
/*801EEC9C 001EBA9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EECA0 001EBAA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EECA4 001EBAA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EECA8 001EBAA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EECAC 001EBAAC*/ PPC::Runtime::ASM::blr();
}