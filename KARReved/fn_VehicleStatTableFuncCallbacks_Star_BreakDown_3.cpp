//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801EBC90.hpp"
#include "fn_801D9064.hpp"
#include "fn_801D8F7C.hpp"
#include "fn_accelerateStar.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_BreakDown_3(PPC::Runtime::GCContext* context)
{
/*801F0264 001ED064*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0268 001ED068*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F026C 001ED06C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0270 001ED070*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F0274 001ED074*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F0278 001ED078*/ PPC::Runtime::ASM::bl(fn_801EBC90);
/*801F027C 001ED07C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F0280 001ED080*/ PPC::Runtime::ASM::bl(fn_801D9064);
/*801F0284 001ED084*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F0288 001ED088*/ PPC::Runtime::ASM::bl(fn_801D8F7C);
/*801F028C 001ED08C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F0290 001ED090*/ PPC::Runtime::ASM::bl(fn_accelerateStar);
/*801F0294 001ED094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0298 001ED098*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F029C 001ED09C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F02A0 001ED0A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F02A4 001ED0A4*/ PPC::Runtime::ASM::blr();
}