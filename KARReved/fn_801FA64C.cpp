//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"



void fn_801FA64C(PPC::Runtime::GCContext* context)
{
/*801FA64C 001F744C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA650 001F7450*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA654 001F7454*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E21B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FA658 001F7458*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*801FA65C 001F745C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA660 001F7460*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801FA664 001F7464*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801FA668 001F7468*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801FA66C 001F746C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA670 001F7470*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA674 001F7474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA678 001F7478*/ PPC::Runtime::ASM::blr();
}