//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E85A8.hpp"



void fn_8010F854(PPC::Runtime::GCContext* context)
{
/*8010F854 0010C654*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010F858 0010C658*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010F85C 0010C65C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6370 @ Get_MemoryOffset_SDA21);
/*8010F860 0010C660*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8010F864 0010C664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F868 0010C668*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010F86C 0010C66C*/ PPC::Runtime::ASM::bl(fn_800E85A8);
/*8010F870 0010C670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F874 0010C674*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F878 0010C678*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F87C 0010C67C*/ PPC::Runtime::ASM::blr();
}