//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memmove.hpp"
#include "memmove.hpp"



void fn_PPPInsertOpt(PPC::Runtime::GCContext* context)
{
/*8047FB24 0047C924*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047FB28 0047C928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047FB2C 0047C92C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*8047FB30 0047C930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047FB34 0047C934*/ PPC::Runtime::ASM::addi(context->r31, context->r6, 0x0);
/*8047FB38 0047C938*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047FB3C 0047C93C*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*8047FB40 0047C940*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047FB44 0047C944*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*8047FB48 0047C948*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 16);
/*8047FB4C 0047C94C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*8047FB50 0047C950*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*8047FB54 0047C954*/ PPC::Runtime::ASM::subf(context->r5, context->r30, context->r0);
/*8047FB58 0047C958*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*8047FB5C 0047C95C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x0);
/*8047FB60 0047C960*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*8047FB64 0047C964*/ PPC::Runtime::ASM::bl(memmove);
/*8047FB68 0047C968*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047FB6C 0047C96C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047FB70 0047C970*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*8047FB74 0047C974*/ PPC::Runtime::ASM::bl(memmove);
/*8047FB78 0047C978*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047FB7C 0047C97C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047FB80 0047C980*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*8047FB84 0047C984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047FB88 0047C988*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047FB8C 0047C98C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047FB90 0047C990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*8047FB94 0047C994*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047FB98 0047C998*/ PPC::Runtime::ASM::blr();
}